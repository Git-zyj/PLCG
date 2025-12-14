/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159922
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
    var_14 = ((/* implicit */unsigned short) ((min((max((((/* implicit */long long int) (short)-21574)), (var_3))), (((/* implicit */long long int) var_4)))) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_15 = ((/* implicit */signed char) (~(((var_2) | (var_2)))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */int) var_10)), (min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30548)) ? (((((/* implicit */_Bool) min((arr_2 [i_1] [i_1]), (((/* implicit */short) arr_0 [i_1] [i_1]))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)46251)) : (((/* implicit */int) arr_0 [i_1] [i_1])))))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)4096))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_17 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0 - 2] [i_0])) / (((/* implicit */int) arr_1 [i_0 - 2] [i_0])))) * (((/* implicit */int) ((signed char) (_Bool)1)))));
                    var_18 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_1]))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10397158550091723488ULL))))))))) || (((/* implicit */_Bool) min((1924002733772639929LL), (((/* implicit */long long int) (_Bool)0)))))));
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) max((((arr_7 [i_0 - 4] [i_0] [i_0] [i_2]) / (arr_7 [i_0 - 2] [i_0] [i_0] [i_2]))), (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1])) ? (933194157) : (((/* implicit */int) (short)(-32767 - 1)))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4] [i_0] [i_0])) + (-933194160)))) & (((1019258302U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)4095)))))));
                                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 1]))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */int) (short)10296);
                }
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((max((arr_7 [i_0] [i_0 - 1] [i_0] [i_6]), (arr_7 [i_0] [i_0 - 1] [i_0] [i_1]))) / (min((((/* implicit */int) (unsigned char)14)), (arr_7 [i_0] [i_0 - 1] [i_0] [i_0])))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_6]))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((_Bool) (_Bool)1)))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_18 [i_0 - 1] [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_1])))))));
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [i_1] [i_7])))));
                }
            }
        } 
    } 
}
