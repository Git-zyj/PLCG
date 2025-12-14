/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10097
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)501)) | (((/* implicit */int) (short)-501))))), (((((/* implicit */_Bool) (short)-6988)) ? (8932946025091821154ULL) : (9513798048617730462ULL)))))));
                arr_6 [i_0] |= ((/* implicit */long long int) ((9513798048617730466ULL) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_8);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((arr_3 [i_3 - 2]) | (((/* implicit */long long int) arr_11 [i_3 - 3] [i_3 + 1] [i_3 + 1]))));
                        arr_13 [2] [i_1] [i_0] [i_1] = ((/* implicit */int) 8932946025091821154ULL);
                        arr_14 [i_1] [i_2] [(unsigned short)3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [11]) : (2147483647)))) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)23])) ? (1470013069) : (((/* implicit */int) arr_10 [i_3 - 2] [i_1] [i_2] [i_1] [i_0])))) : (arr_9 [i_1] [i_2] [i_1])));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_14 |= ((arr_5 [i_1]) < (((/* implicit */int) ((short) -1))));
                        var_15 = ((/* implicit */short) ((int) -9222940053977539333LL));
                    }
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 24))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-27642))))))))));
                    }
                    var_18 = ((((/* implicit */int) arr_0 [i_2])) & (((/* implicit */int) arr_0 [i_0])));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_16 [13] [(unsigned short)15] [21] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? ((-(((/* implicit */int) (short)-16860)))) : ((+(((/* implicit */int) arr_0 [i_2]))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_2 [i_0]))));
                }
                /* vectorizable */
                for (short i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (short)28672))) == (((/* implicit */int) (_Bool)1))));
                    arr_21 [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((8932946025091821154ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-498)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19195))) : ((-9223372036854775807LL - 1LL)))))));
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) (short)-28496))));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 23; i_7 += 4) 
                {
                    arr_24 [i_0] [(unsigned short)11] [i_0] [i_1] = ((/* implicit */unsigned short) ((int) (unsigned short)7));
                    var_23 = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)28570));
                    arr_25 [i_0] [i_1] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_10))))));
                }
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)7680)), (4231178645992829268ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))))))));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_2))))) / (var_8)));
}
