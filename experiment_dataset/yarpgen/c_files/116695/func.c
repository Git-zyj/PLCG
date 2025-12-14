/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116695
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned int) var_1);
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (max((((/* implicit */int) (unsigned char)9)), (1680271758)))))) ? ((+(((/* implicit */int) max((arr_0 [i_0]), ((unsigned char)27)))))) : ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)247))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) - (((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (((-2147483647 - 1)) > (((((/* implicit */_Bool) (short)-21964)) ? (((/* implicit */int) (unsigned short)2)) : (((((/* implicit */int) (unsigned char)19)) - (((/* implicit */int) (unsigned char)9)))))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */signed char) ((((((/* implicit */int) var_5)) - (((/* implicit */int) var_5)))) > (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_11)))))))));
                            var_15 -= var_3;
                            var_16 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_4 - 2] [i_1] [i_4 - 2])) ? (((/* implicit */int) arr_7 [i_2 - 2] [i_4 - 1] [i_1] [i_4 - 1])) : (((/* implicit */int) var_8))))));
                        }
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_2 + 1] [i_3] [i_3] [i_5] = ((/* implicit */long long int) max(((~(((/* implicit */int) ((signed char) (unsigned short)29751))))), (((/* implicit */int) var_2))));
                            var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)28760)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_10))), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) arr_2 [i_0]))), ((~(((/* implicit */int) var_0)))))))));
                        }
                        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) arr_9 [i_0] [i_0] [i_2] [i_3]))) ? (max((((/* implicit */long long int) arr_0 [i_0])), (-8948184484072695245LL))) : (((/* implicit */long long int) 4294967273U)))), (((/* implicit */long long int) var_8))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (arr_7 [i_2 - 3] [i_3] [i_1] [i_3])));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (short)28741);
                            var_20 = ((/* implicit */signed char) (-((-(arr_17 [i_6 - 1] [i_0] [i_2 + 2] [i_2 - 3] [i_0] [i_2 + 1])))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_7] [i_0] [i_0] [i_0])), (((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) (signed char)82)) - (80)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_0] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_10 [i_0]))))))) : (min((((/* implicit */unsigned long long int) min((arr_1 [i_1]), ((signed char)70)))), (min((239827214569185922ULL), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_7]))))))));
                        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) min((var_6), (((/* implicit */short) var_2)))))))), ((~(arr_18 [i_0] [i_0] [i_1] [i_1] [i_2] [i_7] [i_7])))));
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) min((((/* implicit */int) max(((signed char)-11), (var_1)))), (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-11))))))) ? ((~(((/* implicit */int) arr_24 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 1])))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) var_7))) != (((/* implicit */int) var_0)))))))));
                        var_24 = ((/* implicit */unsigned short) arr_19 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 2]);
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), ((-(arr_8 [i_1])))));
                        var_26 = ((/* implicit */unsigned long long int) (short)28779);
                        arr_28 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_2 - 2] [i_8] [i_8])) : (((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_2 + 2] [i_2 - 3] [i_2 - 1]))));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                        {
                            var_27 -= ((/* implicit */int) ((short) (signed char)109));
                            var_28 = ((/* implicit */signed char) var_3);
                            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) + ((~(2)))));
                        }
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28761)) ? ((-(((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_10 [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)101)))))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32244))) - (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3967)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL))));
                        }
                        for (short i_11 = 1; i_11 < 15; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)-6))) / (((/* implicit */int) (signed char)5))));
                            var_34 &= ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_8))))));
                        }
                        var_35 ^= ((arr_29 [i_2 - 3] [i_2] [i_2 - 3] [i_2 - 2] [i_2] [i_2] [i_2 - 2]) > (arr_29 [i_2] [i_2 + 2] [i_2 - 3] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1]));
                    }
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((long long int) ((((/* implicit */int) arr_1 [i_2 - 3])) != (((/* implicit */int) (signed char)37))))))));
                    var_37 += ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), ((_Bool)1))))) + (((((/* implicit */_Bool) 11854184176932553373ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26706))) : (16332940608398923721ULL)))))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned short) ((unsigned char) 1188804439));
    var_39 = ((/* implicit */unsigned int) min((var_39), (((((/* implicit */_Bool) 3610582834U)) ? (((/* implicit */unsigned int) max((((/* implicit */int) max((var_8), (((/* implicit */short) var_3))))), (((int) 4U))))) : (((unsigned int) max((3610582834U), (((/* implicit */unsigned int) var_2)))))))));
}
