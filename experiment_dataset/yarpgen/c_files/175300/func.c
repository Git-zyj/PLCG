/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175300
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
    var_13 = ((/* implicit */unsigned int) (~(((var_5) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) ((var_6) >= (var_12))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_3))))))));
        var_17 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (var_11)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) var_5);
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_2]));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 11; i_4 += 2) 
                    {
                        for (short i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1]);
                                arr_16 [i_5] [i_2] = arr_9 [i_4 - 1] [i_3];
                                arr_17 [i_1] [i_2] [i_3] [i_3] [i_5] [i_1] [i_5] = ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 + 1])) ? (arr_8 [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 + 1] [i_2 - 1]));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_12 [i_1] [i_2] [i_3] [i_1] [i_3]))) * (((/* implicit */int) ((_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_2)))));
        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        var_22 = arr_18 [i_6];
        arr_21 [i_6] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) << (((arr_20 [i_6]) - (1772702433U)))))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((long long int) var_9));
    }
}
