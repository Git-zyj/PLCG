/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153590
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))) ? (var_15) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12)))))) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) var_8);
                var_18 = ((/* implicit */unsigned short) ((arr_3 [i_1] [i_1] [i_0]) ? (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (short)16384)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11034)) && (((/* implicit */_Bool) (short)16384)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 4; i_3 < 15; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_11 [i_2])))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_11 [i_3 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 4])))))) : ((-(arr_7 [i_3 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            {
                                arr_22 [i_8] [i_3 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_16 [i_2] [i_4] [i_7] [i_8])))) - (((((/* implicit */_Bool) arr_2 [i_4] [i_3] [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_7]))))))) : (((arr_13 [i_3] [i_4] [i_7] [i_8]) ? (arr_6 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                                arr_23 [i_2] [i_3] = ((/* implicit */unsigned char) var_13);
                                var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_17 [i_2] [i_2] [i_4] [i_4] [i_2] [i_8])), (((((/* implicit */int) arr_16 [i_2] [i_4] [i_4] [i_8])) - (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_7]))))))) : (((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1]))) : (max((var_15), (((/* implicit */unsigned long long int) var_10))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_12)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (short i_9 = 4; i_9 < 13; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10] [i_11] [i_10] [i_9]))) : (arr_34 [i_9] [i_9] [i_11] [i_11]))))) >> (((((((/* implicit */_Bool) arr_32 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9 + 1]))) : (var_7))) - (47673U)))));
                            arr_35 [i_11] [i_11] [i_10] = ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_26 [i_9 - 2] [i_9 - 3] [i_9 - 2]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) arr_30 [i_9 + 2] [i_9 + 2])));
                /* LoopNest 3 */
                for (short i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) max((((arr_3 [i_9] [i_9 - 1] [i_9]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_9] [i_9 + 1] [i_13])))), ((+(((/* implicit */int) arr_3 [i_9] [i_9 - 1] [i_10]))))));
                                var_27 = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
