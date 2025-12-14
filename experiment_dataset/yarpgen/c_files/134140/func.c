/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134140
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
    var_11 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(short)2])) && (((/* implicit */_Bool) arr_2 [(_Bool)1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (2112819743)))) ? (((/* implicit */long long int) var_3)) : (arr_3 [i_0] [i_0] [i_0])));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9436)) && (((/* implicit */_Bool) -2019118341710603395LL)))))) : (-2019118341710603395LL))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_4 [i_1] [(short)11] [i_1]))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((((/* implicit */int) var_7)) | (((/* implicit */int) arr_10 [i_0] [i_1] [i_3])))))))));
                }
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    arr_13 [i_4] [i_1] [i_4] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1]))), (((/* implicit */long long int) arr_0 [21LL]))))));
                    arr_14 [i_0] [i_1] [i_4] = (signed char)0;
                    var_17 *= ((/* implicit */unsigned char) (unsigned short)65535);
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_6 [i_1] [i_1] [i_1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (max((((/* implicit */unsigned char) var_4)), (var_7))))))) : ((~(min((9223372036854775807LL), (((/* implicit */long long int) var_5))))))));
                }
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)97)) | (((/* implicit */int) (unsigned char)1)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_5 [10U] [(_Bool)1] [i_5]))) + ((~(((/* implicit */int) (short)-1)))))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) var_8);
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_11 [10LL] [10LL])))) & (((/* implicit */int) (short)3404)))) << (((arr_6 [i_5] [i_5] [i_5] [i_5]) - (3738982178U)))));
    }
}
