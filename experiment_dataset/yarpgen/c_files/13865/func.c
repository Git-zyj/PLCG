/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13865
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
    var_17 = ((_Bool) max((((/* implicit */short) (!(var_1)))), (var_12)));
    var_18 = ((max((max((var_13), (((/* implicit */unsigned long long int) (short)12390)))), (max((var_6), (((/* implicit */unsigned long long int) var_12)))))) != (var_4));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((((((((/* implicit */int) var_14)) != (((/* implicit */int) (short)14336)))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1] [(_Bool)1])) ? (var_6) : (arr_0 [i_0]))) : ((+(arr_5 [i_0] [7ULL] [i_1]))))) ^ (((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_0 [i_0]))) : (var_5)))));
                var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(arr_3 [i_0] [i_1 + 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_13 [(_Bool)1] [i_1] [i_1] [i_0] = var_1;
                            arr_14 [i_1 - 1] [13ULL] [(short)3] [6ULL] [i_1] [i_1 - 1] = ((/* implicit */_Bool) var_11);
                        }
                    } 
                } 
                var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_1])) ? ((-(arr_3 [i_1 + 2] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [10ULL])))));
            }
        } 
    } 
}
