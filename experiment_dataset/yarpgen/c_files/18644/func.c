/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18644
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) : (3356070516302427671ULL)))) ? (arr_1 [i_1] [i_0]) : (((((arr_1 [i_2] [i_0]) + (2147483647))) << (((3356070516302427671ULL) - (3356070516302427671ULL)))))))) : (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_1] [i_2]) : (var_13))))), (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_17 |= ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) arr_7 [i_3] [3]))) & (((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) var_5)))))) != (((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (var_9)))));
        var_18 = var_5;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_11);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    var_20 = arr_8 [i_4] [i_6];
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) + (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_6] [i_4])) ? (((/* implicit */int) arr_7 [i_4] [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_6]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_23 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_4] [i_7] [i_6]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_15 [i_8] [i_6] [i_6] [i_5] [i_4]);
                            var_25 = ((/* implicit */_Bool) (short)3845);
                            var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (short)-30245))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (8388352U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        }
                        var_27 = ((((/* implicit */int) arr_12 [i_7] [i_5] [i_4])) ^ (((/* implicit */int) arr_19 [i_7] [i_7] [i_5] [i_5] [i_5] [i_5] [i_4])));
                    }
                }
            } 
        } 
    }
    var_28 |= ((/* implicit */unsigned char) var_10);
}
