/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168893
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_1 [i_0 + 4]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) var_9);
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_8))));
            var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_4 [i_1] [i_0] [i_1]) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775798LL)))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_0] [i_0])) : (((/* implicit */int) var_6))))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
        }
        arr_6 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_0]) || (((/* implicit */_Bool) arr_0 [i_0]))))) / (((((/* implicit */int) var_7)) | (255807919)))))) : (min((((/* implicit */long long int) arr_2 [i_0 + 2] [i_0 + 4])), (-9223372036854775803LL))));
        var_18 |= ((/* implicit */unsigned int) (((_Bool)1) ? (9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-84)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
        {
            {
                arr_14 [i_2] [i_2 - 2] [2ULL] |= ((/* implicit */signed char) ((500121622467820498ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)32764))))));
                /* LoopSeq 4 */
                for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 4; i_5 < 8; i_5 += 3) 
                    {
                        var_19 = min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (min((var_8), (var_8))))), (((/* implicit */long long int) arr_15 [i_2])));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_2 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [(signed char)7] [i_2]))))) ? (arr_3 [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22130))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) arr_19 [i_5] [i_4]))))) : ((~(arr_0 [(short)4]))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2781054603U)));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-108))));
                            var_23 = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) (((!(arr_1 [i_4 + 2]))) ? ((((~(arr_18 [i_2] [i_2]))) >> (((((/* implicit */int) max((arr_21 [(signed char)1] [(_Bool)1] [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) var_9))))) - (36344))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_4 + 2] [i_3] [i_4] [i_4 + 2])))))))) : (((/* implicit */unsigned long long int) (((!(arr_1 [i_4 + 2]))) ? ((((((~(arr_18 [i_2] [i_2]))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((arr_21 [(signed char)1] [(_Bool)1] [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) var_9))))) - (36344))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_4 + 2] [i_3] [i_4] [i_4 + 2]))))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) != (arr_18 [i_5 - 3] [(short)6])))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_24 [i_2] [i_3] [i_2] [i_5] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_25 = ((/* implicit */unsigned char) arr_20 [i_2] [i_7] [i_4] [i_5]);
                            var_26 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 935698196)) ? (((/* implicit */int) arr_12 [(unsigned char)4] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))) | ((((+(((/* implicit */int) (unsigned short)41462)))) / (((/* implicit */int) arr_12 [i_2] [i_3 - 1] [i_5]))))));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_3] [i_2] = ((/* implicit */unsigned short) var_4);
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_18 [i_2] [i_2]))), (((/* implicit */long long int) ((signed char) var_2)))))) ? (min((((unsigned long long int) arr_13 [i_2])), (((/* implicit */unsigned long long int) 32505856U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_23 [i_2] [9ULL] [i_2] [i_2] [i_2 - 2]))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-((-((-(((/* implicit */int) arr_11 [i_2] [i_2])))))))))));
                        var_29 |= ((/* implicit */unsigned short) (unsigned char)138);
                        var_30 = ((/* implicit */unsigned short) ((unsigned char) min(((-(((/* implicit */int) (unsigned char)8)))), (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_2]) : (((/* implicit */int) var_5)))))));
                    }
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_2] [i_3] [i_3 + 1] [i_2 - 2] [i_3 - 3] [i_3])))))));
                }
                for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_32 = ((/* implicit */int) (!((_Bool)1)));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33566))) : (459409443162698187ULL))))));
                    arr_32 [i_2] = ((/* implicit */unsigned short) arr_28 [i_2] [i_2] [9LL] [i_9]);
                }
                for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */unsigned long long int) (~((~(arr_18 [8] [(short)6])))))) ^ (((((/* implicit */_Bool) ((-679027264) & (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (signed char)14)) ? (0ULL) : (((/* implicit */unsigned long long int) 1963594514))))))))));
                    var_35 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_2]))))) < (((((/* implicit */_Bool) (signed char)-112)) ? (-1) : (((/* implicit */int) (_Bool)1))))))) <= ((+(((/* implicit */int) (unsigned char)237))))));
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    arr_39 [i_2] [i_2] [6ULL] = ((/* implicit */short) arr_34 [i_2] [i_2] [(signed char)8] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 7; i_12 += 4) 
                    {
                        var_36 = ((((/* implicit */unsigned long long int) arr_41 [i_2] [i_2] [i_11] [i_12])) * (((arr_33 [i_2] [i_3] [i_2] [i_2]) % (arr_33 [i_2] [i_3 + 2] [(signed char)1] [i_12 + 3]))));
                        var_37 &= ((/* implicit */unsigned long long int) (!(arr_7 [i_2 + 2])));
                    }
                    var_38 &= ((/* implicit */unsigned long long int) (!(arr_4 [i_3 + 1] [i_3 - 3] [i_3 - 1])));
                    arr_43 [7] [(short)9] [7] [i_2] = ((/* implicit */unsigned long long int) ((arr_20 [i_3 - 1] [i_3] [i_3 - 3] [i_3]) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned short)31942))))))));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned short) var_8);
}
