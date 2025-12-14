/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124698
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (((unsigned short) ((((/* implicit */_Bool) var_13)) ? (1348231632U) : (1435692418U))))));
    var_21 = ((/* implicit */long long int) var_13);
    var_22 = ((/* implicit */short) var_18);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_10 [i_0] [i_2] [i_0] = ((/* implicit */int) (-(max((-3627764807575669959LL), (((/* implicit */long long int) var_3))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) ((unsigned short) var_12)));
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1435692411U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))) ? (((max((1435692411U), (((/* implicit */unsigned int) var_8)))) | (var_14))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_19)))));
                }
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_3))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((-(((/* implicit */int) var_2)))) < (((/* implicit */int) var_16)))))));
                arr_12 [i_0] [i_1 - 2] [i_1] = ((/* implicit */long long int) max((var_4), (var_17)));
                var_26 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (352559291700111304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
            }
        } 
    } 
}
