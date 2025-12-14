/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (min(((var_7 % ((32744 ? 7 : var_2)))), ((((7562407542459559530 ^ -15894) ? var_10 : var_8)))));
    var_14 = (var_6 > var_2);
    var_15 = (!(((((min(11528, var_5))) ? -366904949388436983 : (min(2121173446, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = 65535;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((((((max(-32744, 12978944218284274534))) ? (!4294967295) : (-32729 > var_10)))) ? (((var_0 != 4294967289) ? (var_0 == 1) : var_7)) : (((var_9 <= (!33)))))))));
                            var_17 = var_3;
                            arr_13 [i_2] [i_0] [i_2] [i_2] = ((-((min((arr_9 [i_0 + 1]), -86)))));
                            arr_14 [i_0] [i_3] = ((((!((max(var_11, (arr_5 [i_3]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
