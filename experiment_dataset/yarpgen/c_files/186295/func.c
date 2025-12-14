/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186295
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) >= ((~(var_4))))))) ^ (max((((/* implicit */unsigned long long int) max((7914272U), (((/* implicit */unsigned int) (unsigned char)255))))), ((+(18446744073709551615ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3 - 4] = ((/* implicit */unsigned long long int) ((var_8) >= ((~(3602619685U)))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_11)))))));
                        var_21 = ((/* implicit */unsigned char) ((3140019424826576620ULL) - (((/* implicit */unsigned long long int) -1655006984))));
                    }
                    for (short i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */int) (unsigned char)52);
                        arr_16 [i_0] [i_0] [i_2 - 1] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) var_3))))));
                    }
                    var_22 *= ((/* implicit */signed char) 4294967279U);
                }
                for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    arr_19 [i_0] [i_1] [i_0] [i_1 - 1] = ((/* implicit */long long int) var_0);
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_7)) % (((/* implicit */int) (signed char)21)))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) var_17)))))))) | (((/* implicit */int) (signed char)-16))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_24 [i_0] [i_1 - 1] [i_6] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) ^ (14597897377342135533ULL)))));
                    arr_25 [i_0] [i_0] = (signed char)0;
                }
                arr_26 [i_0] [(short)2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (unsigned int i_9 = 3; i_9 < 13; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_23 = var_5;
                                arr_41 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)76)) + ((-(((/* implicit */int) ((((/* implicit */_Bool) 3848846696367416082ULL)) || (((/* implicit */_Bool) var_16)))))))));
                            }
                        } 
                    } 
                    arr_42 [i_7] [i_7] = ((/* implicit */unsigned char) (signed char)1);
                    var_24 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                    arr_43 [i_9 - 3] [i_7] = ((/* implicit */unsigned short) -1655006984);
                }
            } 
        } 
    } 
}
