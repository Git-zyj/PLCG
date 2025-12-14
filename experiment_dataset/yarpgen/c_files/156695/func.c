/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156695
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (short)10338)) : (((/* implicit */int) (unsigned char)132))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1])) > (((/* implicit */int) (unsigned char)127))));
            var_15 = ((/* implicit */short) (~((~(arr_2 [i_1 - 1])))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) - (255U)));
            arr_6 [i_0] &= ((/* implicit */short) arr_3 [i_0] [i_1 + 1]);
        }
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_2 [i_0]))) * (((((/* implicit */_Bool) var_2)) ? (507437023U) : (var_7))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (long long int i_3 = 4; i_3 < 15; i_3 += 3) 
            {
                {
                    var_18 *= ((/* implicit */unsigned short) (-(var_9)));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_2 - 1] [i_3 - 3] [i_4] [i_5 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)31794)))))));
                                arr_19 [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4]))) % (((arr_18 [i_0] [(_Bool)1] [i_3] [(unsigned char)12] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */short) (-(var_9)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_26 [i_0] [i_6 + 3] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_6 + 1] [i_6 - 1] [i_0] [(short)1])) ? (arr_9 [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))));
                    arr_27 [(_Bool)1] [i_0] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_7] [i_6 - 1] [i_7]))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        arr_32 [i_7] = ((/* implicit */unsigned short) ((arr_2 [i_6 + 1]) ^ (arr_2 [i_6 + 2])));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_8 - 1] [i_7 + 1] [i_6 + 1] [i_6 + 3])))))));
                        var_21 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                    }
                    arr_33 [i_7] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)24))));
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_7 + 2] [i_7 + 1])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_3))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
    {
        arr_38 [i_9] [i_9] = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((_Bool) (~(var_8))))), (arr_29 [i_9] [i_9] [i_9] [i_9])));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_3 [i_9] [i_9 - 1])) * (((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_9 + 1])))))));
    }
    var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) min((var_11), (((/* implicit */unsigned short) var_4)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
    var_25 = ((/* implicit */int) var_6);
    var_26 *= ((/* implicit */unsigned char) var_8);
}
