/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158352
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
    var_16 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)36838)))))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_0)) : ((-(var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_3 [i_0] [(signed char)3] [i_1]), (((/* implicit */unsigned long long int) 1U)))))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_5 [9ULL] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 24; i_3 += 1) 
        {
            {
                arr_11 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) arr_10 [i_3 - 1])))) < (((/* implicit */unsigned long long int) ((arr_10 [i_3 - 2]) | (arr_10 [i_3 - 1]))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_7 [i_2] [i_2]))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */long long int) (_Bool)1);
                                var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)63)) / (((/* implicit */int) arr_13 [i_5] [i_3 - 3] [i_2])))) * (((((/* implicit */_Bool) arr_9 [i_5] [i_3 - 2] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_2] [i_3 + 1] [17LL]))))));
                                var_22 = ((/* implicit */long long int) ((_Bool) var_9));
                            }
                        } 
                    } 
                    var_23 *= 2ULL;
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) / (((/* implicit */int) (unsigned char)221))))) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_7])) : (max((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) 2097088U)))))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */int) (unsigned char)7)) <= ((~(((((/* implicit */_Bool) (short)-27112)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)129)) % ((+(((((/* implicit */int) var_4)) * (((/* implicit */int) var_0))))))));
}
