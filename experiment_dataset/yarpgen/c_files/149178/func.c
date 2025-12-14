/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149178
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) max(((~(((/* implicit */int) (signed char)-17)))), (((/* implicit */int) (short)-4767))));
                                var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)-3297)) + (2147483647))) >> (((3331437159U) - (3331437152U))))) | (((/* implicit */int) ((_Bool) -123631525940804200LL)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                arr_19 [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (arr_18 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9213))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_12 [i_6])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) <= (((11783223095320217632ULL) << (((((/* implicit */int) arr_15 [i_5] [i_6])) + (38))))))))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_22 [i_5] [i_5] = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_0 [i_7])))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(5248793626544090741LL)))))))));
                }
                for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (short)8655))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))))) == (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)15115), (((/* implicit */unsigned short) (_Bool)0))))))));
                            var_23 = ((/* implicit */short) ((unsigned char) 10037089752734734934ULL));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) 10037089752734734934ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_34 [i_5] [i_6] [i_8] [i_9] [i_11] [i_5] [i_8] = ((/* implicit */signed char) ((short) ((unsigned int) arr_10 [i_5] [i_6] [i_9] [(signed char)9] [i_11])));
                            var_25 = ((/* implicit */short) (-(((/* implicit */int) ((8136431645473413494LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))))))));
                        }
                        var_26 = ((short) ((int) (~(8409654320974816681ULL))));
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_9 [i_5] [i_6])) : ((-(((/* implicit */int) arr_35 [i_9])))))) + (2147483647))) >> (((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25438))) : (8136431645473413494LL))) + (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))) + (25441LL)))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) max((arr_18 [i_9] [i_6]), (((/* implicit */long long int) (signed char)42)))))))));
                            var_29 = (i_9 % 2 == zero) ? (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((arr_38 [i_12] [i_6] [i_6] [(signed char)3] [i_9] [i_8]) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 506360858U))))))))))) : (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((arr_38 [i_12] [i_6] [i_6] [(signed char)3] [i_9] [i_8]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 506360858U)))))))))));
                            var_30 |= ((/* implicit */signed char) max((((((/* implicit */long long int) var_9)) % (8136431645473413494LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                        }
                        for (short i_13 = 3; i_13 < 8; i_13 += 4) 
                        {
                            var_31 &= ((/* implicit */int) (signed char)48);
                            var_32 = max((7975488820189227396LL), (((/* implicit */long long int) (unsigned short)10451)));
                            arr_42 [i_5] [i_6] [i_8] [i_9] [i_13] = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_36 [i_5] [i_6] [i_8] [i_8] [i_8] [i_9]))))), (((var_12) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22365))))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_13 - 2] [i_13] [i_13 + 1] [i_13] [i_13 - 1]), (arr_33 [i_13 - 1] [(short)3] [i_13 - 2] [i_13 - 2] [i_13 - 3])))))));
                        }
                        for (unsigned short i_14 = 3; i_14 < 9; i_14 += 3) 
                        {
                            arr_45 [i_9] [i_6] [(short)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (short)-32168)))));
                            var_33 = ((/* implicit */signed char) -1062746252);
                        }
                    }
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)42))))) ? (((/* implicit */int) (unsigned short)55085)) : (((((/* implicit */int) (unsigned short)55085)) | (((/* implicit */int) (signed char)-43))))));
                }
            }
        } 
    } 
}
