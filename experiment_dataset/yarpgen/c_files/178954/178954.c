/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_2));
                var_14 = (min(((var_3 ? 882784362 : (min((arr_3 [i_0] [3]), var_8)))), (((arr_2 [i_0] [i_0 + 1] [i_1]) ? (arr_2 [i_0] [i_0 + 1] [15]) : 27949))));
                var_15 = (((((-6952120772676597645 ? (!27949) : (~var_12)))) ? (((arr_2 [17] [i_0] [i_1 + 1]) ^ var_7)) : ((((-27949 > 214) ? (((27949 ? 231 : 1259461750))) : 1665941212)))));
                arr_4 [18] [3] = (min(((((((min(214, -27949)))) < var_10))), var_8));
            }
        }
    }
    var_16 = 115;
    var_17 = var_9;
    #pragma endscop
}
