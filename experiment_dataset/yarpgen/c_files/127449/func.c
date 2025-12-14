/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127449
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 4 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((max((arr_5 [i_2] [i_2 + 2]), (arr_5 [(_Bool)1] [i_2 + 1]))) ? (max((4294967293U), (arr_10 [i_2 + 1] [i_4] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (var_7))))))))));
                                arr_17 [i_0] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_13 [(unsigned char)17] [i_1] [i_2] [i_2 - 1]))))), ((-(arr_10 [i_0] [i_2] [i_2])))));
                                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((4294967276U), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_3] [i_0]))))) || (((/* implicit */_Bool) 3U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_0)))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)0)))))));
                                arr_18 [i_4] [i_2] [(unsigned short)22] [i_2] [i_0] = ((/* implicit */short) ((_Bool) ((arr_11 [16U] [i_2 - 1] [i_2 + 2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    arr_19 [(unsigned short)10] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_8);
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_5 [i_0] [i_0]))));
                    arr_24 [i_5] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_22 [i_0]))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 22; i_6 += 2) 
                {
                    arr_29 [i_6] [i_1] [i_6] [i_6] = (unsigned char)247;
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_16 ^= ((_Bool) (unsigned char)145);
                                arr_34 [i_6] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)243)))));
                                arr_35 [9U] [i_1] [9U] [i_7 - 1] [i_6] = ((/* implicit */unsigned short) ((short) arr_6 [i_6 - 1]));
                            }
                        } 
                    } 
                    var_17 |= ((unsigned char) (unsigned char)117);
                    arr_36 [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) + (var_3)));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_2))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_19 += ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_6))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))) : (var_2)));
                        var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) : (4294967286U)));
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) var_10))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                    {
                        arr_46 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_1] [i_1]))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                        arr_50 [i_0] [i_0] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)86))));
                    }
                }
            }
        } 
    } 
    var_23 = var_5;
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) max((0U), (((/* implicit */unsigned int) var_9))))))));
}
