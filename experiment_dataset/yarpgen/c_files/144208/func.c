/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144208
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
    var_14 = ((/* implicit */long long int) (+(((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)244))))) / (((/* implicit */int) min((var_0), (var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) min((arr_0 [15] [i_1]), ((unsigned char)11)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
                                arr_11 [i_0] [i_1] [i_0] [7U] [i_0] [i_4 + 1] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_4 [i_1 - 4])) ? (arr_7 [i_0] [(unsigned char)22] [i_2] [i_3] [i_4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (((/* implicit */unsigned int) ((int) 141922179718176824LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (((~(((/* implicit */int) ((unsigned char) arr_5 [i_6] [i_0 + 2] [i_0 + 2]))))) + (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [5U])) : (((/* implicit */int) var_2)))) + (-923150904)))));
                                var_18 = ((/* implicit */unsigned char) ((var_12) == (((/* implicit */long long int) (-(((var_2) ? (1677410081U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14649))))))))));
                                var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)130)));
                                var_20 = ((/* implicit */_Bool) ((int) (~(arr_10 [i_0 - 1] [i_0 + 2] [i_1 + 1] [i_5 + 2] [i_0 - 1] [i_7] [i_7]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min(((~(arr_25 [i_0] [i_0] [i_8] [i_0]))), (((/* implicit */long long int) arr_4 [i_0]))));
                                arr_29 [i_0] [i_8] [i_8] = ((/* implicit */int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_10] [i_9] [i_8] [i_0]))))), (((arr_24 [i_0] [i_0] [i_8] [i_9]) >> (((((/* implicit */int) var_10)) - (142))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_2))) == (((/* implicit */int) ((arr_28 [i_8]) >= (var_12)))))))));
                                arr_30 [i_10] [i_9] [i_8] [i_8] [i_1 + 1] [(unsigned char)10] = ((/* implicit */int) arr_17 [i_0] [i_0] [i_8] [i_8] [i_9] [i_10]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)26678)))), (max((((/* implicit */long long int) var_4)), (var_12)))))));
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        for (short i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            {
                arr_35 [i_11] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_10))));
                var_23 ^= ((/* implicit */unsigned int) max((var_12), (((/* implicit */long long int) var_4))));
            }
        } 
    } 
}
