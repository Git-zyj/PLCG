/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110140
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
    var_19 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15)))))) || (((/* implicit */_Bool) (unsigned char)216))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_7 [i_0] [(unsigned short)15] [i_0] = ((/* implicit */unsigned int) min((max((arr_2 [i_0] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 - 1]))), (((/* implicit */long long int) (unsigned char)40))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) -3912402115233569473LL);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */int) var_15)) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)40)), ((short)7838))))));
                    var_21 = ((/* implicit */unsigned long long int) ((signed char) max((arr_10 [i_0 - 1] [i_0] [i_0 - 1]), (((/* implicit */int) var_9)))));
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_4] [i_4] [i_5 + 1] [i_6 - 3] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_17 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1])))))));
                                arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned short)4])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0])), (3574411019U)))) ? (arr_2 [i_0] [(signed char)3]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)49)) << (((/* implicit */int) arr_1 [i_5]))))))) : (arr_11 [i_4])));
                                arr_20 [i_0] = ((/* implicit */short) arr_14 [i_5 + 1] [i_0 + 2] [i_0 + 2]);
                                arr_21 [i_5 - 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15360446999411021808ULL)) ? (5516960244670040432ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137)))))) ? ((-(((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (arr_2 [i_6] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_4] [i_5 + 1] [(unsigned char)9])))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [(short)8] [i_4] [i_0] = ((/* implicit */unsigned short) var_18);
                    arr_23 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) * (arr_12 [i_0 + 3] [i_0 + 3] [i_4] [i_1])));
                    arr_24 [i_0] [i_1] [5LL] [i_4] = ((/* implicit */unsigned char) var_12);
                }
                arr_25 [i_0 + 3] [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_1] [15ULL])) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) var_13)) - (((/* implicit */int) arr_16 [i_1] [i_1] [(unsigned char)4] [i_0] [i_0 + 3]))))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) : (arr_14 [i_0 - 1] [14LL] [i_1])))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 1]))) ? (((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))) : (((arr_1 [i_0 + 3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0 - 1])))))))));
                arr_26 [i_0] [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) (signed char)75)))), (((((/* implicit */int) (unsigned char)40)) % (((/* implicit */int) (unsigned short)32321))))));
            }
        } 
    } 
}
