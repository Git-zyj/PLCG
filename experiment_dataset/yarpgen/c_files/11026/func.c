/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11026
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_11 = arr_7 [i_1] [i_3] [i_3] [i_3] [i_3] [i_3];
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_1)) : (arr_1 [i_0]))) : (((/* implicit */long long int) var_7))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1757379243)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [13U] [i_0])) : (((/* implicit */int) (unsigned short)47843))))) : (((((/* implicit */_Bool) (short)-32757)) ? (arr_2 [i_1]) : (arr_5 [i_0] [i_1] [i_1] [i_3])))));
                        arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_2] [15]);
                        arr_10 [i_0] [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)66)) && (((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_3])))))));
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_14 -= ((/* implicit */unsigned long long int) var_10);
                        var_15 = ((/* implicit */unsigned short) ((signed char) (unsigned short)47843));
                        var_16 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) (unsigned char)203))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) var_1);
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32748)) <= (((/* implicit */int) (unsigned char)52)))) ? ((-(((/* implicit */int) (short)32750)))) : ((((!(((/* implicit */_Bool) (unsigned short)17691)))) ? (311287641) : (arr_18 [i_5] [i_5])))));
                            var_19 = ((/* implicit */short) var_4);
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) -992986180))), ((~(var_7))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_24 [i_2] [i_1] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))));
                            arr_25 [i_0] [3U] [i_1 + 1] [i_1] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [(unsigned char)7] [i_1] [(unsigned char)7])) ? (((/* implicit */int) (unsigned short)62650)) : (((/* implicit */int) var_4))));
                            var_21 &= ((/* implicit */int) var_9);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_29 [(signed char)14] [0LL] [0U] [i_5] [i_8] [i_8] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17692))) + (var_1)));
                            arr_30 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)4] [(unsigned short)4] [i_1] [i_1]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 1126650972)) : (var_6))))));
                        }
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) : (var_7))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47844)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54010)))))));
                        arr_31 [i_0] [i_1 - 3] [(unsigned short)8] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [19]);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                        var_24 = ((unsigned char) arr_34 [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                arr_41 [i_0] [i_1] [4U] [i_1] [20] [i_11] &= ((/* implicit */long long int) ((int) (_Bool)0));
                                var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) min((14183835997307222036ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))))) ? (((((/* implicit */_Bool) arr_21 [i_0 - 1])) ? (954829840U) : (arr_21 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
    {
        for (signed char i_13 = 1; i_13 < 12; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_51 [i_14] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_32 [i_12]), (((/* implicit */unsigned long long int) max((var_2), (var_8))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    arr_52 [i_12] [8] [i_14] = ((/* implicit */signed char) (+(((arr_3 [i_12 + 1] [i_14] [i_13 + 1]) ? (((/* implicit */long long int) (-(var_8)))) : ((-(3425016552201613160LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (unsigned char)66))), (max((((/* implicit */int) (signed char)-104)), (-1126650972))))))));
                                var_27 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)47844)) <= (((/* implicit */int) (unsigned char)178)))))) ^ ((-(var_7))))), (((/* implicit */unsigned int) arr_55 [i_12] [i_13]))));
                                arr_60 [i_14] [i_14] = ((/* implicit */unsigned short) 1986395169);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-11341)))))) : ((-((+(var_3))))));
    var_29 = 13058544861516825027ULL;
    var_30 = ((/* implicit */signed char) var_4);
}
