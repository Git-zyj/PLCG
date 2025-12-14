/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14518
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) (short)-3));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_16 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_7 [i_0] [(unsigned char)4] [i_1] [(unsigned char)9])))) | (((/* implicit */int) arr_8 [i_0] [i_0]))));
                    arr_10 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned long long int) ((long long int) (short)-18)))));
                }
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_1))) << (((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4] [i_4] [i_3])) ? (((/* implicit */int) arr_16 [i_4] [i_3] [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_16 [0] [i_1] [i_3] [i_3] [i_0])))) - (29278)))));
                            arr_19 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) (short)-3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11)) ? (var_12) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) (short)15))))) : (((((/* implicit */int) arr_2 [i_1])) >> (((var_6) - (3420690593078525936ULL)))))))));
                            var_17 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)3))))), (var_3)));
                            arr_20 [i_1] [0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) max(((short)-25), ((short)-3)))) : (((/* implicit */int) max(((short)3), ((short)7))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned long long int) ((arr_15 [i_0] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (short)3)))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 4; i_5 < 9; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [i_1] = ((/* implicit */long long int) (+(((var_8) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (short)-3))))));
                        arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) (short)-20)) : (((/* implicit */int) (short)-7))))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        arr_30 [i_0] [i_1] [i_0] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)3))))))) ? (min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) var_3))))))) : (max((((((/* implicit */_Bool) (short)-27)) ? (((/* implicit */int) (short)-20)) : (var_12))), (max((var_12), (((/* implicit */int) var_10))))))));
                        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((short)19), ((short)17))))));
                    }
                    var_20 |= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)19)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) (short)-34))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_3 [4LL] [i_1])) : (var_1))))));
                }
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24))) == (arr_1 [i_1])))) : (((/* implicit */int) arr_8 [i_0] [i_1]))))) ? (((/* implicit */int) (short)-22)) : (((((/* implicit */_Bool) max(((short)19), ((short)45)))) ? (((/* implicit */int) ((arr_22 [i_0] [i_1] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)0])))))) : (((((/* implicit */int) (short)1)) | (((/* implicit */int) (short)17))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((min(((+(((/* implicit */int) (short)-16)))), (((((/* implicit */_Bool) (short)28)) ? (((/* implicit */int) (short)-21)) : (((/* implicit */int) (short)-22)))))) | (((/* implicit */int) (short)17))));
    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
}
