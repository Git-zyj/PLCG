/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184681
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_17 -= ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned char)187)))) ^ (var_15))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 2] [i_2 - 1])))))) <= (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 - 2] [i_2] [i_2 - 2])) == (((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2 + 2] [i_2]))))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (unsigned char)255)))));
                        arr_11 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((short) arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_4 - 1]));
                    }
                    arr_12 [i_2] = ((/* implicit */int) var_16);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_5] [(unsigned char)13]))))) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) arr_13 [i_5] [i_5])))) ^ (((/* implicit */int) var_12))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) var_10)))))))));
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1495118997)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) (unsigned char)242)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) ((long long int) (signed char)1));
    }
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_13 [i_6] [i_6]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_6])))))) : (((/* implicit */int) ((unsigned char) arr_18 [i_6])))));
        arr_19 [i_6] = (-(((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_6])))));
        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_14 [i_6])))) : (((/* implicit */int) (unsigned char)246))));
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : ((+(((int) var_2))))));
}
