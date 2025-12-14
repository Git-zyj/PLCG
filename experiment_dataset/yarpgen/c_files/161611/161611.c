/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((var_7 | var_14), (((!((min(var_3, var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_8));
                                var_18 &= (max((min((var_11 - var_12), (var_0 && var_3))), (((var_12 + 9223372036854775807) >> (((~4909238821437293493) - 13537505252272258061))))));
                            }
                        }
                    }
                    var_19 &= ((-(7645928701446116965 == 15921)));
                }
            }
        }
    }
    var_20 *= ((-(((!(((var_4 << (((var_12 + 7462914054554852710) - 16))))))))));
    var_21 = (var_5 >= var_8);
    var_22 = ((((max((!var_15), (var_11 ^ var_15)))) < (min(((max(var_8, var_4))), var_14))));
    #pragma endscop
}
