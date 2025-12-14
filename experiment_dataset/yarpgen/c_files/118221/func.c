/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118221
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_4] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((14LL), (((/* implicit */long long int) var_7))))))))));
                                var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -15LL)) ? (var_0) : (1249651854)))));
                                var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_4])))) ? (((/* implicit */int) ((unsigned short) ((15LL) & (0LL))))) : (((/* implicit */int) var_7))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 15LL);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) - (((((/* implicit */long long int) ((unsigned int) 14LL))) - (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2 + 1])) ? (-30LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_6 = 4; i_6 < 19; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */int) var_7);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) + (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))) != (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_0))))))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_5] [i_5] [i_5] [i_7] [i_7 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_5])))) ? (var_6) : (-14LL)));
                            arr_24 [i_7] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) 851211643U);
                            var_15 -= ((/* implicit */short) ((unsigned short) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)251)), (var_4)))), ((+(((/* implicit */int) (short)15460)))))));
                            arr_25 [i_0] [i_1] [i_2 - 2] [i_5] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) var_7))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_9)))))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */int) (signed char)117)))))) : (67108848LL)))));
                            arr_26 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_10))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_29 [i_8] [i_1] [i_1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)8296))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 16136935238106225274ULL)) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_8]))) : (15LL)))))))));
                            var_17 = ((/* implicit */long long int) 3443755640U);
                        }
                        for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / ((~(((/* implicit */int) var_3))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32707)) > (((/* implicit */int) (unsigned short)65525)))))) + (max((((/* implicit */long long int) ((unsigned short) var_9))), (((((/* implicit */_Bool) (unsigned short)36151)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6)))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_0] [i_5] [i_10] [i_10]))));
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) min((max((((arr_8 [i_0] [i_0]) >> (0U))), (((/* implicit */unsigned int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) (short)24576)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 25LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned int) (unsigned short)63053)), (1742513014U))) : (((unsigned int) 24LL))))));
                        }
                        for (short i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) max((var_4), ((short)32722)))) ? (4) : (((/* implicit */int) ((unsigned short) var_10)))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) 549218942976ULL)))) != (((((/* implicit */long long int) ((/* implicit */int) ((14LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)96))))))) + (8LL))))))));
                            var_23 = ((/* implicit */short) ((((((/* implicit */long long int) (-(851211643U)))) <= (((((/* implicit */_Bool) (signed char)-97)) ? (30LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_10))) | (var_1)))) : (((((/* implicit */_Bool) 2919732695U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2305843009213693696LL)))));
                            var_24 &= ((/* implicit */int) (signed char)-43);
                        }
                        /* LoopSeq 3 */
                        for (signed char i_12 = 2; i_12 < 20; i_12 += 3) 
                        {
                            arr_41 [(unsigned short)11] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)43820)))), ((~(((/* implicit */int) (short)29300)))))) : ((~(((/* implicit */int) arr_39 [i_12 + 2] [i_12 - 2]))))));
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((-23) + (31)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_17 [i_0] [i_1] [i_5] [i_12])))) : (max((((/* implicit */long long int) var_4)), (-7616369580449350100LL))))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-8332)) ? (-15LL) : (((((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)1)))) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)59173)) - (59115))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) var_4)) - (3388))))))))));
                            arr_42 [(signed char)17] [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) >= (((/* implicit */int) arr_1 [i_12])))))))) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_12 + 1] [i_0] [i_2 - 2] [i_12])) <= (((/* implicit */int) var_10))))))));
                            var_27 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_19 [i_2 - 2] [i_5] [i_2 - 2] [i_5] [i_12 + 1])))) + ((+(((/* implicit */int) arr_19 [i_2 + 1] [i_2] [i_12] [i_12] [i_12 + 2]))))));
                        }
                        for (int i_13 = 2; i_13 < 21; i_13 += 4) 
                        {
                            var_28 -= (~(max((22U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (14LL)))) / (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15))))), (var_9)))))))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            var_30 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_35 [i_2 - 2] [i_2 - 1]))) * (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */long long int) 0)) : (var_6))))));
                            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -7616369580449350100LL)) ? (2845587404U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) == (1023U))))) / (max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (arr_6 [i_1])))))));
                        }
                        arr_48 [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) -7616369580449350106LL)) ? (((/* implicit */int) ((signed char) arr_1 [i_1]))) : (((((/* implicit */_Bool) (unsigned short)43811)) ? (((/* implicit */int) var_3)) : (var_9))))), (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) var_7)), (var_1))) : (((/* implicit */int) var_10))))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (var_0) : (var_9)));
}
