/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131009
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (+(7))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_5))))) == (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) 2147483647))))))) : (var_8)));
    var_11 = ((/* implicit */_Bool) min((var_11), (((((/* implicit */int) min((var_4), (var_9)))) != (var_8)))));
    var_12 = ((/* implicit */short) ((((var_8) / (var_2))) / ((-(((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_6)) : (var_2)))))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((_Bool) var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_0] = ((/* implicit */int) ((unsigned long long int) 18446744073709551615ULL));
                                var_16 = ((/* implicit */int) var_1);
                                var_17 -= ((/* implicit */_Bool) (((~(arr_3 [i_3] [i_3]))) | (arr_0 [(short)14])));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (1ULL)));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), ((-(1170610583168371460ULL)))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) (short)29567)))))));
    }
}
