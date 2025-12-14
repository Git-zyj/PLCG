/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145300
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_9 [i_0] [i_1 + 1])))) * (((/* implicit */int) var_17))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (unsigned short)49573))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_11 [i_0] [i_0] [(short)9] [1U]))));
                    var_22 *= max((((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [(_Bool)1] [(_Bool)1] [i_4] [i_4])), ((unsigned short)49585))))))), (max((((/* implicit */unsigned int) ((unsigned char) arr_12 [i_0] [(short)15] [14]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0]))) | (arr_4 [i_0]))))));
                    var_23 -= ((/* implicit */long long int) max((((/* implicit */int) max((arr_7 [i_0] [i_1 + 1] [i_1 + 1]), (arr_7 [i_0] [i_1 - 2] [i_1 + 1])))), (((((/* implicit */_Bool) (signed char)53)) ? (275301583) : (((/* implicit */int) arr_7 [i_1] [i_1 - 2] [i_1 - 2]))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & ((-(arr_11 [i_0] [i_1] [i_4] [i_4]))))))))));
                    var_25 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [(signed char)13] [i_1 - 2])) ? (((/* implicit */int) arr_9 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_4] [i_1 + 1]))))));
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(arr_4 [(signed char)9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [9U] [i_5] [i_5] [i_0]))) : (13014658215963894882ULL))), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_2 [7ULL] [i_5])))))))))));
                    arr_18 [17LL] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)188))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned char) arr_0 [i_6]);
                                var_28 = ((/* implicit */long long int) max((var_28), (max((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned short)16804)))))), (max((((arr_16 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_6])), (arr_21 [i_7] [i_7] [i_7] [i_7] [10] [i_7] [i_7]))))))))));
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) -6523576645610673588LL)))))));
                                var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_16 [i_5])))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) 2768336691U)) && (((/* implicit */_Bool) arr_14 [i_5] [10] [(_Bool)1] [i_5]))))))) : ((~(((/* implicit */int) (short)23361))))))));
                            }
                        } 
                    } 
                    var_31 ^= arr_22 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] [i_0];
                }
            }
        } 
    } 
    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) max((2586641604U), (1341158220U))))));
}
