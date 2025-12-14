/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (~var_16)));
                var_21 = var_4;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_22 |= (((253 <= 17319368717529508465) ? ((((((var_0 ? (arr_2 [i_0] [i_1] [i_2]) : var_13))) || 4979301095135995352))) : (min(780775825, 4095))));
                    var_23 *= ((-780775826 >= ((-1771875537 + (arr_0 [i_1 - 2])))));
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    var_24 = var_4;
                    var_25 = var_3;
                    var_26 = (((((((max(-780775826, (arr_4 [i_0] [i_1] [i_3])))) ? var_17 : 193))) ? (~var_6) : (arr_1 [i_0] [i_0])));
                }
                var_27 = (((((var_7 && 65528) ? (!var_5) : ((0 ? var_14 : var_9))))) ? 1 : (!255));
            }
        }
    }
    #pragma endscop
}
