/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158256
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
    var_11 = var_8;
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (max((var_9), (var_3)))))) ^ (((/* implicit */int) (unsigned short)48326)))))));
    var_13 = (-(var_0));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((unsigned short) arr_10 [i_0] [i_1] [i_2] [(unsigned short)7]);
                        var_14 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2])))));
                        var_15 = ((((1162520038U) ^ (arr_0 [i_2]))) * ((~(arr_6 [i_3] [(unsigned short)1] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (var_0)));
                    arr_16 [3U] [3U] [i_5] [i_5] = ((arr_15 [i_5] [i_4] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [(unsigned short)6])))));
                }
            } 
        } 
        var_17 = arr_14 [i_0] [i_0] [i_0] [i_0];
        var_18 = ((/* implicit */unsigned int) ((unsigned short) var_7));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((unsigned short) ((arr_7 [i_8]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_6]))))));
                        arr_23 [i_6] = ((/* implicit */unsigned short) ((unsigned int) arr_15 [i_6] [i_6] [i_7 + 1]));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            var_20 = var_3;
                            var_21 = arr_12 [i_7 - 1] [i_6] [i_6];
                            arr_26 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1684290062U))))) < (((/* implicit */int) var_4))));
                        }
                        var_22 = arr_24 [i_6] [i_7] [i_7 + 1] [i_7] [i_8];
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2370)) >> (((((/* implicit */int) (unsigned short)17232)) - (17225)))));
        arr_30 [i_10] = ((/* implicit */unsigned short) ((var_0) > (max((arr_27 [i_10]), (arr_27 [i_10])))));
    }
}
