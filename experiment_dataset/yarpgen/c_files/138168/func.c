/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138168
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
    var_16 = var_3;
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))));
    var_18 += ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0))))) == (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3850))) - (var_7))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)61673)) : (((/* implicit */int) var_1)))))) : (var_14)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */long long int) max((max((((/* implicit */unsigned short) arr_6 [i_1 - 1] [i_1 - 1] [i_1])), (arr_5 [i_0 - 2]))), (((/* implicit */unsigned short) ((signed char) arr_5 [i_0 - 1])))));
                    arr_10 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1 - 1]))) ? (((/* implicit */int) ((unsigned short) (unsigned short)3850))) : (((/* implicit */int) (unsigned short)23154))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [i_1 - 1] [i_1 - 1])))))));
                    var_20 *= ((/* implicit */unsigned int) (-(-6021411734770312437LL)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3 - 1])) ? (min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (15273687120323774944ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0] [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_3 + 1] [i_3 + 1] [i_1]))))));
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-12537)) && (((/* implicit */_Bool) arr_1 [i_3] [i_0])))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 1]))) | (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [0U] [0U] [0U] [i_2] [5LL]))) : (3948901279165411873LL))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) arr_7 [i_0] [(unsigned char)10] [i_0] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_12 [i_2] [i_2] [i_0])))))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)255)), ((short)992)))) ? (max((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])), (arr_8 [i_4] [i_1] [i_1] [i_0]))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_1 [6U] [i_2]))))))));
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_2] [i_2]);
                        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-5))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [3])) || (((/* implicit */_Bool) (unsigned short)11463)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0] [0U])) ? (((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 2] [(signed char)10])) : (((/* implicit */int) arr_16 [i_0 + 1] [i_0] [i_0 - 2] [2ULL] [i_0] [(short)0]))))) : (15273687120323774950ULL)));
                    }
                    for (short i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_15 [i_1] [i_0] [i_0] [i_0 - 2]) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))))))));
                        var_25 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_5 + 1] [i_5] [i_0 - 2] [i_1])) ? (arr_19 [i_0 - 1] [i_5 - 1] [(unsigned short)9] [9] [i_1]) : (arr_19 [i_0 + 1] [i_5 + 1] [i_0 + 1] [4ULL] [i_1]))), (max((((arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_5]) ? (arr_19 [i_0] [(_Bool)0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) arr_9 [i_0] [i_1 - 1] [i_1]))))));
                    }
                    for (signed char i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        arr_23 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))) % (((((/* implicit */_Bool) var_10)) ? (arr_19 [i_0] [i_0] [i_0 - 2] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 + 1])))))));
                        var_26 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_2] [i_0])) ? (289653285) : (((/* implicit */int) (_Bool)1))))) ? (((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)20903))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)3843))))))));
                    }
                }
            } 
        } 
    } 
}
