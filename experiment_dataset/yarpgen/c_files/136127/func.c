/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136127
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
    var_17 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
                                arr_11 [i_0] [i_0] [(unsigned char)1] [i_3 - 1] [i_4 - 2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */int) arr_5 [i_0] [i_2] [i_3 - 2] [i_4 - 1])), (-1523138656))), (arr_9 [i_1] [i_2] [15]))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) (((+(((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) << (((arr_9 [i_1] [(unsigned char)6] [i_0]) - (963112555))))))) - (((((/* implicit */_Bool) -174781127)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) : ((-(174781126)))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_3 [i_0] [i_0]))))))))));
                arr_12 [i_1] [i_0] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [5ULL] [i_0])) * (((/* implicit */int) var_7))))) >= (var_11)))), ((+(arr_4 [i_0]))));
                var_21 += ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_22 = ((unsigned char) var_5);
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_23 += ((/* implicit */_Bool) max((arr_13 [i_5] [i_5]), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_14 [(_Bool)1])), (var_11)))) / (arr_13 [(_Bool)1] [3ULL])))));
        var_24 = ((/* implicit */unsigned char) var_7);
        var_25 = ((((/* implicit */_Bool) (+(((arr_13 [i_5] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) ? ((~(var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5])))))) & (((unsigned int) 174781126)))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) var_15)) / (var_1)))))) ? (((((/* implicit */_Bool) (+(arr_13 [i_5] [i_5])))) ? (((((/* implicit */int) (unsigned char)221)) / (-174781126))) : (((-174781126) / (((/* implicit */int) arr_14 [i_5])))))) : (((int) ((_Bool) arr_14 [i_5])))));
    }
}
