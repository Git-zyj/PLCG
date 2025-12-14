/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122848
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [10ULL] = ((/* implicit */unsigned int) arr_2 [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_14)), (((3999058880860878135ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)112)) + (((/* implicit */int) (short)32065)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_9 [i_3]))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((-(arr_1 [i_2 + 1]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_1]) == (arr_1 [i_1]))))))))));
                            }
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_7 [i_3]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = var_1;
    var_24 = ((((/* implicit */_Bool) ((long long int) 255U))) ? (((/* implicit */long long int) var_1)) : (var_13));
    var_25 = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) (short)32767)))))) * (((/* implicit */int) var_18))));
}
