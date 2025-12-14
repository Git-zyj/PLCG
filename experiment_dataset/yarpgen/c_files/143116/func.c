/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143116
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-10944)) || (((/* implicit */_Bool) 4611685743549480960LL)))))))) ? (min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1]))) : (arr_0 [i_0] [(signed char)1])));
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))) ? (((unsigned int) arr_1 [i_0 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */int) arr_8 [i_4 - 3] [i_4 - 1] [(unsigned char)12]);
                                var_22 -= ((/* implicit */unsigned short) ((short) arr_2 [i_2 + 1] [i_4 - 1]));
                            }
                        } 
                    } 
                    var_23 ^= ((((((/* implicit */int) (short)7)) * (((/* implicit */int) (unsigned char)255)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (913189522)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_21 [0U] [i_7] [(short)16] [16U] &= ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_1] [12LL] [i_7] [0] [16] [(short)12]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_19 [i_7] [i_2] [12] [i_6])))) : (((((/* implicit */_Bool) arr_4 [i_7] [(unsigned char)4])) ? (arr_10 [16U] [3U] [(signed char)15] [i_3]) : (((/* implicit */long long int) arr_11 [i_2])))));
                                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [(short)11] [11LL])) >> (((((/* implicit */int) arr_19 [i_7] [i_3] [(_Bool)1] [(unsigned char)14])) - (27)))))) ? (arr_18 [8] [i_7] [i_7] [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2])))));
                                var_25 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_14 [(_Bool)1] [(unsigned short)13] [i_3] [i_3] [i_3])))));
                                var_26 *= ((/* implicit */unsigned int) arr_20 [0U] [i_2 + 1]);
                                var_27 ^= ((/* implicit */unsigned long long int) arr_20 [i_1] [i_2 + 1]);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((var_12) > (((/* implicit */unsigned int) ((arr_12 [(_Bool)1] [5] [14]) / (((/* implicit */int) arr_15 [0U] [i_2] [i_2] [i_2] [4LL] [4U]))))))))));
                }
            } 
        } 
        arr_22 [9] [i_1] &= ((/* implicit */unsigned long long int) var_5);
    }
    for (short i_8 = 1; i_8 < 21; i_8 += 2) 
    {
        var_29 -= ((/* implicit */long long int) 2147483631);
        var_30 ^= ((/* implicit */short) min((((((/* implicit */_Bool) arr_25 [i_8 + 1])) ? (var_12) : (((/* implicit */unsigned int) arr_25 [i_8 + 3])))), (((/* implicit */unsigned int) arr_24 [17]))));
    }
    var_31 *= ((/* implicit */unsigned short) var_16);
    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_9))));
    var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned int) min((var_0), (((/* implicit */short) var_7))))), ((+(31U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11))))));
}
