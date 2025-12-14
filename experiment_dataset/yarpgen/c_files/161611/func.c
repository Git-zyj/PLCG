/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161611
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */long long int) max(((+(((var_7) | (var_14))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_4))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_8))));
                                var_18 &= ((/* implicit */unsigned long long int) max((min((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))))))), (((((var_12) + (9223372036854775807LL))) >> ((((~(4909238821437293493ULL))) - (13537505252272258061ULL)))))));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((7645928701446116965ULL) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)15921))))))))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((var_12) + (7462914054554852710LL))) - (16LL)))))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_8))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_15))))))) < (min((((/* implicit */unsigned long long int) max((var_8), (var_4)))), (var_14)))));
}
