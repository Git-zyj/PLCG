/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147791
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_2 + 1] [i_0]))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_10))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_2]);
                        arr_14 [i_0] [i_1] [i_1] [i_2 - 1] [(unsigned short)13] [i_4] = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1])))));
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_8))) % (arr_7 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1330241646U)) ? (arr_8 [i_0] [10LL] [i_2] [i_2] [i_4]) : (((/* implicit */int) arr_0 [i_0]))))) ? (max((((/* implicit */unsigned int) arr_2 [i_2])), (arr_11 [i_4]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1] [i_1] [i_2 - 2]))))))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned char) (-2147483647 - 1))))));
                        arr_15 [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_16)))) ? (((/* implicit */int) arr_9 [i_4] [i_2] [i_1] [i_0])) : (((arr_4 [i_4] [i_2] [i_0]) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), (var_6)))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)-3946)) : (-1404767007)))) : (min((((/* implicit */unsigned int) (unsigned char)37)), (arr_10 [i_0] [11LL] [i_0] [i_0])))))) : (((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1])) || (var_17))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (var_5) : (((/* implicit */long long int) arr_10 [i_0] [i_2 - 1] [i_1] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)120)) || (((/* implicit */_Bool) arr_2 [i_2 + 1])))))))));
                    }
                    arr_16 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 2]))), (((unsigned short) max((((/* implicit */unsigned char) var_15)), (var_3))))));
                }
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25164)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3946)))))) ? (((/* implicit */unsigned long long int) ((max((var_17), (var_14))) ? (((/* implicit */long long int) ((int) var_11))) : (var_13)))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -4448702060729161349LL))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4398046511103LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_11 [17])))) : (((long long int) arr_2 [i_0]))))) ? (((var_18) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)30382)) : (2147483647)))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-123))))) & (((((/* implicit */unsigned int) arr_12 [i_0])) + (arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-5LL) > (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [3ULL] [i_0])))))) && (((/* implicit */_Bool) (~(8174484191625126908LL)))))))));
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_15)), ((((_Bool)1) ? (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)20] [16ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) : (arr_11 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 13296906105551684560ULL)) ? (((/* implicit */int) (short)3946)) : (((/* implicit */int) (_Bool)0))))));
        arr_23 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(arr_21 [i_5])))), (((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_18 [(_Bool)1]) : (((/* implicit */long long int) var_16))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) max(((unsigned short)17754), (((/* implicit */unsigned short) (_Bool)1))));
        var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) var_15)), ((+(((/* implicit */int) ((_Bool) (unsigned char)127)))))));
    }
    var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)90)), (min(((unsigned short)65535), (var_11))))))));
}
