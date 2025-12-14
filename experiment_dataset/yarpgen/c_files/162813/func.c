/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162813
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) arr_1 [i_0]);
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((((/* implicit */int) var_1)), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_0]))), (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (((+(arr_3 [i_1]))) >> ((+(((/* implicit */int) arr_1 [i_1]))))));
        arr_6 [i_1] [i_1] = ((unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */short) arr_2 [i_1]);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_1])))) ? (((/* implicit */int) arr_9 [i_1])) : (max((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_5])), (((int) arr_3 [i_1]))))));
                                var_13 = ((/* implicit */unsigned short) arr_0 [i_5] [i_3]);
                                var_14 ^= max((arr_10 [i_5]), (((/* implicit */signed char) var_6)));
                            }
                        } 
                    } 
                    arr_19 [1U] [i_2] [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1] [i_2] [(unsigned short)16] [i_3] [(unsigned short)16])), ((+(arr_15 [i_1] [i_1] [i_3]))))) == (((/* implicit */unsigned int) ((((var_5) >= (((/* implicit */int) var_9)))) ? (((/* implicit */int) var_4)) : ((-(268435456))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_1] [(unsigned short)17])), (var_5))))))) & (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [6ULL] [i_1]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) arr_24 [i_6]);
                arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_24 [i_6])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4011500967U)) ? (283466337U) : (283466326U)))) ? (((/* implicit */unsigned long long int) ((arr_21 [i_7] [i_7]) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_21 [i_7] [3]))))) : ((~(arr_24 [(unsigned short)14]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6]))) + (arr_24 [i_7])))));
                var_17 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((136709345U), (283466329U)));
    var_19 = ((/* implicit */unsigned char) var_9);
}
