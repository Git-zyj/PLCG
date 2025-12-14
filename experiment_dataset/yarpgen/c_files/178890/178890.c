/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((~18627), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(-623931144850689801, (((!(!5296))))));
                arr_4 [8] [i_1] = (min(3968, 27723));
                var_13 = ((((max(0, (arr_3 [i_0] [i_1 + 1] [i_1 - 1])))) ? ((max(46908, var_5))) : (((!((37813 <= (arr_3 [i_0] [i_1 + 2] [i_1]))))))));
                arr_5 [i_1 + 1] [i_1] |= ((-((-(((arr_2 [i_1] [i_1 + 1] [i_0]) ? 46909 : -1))))));
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
