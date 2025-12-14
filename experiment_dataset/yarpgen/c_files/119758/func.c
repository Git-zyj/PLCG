/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119758
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (((((/* implicit */_Bool) -805712785)) ? (9223372036854775807LL) : (((/* implicit */long long int) -1265459219))))))) && (arr_2 [i_1] [i_1] [i_0 + 1])));
                var_11 = ((/* implicit */long long int) max((8U), (((/* implicit */unsigned int) (short)-32758))));
                var_12 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)251)) ? (4314575329452771227LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) (+(arr_0 [i_0 - 1]))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (unsigned short)61757))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned int i_3 = 4; i_3 < 17; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        arr_15 [i_5 + 2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (+(max((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        arr_16 [6LL] [i_3 - 3] [i_2] [i_4] [i_5 + 1] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)113)) ? (1298471221) : (((/* implicit */int) (short)24120))));
                        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((2834141823U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && ((_Bool)1))))))), (((((((/* implicit */int) var_1)) <= (((/* implicit */int) (unsigned char)76)))) ? (((/* implicit */unsigned long long int) 1460825472U)) : (((((/* implicit */_Bool) 10522066898614494743ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (7924677175095056873ULL)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) var_6);
                            arr_23 [(unsigned char)4] [i_3 - 3] [i_4] [i_3] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)68), (((/* implicit */unsigned char) ((-7353796359213794664LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) + (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) ((2386234522433275LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63)))))))))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 2160862944U)) <= (15ULL))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)56)), (1460825473U)))) : (((((/* implicit */_Bool) max((-2229875311632761153LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((long long int) -1416788252)))))))));
                        }
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((10522066898614494743ULL) ^ (max((var_4), (((/* implicit */unsigned long long int) -8321472628591428701LL))))))) ? (max((((/* implicit */unsigned int) (unsigned short)36289)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-23474)), (2834141823U))))))))));
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_2] [i_3 - 4] [i_4]))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_3] [i_3] [19LL] [i_8 - 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_19 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)123))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_12 [i_2] [(short)0] [(unsigned char)18] [i_2] [i_2] [i_8 - 1]) >> (((arr_12 [i_2] [i_3 - 1] [i_2] [i_2] [(_Bool)1] [i_8 - 1]) - (432685547)))))))))));
                        arr_28 [i_2] [i_3 + 3] [i_3] [i_8] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)0))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 2; i_9 < 18; i_9 += 3) 
                    {
                        arr_31 [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)13397)) ? (-611009006) : (1048002317)));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)109)) << (((9223372036854775807LL) - (9223372036854775799LL))))) & (((((/* implicit */int) (signed char)83)) | (-1048002317))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_9])) ? (((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9 - 2] [i_4] [i_3] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)131))));
                    }
                    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_34 [i_2] [i_3] [i_4] [1LL] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32757))));
                        var_24 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                        var_25 ^= ((/* implicit */long long int) (((~(((/* implicit */int) (short)-32767)))) | (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)124)), (-1048002317)))) || (((/* implicit */_Bool) var_5)))))));
                    }
                    var_26 = ((/* implicit */long long int) min((var_26), (min((((/* implicit */long long int) (short)28819)), (0LL)))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                arr_39 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)15))))), (max((((/* implicit */unsigned char) (signed char)94)), ((unsigned char)217)))))) ? (((/* implicit */int) (unsigned short)32798)) : (((/* implicit */int) ((short) min((((/* implicit */unsigned int) (signed char)-71)), (2834141823U)))))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 8068587036418279904ULL))));
                                var_28 ^= ((/* implicit */unsigned long long int) max((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-18447)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */int) (unsigned char)233);
                }
                var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (min((9223372036854775808ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2] [i_3 + 2] [i_3 + 2] [i_3])))))));
                var_31 = ((/* implicit */unsigned char) (signed char)-71);
                var_32 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) max((var_8), (arr_4 [i_2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (arr_37 [i_2] [i_2] [1ULL] [i_2] [i_2] [(short)19] [(short)2])))));
            }
        } 
    } 
}
