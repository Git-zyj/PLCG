/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169856
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((short) (short)-1));
                        arr_10 [8ULL] [i_2] [i_1] [8ULL] &= ((((/* implicit */int) (unsigned short)37727)) + (((/* implicit */int) min((arr_3 [i_3 + 1] [i_2 - 1]), (arr_3 [i_3 - 4] [i_2 - 2])))));
                        var_21 = ((/* implicit */short) min((max((((((/* implicit */_Bool) -9080432488790393281LL)) ? (9080432488790393280LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70))))), (((/* implicit */long long int) (signed char)32)))), (((/* implicit */long long int) 1260686868))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */_Bool) (~(arr_12 [i_2 - 1] [i_4 - 2] [i_4 - 2] [i_4])));
                        arr_13 [i_0] [2LL] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((14381786402289664103ULL), (((/* implicit */unsigned long long int) arr_3 [i_4 - 3] [i_0])))), (((/* implicit */unsigned long long int) ((arr_2 [i_1]) ? (-9080432488790393281LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_4 - 2]))))))))) ? (((/* implicit */int) ((short) 1260686868))) : ((-(((/* implicit */int) (short)31078))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)35196), (((/* implicit */unsigned short) (short)-16328))))) - (((/* implicit */int) (short)4227))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) (-(4374072593620683733ULL)));
                        arr_17 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0]);
                    }
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned char) var_10);
                                var_26 = ((/* implicit */int) (unsigned char)248);
                                arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) var_17))))))));
                                arr_25 [i_7] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_6] [(unsigned short)4] [i_1] [i_0]))))), (var_8)));
                                arr_26 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-15011)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        arr_30 [i_1] = ((short) min((((/* implicit */short) ((((/* implicit */int) (short)32749)) >= (((/* implicit */int) (_Bool)1))))), ((short)32758)));
                        arr_31 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_23 [6LL] [i_2 + 2] [i_2] [i_1] [i_2] [i_2 + 2])) & (-1260686874))))));
                        arr_32 [i_0] [i_1] = ((/* implicit */signed char) ((((long long int) 11896748223838169182ULL)) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (_Bool)1))))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_8)) + (((((/* implicit */_Bool) ((signed char) var_19))) ? (min((((/* implicit */unsigned long long int) -1714841904)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))))))))));
}
