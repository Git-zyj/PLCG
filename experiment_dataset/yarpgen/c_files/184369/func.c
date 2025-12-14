/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184369
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 11; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_3 - 1] [i_3 + 1] [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 2] [i_3 + 2]), (arr_12 [i_3 + 3] [i_3 - 4] [i_3 - 3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) : (9223372036854775802LL)))));
                            arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3447113080U) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)17281), (((/* implicit */short) arr_6 [i_0] [i_1] [i_2])))))) : ((+(arr_9 [i_3] [(unsigned char)5] [i_3])))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (signed char)-1))))), ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_2] [(short)3]))) <= (((((/* implicit */_Bool) var_3)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))))))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_13)) ? (arr_1 [(unsigned char)11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))), (((/* implicit */unsigned int) arr_7 [9LL] [(signed char)2] [i_3] [i_4]))))) & (max((((arr_3 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))))), (arr_5 [(signed char)5] [i_4] [i_2] [i_3])))));
                            arr_14 [11LL] [i_0] [i_3] [i_0] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) max((max((847854233U), (((/* implicit */unsigned int) (unsigned char)197)))), (arr_1 [i_3 + 1])));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)191)) < (((/* implicit */int) arr_8 [i_0] [12U] [i_1]))))))) & (max((((((/* implicit */_Bool) arr_4 [(signed char)3] [(signed char)3] [12U])) ? (arr_9 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))), (((/* implicit */long long int) arr_1 [i_0]))))));
            arr_16 [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_0] [i_0])) * (((/* implicit */int) ((var_15) < (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (arr_3 [3U]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_1] [i_1] [i_0]), (var_3)))))))));
            arr_17 [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17272))) : (arr_2 [i_0] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [5LL])) < (((/* implicit */int) (signed char)-21))))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (var_11))) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) var_14))))));
            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))) + (max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [10LL] [i_0] [i_0]))))))))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned char)187), (((/* implicit */unsigned char) (signed char)127))))), (-206988926301222418LL)))) ? (((((/* implicit */long long int) 2839827501U)) / (max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_0 [(signed char)2]))))) / (max((arr_5 [i_0] [i_0] [(signed char)3] [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))))));
        var_24 = ((/* implicit */short) (unsigned char)22);
    }
    for (long long int i_5 = 3; i_5 < 13; i_5 += 1) 
    {
        var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5 - 2] [i_5 - 1]))) <= (7732123577925394364LL)))), (((((((/* implicit */_Bool) 847854196U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5]))) : (var_13))) - (((/* implicit */long long int) ((((/* implicit */int) (signed char)-125)) | (((/* implicit */int) (unsigned char)61)))))))));
        var_26 = ((/* implicit */unsigned int) (short)-32761);
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((6561028840021069772LL), (((/* implicit */long long int) 3727407607U))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_14))))), (arr_19 [i_5])))));
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((((/* implicit */long long int) var_6)) / (var_8)))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))))), (var_19)))) : (((/* implicit */int) var_14))));
}
