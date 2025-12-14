/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = ((((393216 ? (min(var_11, var_12)) : (((((arr_3 [i_1 + 2] [i_2]) <= -323121124)))))) >= var_2));
                    var_14 = (arr_4 [i_0 + 1] [i_0]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_8 [i_3] = ((((((arr_6 [i_3]) ? (arr_6 [i_3]) : (arr_6 [i_3])))) ? (max(-323121124, 4294967294)) : ((min((arr_6 [i_3]), (arr_6 [i_3]))))));
        arr_9 [i_3] [i_3] = (max(((14132340356085980998 <= (((arr_7 [i_3]) ? (arr_6 [i_3]) : (arr_6 [i_3]))))), var_1));
        arr_10 [i_3] = min(14132340356085980978, ((134217727 ? (arr_7 [i_3]) : (arr_7 [i_3]))));
    }
    #pragma endscop
}
