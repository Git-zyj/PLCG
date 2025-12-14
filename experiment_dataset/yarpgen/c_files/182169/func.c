/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182169
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
    var_20 *= ((/* implicit */unsigned short) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0]));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))) - (1)))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_2 + 2])) ? ((~(((/* implicit */int) (unsigned short)41440)))) : (((/* implicit */int) ((unsigned char) var_5)))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_1 [i_3]))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [i_0] [i_0];
                        var_23 = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_16))))));
                        var_24 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) var_16))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_2 + 2] [i_1] [i_4])) >= (((/* implicit */int) ((14379705616945181381ULL) <= (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_4])))))));
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) (signed char)93)))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_2] = ((/* implicit */unsigned int) (signed char)46);
                        var_26 = ((/* implicit */unsigned char) 4403074020659214827LL);
                    }
                    for (long long int i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            var_27 = ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_0] [i_0]))) % (((((-379967652317349510LL) + (9223372036854775807LL))) << (((6941448374433917376LL) - (6941448374433917376LL))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)255)))))))));
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_2 + 2]))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (signed char)-19))));
                        }
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3851354664360998283ULL)) ? (((var_0) & (((/* implicit */unsigned long long int) -652149362811297966LL)))) : (((/* implicit */unsigned long long int) 4041719164232909292LL))));
                            arr_29 [i_0] [i_6] [i_9] = ((unsigned short) (unsigned char)128);
                            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [i_9] [i_6 - 1] [i_2 - 2] [i_2 - 2]))));
                        }
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */short) arr_28 [i_0] [i_1]);
                            var_33 = ((/* implicit */unsigned char) var_9);
                            var_34 = ((/* implicit */long long int) ((unsigned short) 9223372036854775807LL));
                        }
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)18)) >= (((/* implicit */int) (unsigned short)41442))));
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (((~(2577070643U))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) % (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
        var_36 *= ((unsigned int) ((long long int) var_9));
    }
    for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_37 *= ((/* implicit */unsigned long long int) (signed char)-23);
        arr_36 [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_33 [i_11]))))) && ((!(((/* implicit */_Bool) var_0)))))) || (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)96)), ((unsigned char)254)))) && (((/* implicit */_Bool) arr_34 [i_11]))))));
        /* LoopNest 3 */
        for (signed char i_12 = 3; i_12 < 22; i_12 += 4) 
        {
            for (unsigned char i_13 = 3; i_13 < 23; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    {
                        arr_46 [i_14] [i_12] [i_12] [i_14] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)53)) << (((((/* implicit */int) (short)-32767)) + (32785))))) - (((/* implicit */int) (unsigned short)65535))));
                        arr_47 [i_12] = ((/* implicit */signed char) var_16);
                        var_38 ^= ((/* implicit */unsigned char) var_18);
                    }
                } 
            } 
        } 
    }
}
