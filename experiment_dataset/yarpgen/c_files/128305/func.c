/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128305
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
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) (signed char)61)), (var_8)))) & (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((503316480U), (((/* implicit */unsigned int) (signed char)52)))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) ((17163815607739306171ULL) > (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-30)))))) << (((((/* implicit */int) var_12)) - (28609)))));
                    var_21 += ((/* implicit */_Bool) ((arr_0 [i_0]) & (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_2 [i_0]))), (((/* implicit */long long int) (signed char)-38))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_3] [i_2 + 2] [(_Bool)1] [11U] = ((/* implicit */short) (_Bool)1);
                            arr_15 [i_0] [(unsigned char)7] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */int) var_16);
                            arr_16 [i_3] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0]);
                            var_22 = ((/* implicit */unsigned short) ((int) arr_12 [i_1 - 2] [i_2] [i_1 - 2] [i_2 + 3] [i_4 + 1] [i_4]));
                            var_23 += ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)30)), ((unsigned char)232)))) : (((/* implicit */int) var_12))))));
                        }
                        for (short i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(arr_10 [i_0] [i_1] [14U] [i_0] [i_0] [i_0]))) | (((arr_18 [i_0] [i_0] [i_2] [i_1]) ? (((/* implicit */long long int) -1)) : (5973269533677982477LL)))))) ? (max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (arr_8 [(_Bool)1] [i_2 + 3] [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((((var_17) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_3 + 1] [i_1] [i_1] [i_3 + 1] [i_1] [i_1])), (arr_7 [i_0] [i_0] [6ULL])))))))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (signed char)-115))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+((((-(((/* implicit */int) (unsigned char)4)))) & ((~(1660546160))))))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_4)));
                            var_29 *= ((/* implicit */signed char) arr_0 [i_1 + 1]);
                        }
                        var_30 = (~((-(((/* implicit */int) (!((_Bool)1)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) (signed char)108);
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_20 [i_1 - 1] [i_8 - 1] [i_1 - 1] [(unsigned char)9] [i_8] [i_8] [i_8]))));
                            arr_26 [i_7] [i_7] [(unsigned short)13] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1 + 1] [i_2])) & (((/* implicit */int) var_8))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_30 [i_0] [i_0] [i_2] [i_7] [i_9] [i_9] = ((/* implicit */short) arr_8 [i_0] [i_1 + 1] [i_2]);
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+((+(((/* implicit */int) (signed char)43)))))))));
                            arr_31 [i_7] = ((/* implicit */int) (unsigned short)65529);
                        }
                        arr_32 [i_0] [(short)15] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_10 [i_0] [i_7] [i_0] [i_2] [i_7] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) (short)-24143))))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    /* LoopNest 2 */
    for (unsigned short i_10 = 4; i_10 < 18; i_10 += 1) 
    {
        for (unsigned short i_11 = 3; i_11 < 17; i_11 += 3) 
        {
            {
                var_35 *= ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 - 3]))) > (-5240846302714899841LL))))))));
                var_36 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)246));
                var_37 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_13))))))))));
            }
        } 
    } 
}
