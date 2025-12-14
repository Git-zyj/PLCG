/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108220
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) min((arr_1 [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                    var_11 ^= max((((short) arr_0 [i_1 - 1])), (min((arr_7 [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 + 1]))));
                    var_12 = ((/* implicit */unsigned char) ((var_9) ? (((/* implicit */int) min((arr_2 [(short)12]), (((/* implicit */short) (unsigned char)125))))) : (((/* implicit */int) var_6))));
                    arr_8 [i_2] = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                {
                    var_13 *= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_8)))));
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */short) max((max((var_5), (var_5))), ((_Bool)1)))), (arr_16 [i_3] [i_3] [(short)6])));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((arr_11 [i_4] [i_5 + 2]), (arr_16 [i_3] [i_4] [i_5 - 1])))) : ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
                    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_14 [i_5 - 1] [i_5 + 2] [i_5]), (max((var_1), (((/* implicit */short) var_3)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_15 [i_6] [i_6]);
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        for (short i_10 = 1; i_10 < 15; i_10 += 3) 
                        {
                            {
                                arr_33 [i_8] [i_8] [i_8] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((arr_25 [i_6]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0))))));
                                var_18 += ((/* implicit */_Bool) (short)4095);
                            }
                        } 
                    } 
                } 
                arr_34 [i_7] [i_7 - 1] = ((/* implicit */unsigned char) arr_16 [i_6] [i_7 - 1] [(unsigned char)17]);
                var_19 += ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    var_20 = var_8;
}
