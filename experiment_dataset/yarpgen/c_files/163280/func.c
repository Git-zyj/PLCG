/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163280
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_2]))) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) min((((/* implicit */short) (unsigned char)27)), (var_3))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_2])), ((-(((/* implicit */int) (!((_Bool)1))))))));
                                arr_15 [i_0] [i_0] [i_0] [(unsigned char)2] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2]))))), ((((_Bool)1) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_0])))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1]);
                    var_12 = ((/* implicit */unsigned int) (short)4180);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_6 + 2])) : (((/* implicit */int) ((_Bool) arr_3 [(short)12] [i_6] [i_7]))))))))));
                    var_14 *= ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((short) var_3)), (((/* implicit */short) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            {
                arr_32 [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_26 [i_9])), (arr_5 [i_8] [(unsigned char)7] [(unsigned char)7])));
                var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_12 [i_8] [(unsigned char)11] [i_8] [i_9] [i_9])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [i_9] [i_9] [5U] [i_9]))))), (((/* implicit */unsigned int) max((arr_12 [i_8] [i_9] [i_9] [i_9] [i_8]), (arr_12 [i_8] [i_9] [i_9] [i_9] [i_8]))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_37 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) var_2);
                            arr_38 [i_9] [i_9] [i_9] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_39 [i_11] [i_9] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((((_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (4294967295U)));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) max((arr_10 [i_8] [i_9] [i_10] [i_9] [i_10 + 1]), (arr_10 [i_8] [i_9] [(unsigned char)12] [i_11] [i_10 + 2])))) << (((/* implicit */int) arr_3 [i_8] [i_8] [i_8])))))));
                            /* LoopSeq 1 */
                            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                            {
                                arr_44 [i_8] [(_Bool)1] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((unsigned int) ((short) var_9)));
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_25 [i_8] [i_9])))))));
                                var_19 &= ((/* implicit */unsigned int) (!((((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (0U)))));
}
