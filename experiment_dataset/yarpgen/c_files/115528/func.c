/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115528
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
    var_20 = min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 1139994358)) : (var_5))), (((/* implicit */unsigned long long int) var_17)));
    var_21 = var_0;
    var_22 = (!(((/* implicit */_Bool) var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1] [i_3]))) * (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1]))))));
                            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) min((((max((var_14), (((/* implicit */unsigned long long int) arr_4 [(short)2])))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [2LL]))) - (var_2)))))), (((unsigned long long int) arr_6 [7ULL] [i_2] [4] [(_Bool)1]))));
                            arr_12 [i_0] [i_0] [i_2] [10ULL] [i_1] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_3 - 1]))))), ((+(max((0ULL), (((/* implicit */unsigned long long int) -9223372036854775800LL))))))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((-1139994385) - (((/* implicit */int) var_1)))))))));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_19))));
            }
        } 
    } 
}
