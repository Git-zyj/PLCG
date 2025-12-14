/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126499
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 450011595601504463LL)) ? (((/* implicit */int) (short)4907)) : (((/* implicit */int) arr_0 [i_1]))))) || (((/* implicit */_Bool) ((short) arr_0 [i_1])))))) >> (((((/* implicit */_Bool) arr_7 [i_2] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2906053763U)) && (((/* implicit */_Bool) 1347500194U)))))) : ((-(var_0))))))))));
                    arr_9 [i_0] [i_1] [(short)13] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) arr_0 [i_2]))))) ? ((-(2906053762U))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1]))) * (arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0 - 1]), (arr_8 [i_0 - 1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [9LL] [9LL] [i_2] [i_3] [i_4] [i_3] [i_4] = ((/* implicit */signed char) 2906053772U);
                                var_18 = ((/* implicit */long long int) max((1388913554U), (((/* implicit */unsigned int) ((short) max((arr_1 [i_0]), (1055402960U)))))));
                                var_19 += ((/* implicit */unsigned int) ((((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_5 [(signed char)0] [11U])), (1388913555U)))) & (arr_10 [(short)0] [i_1] [i_1] [i_1]))) * (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2])) - (((/* implicit */int) arr_12 [i_3])))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min(((((~(arr_10 [i_0] [i_1] [i_3] [i_4]))) | (((((/* implicit */_Bool) arr_5 [i_0] [(short)11])) ? (((/* implicit */long long int) 1388913539U)) : (arr_10 [i_4] [i_1] [i_2] [i_4]))))), (((/* implicit */long long int) (~(((var_6) ^ (2906053779U)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_15))))) > (((/* implicit */int) ((signed char) var_0)))))), (min((((/* implicit */long long int) 2147126955U)), ((-9223372036854775807LL - 1LL))))));
}
