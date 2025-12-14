/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14569
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
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) << (((((((/* implicit */int) var_8)) + (2202))) - (60)))))) ? (((/* implicit */long long int) var_10)) : (var_0)));
    var_15 += ((/* implicit */long long int) max((max((var_12), ((!(((/* implicit */_Bool) var_6)))))), (((_Bool) (!(var_2))))));
    var_16 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(min((var_4), (((/* implicit */int) (unsigned char)99))))))) | ((~(((((/* implicit */_Bool) 2584962473U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (2584962473U)))))));
                var_18 = ((/* implicit */_Bool) 2584962473U);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_1] [i_2] &= ((/* implicit */short) (_Bool)0);
                                var_19 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                                arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (short)32767)) - (32747)))))) : (arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((max((arr_12 [i_0 - 1] [i_3] [i_3] [i_3] [i_4 + 1] [i_4]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_4] [i_3] [i_2] [i_1] [i_0])), (-3210634631190848966LL)))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1]))) : (3210634631190848969LL)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)167);
                    var_21 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_0 + 1]))) >= (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))))));
                    arr_19 [i_0] [i_5] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) max((var_1), (((/* implicit */unsigned char) arr_17 [i_0 + 1]))))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 1])))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4322)) ? (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) ^ (((/* implicit */int) (short)5420)))) : (((/* implicit */int) var_6))))) + ((~(max((((/* implicit */unsigned int) arr_20 [i_0 + 1] [i_0] [i_0 + 1])), (1710004823U))))))))));
                            arr_26 [i_0] [i_0] [i_1] [i_6] [i_6] [i_7 + 3] = (short)2046;
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_8 = 4; i_8 < 23; i_8 += 2) 
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((short) arr_27 [i_7] [i_1])))));
                                arr_29 [i_1] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)74)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (var_10))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 1141950926)) : (var_3)))));
                                var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_6] [i_6] [i_8])) ? (var_4) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [i_7] [i_8])))) - (((1141950918) + (-1141950926)))));
                                arr_30 [i_0] [i_6] [i_6] [i_7 + 3] [i_8] = ((/* implicit */unsigned int) ((var_11) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) arr_28 [i_0] [i_0 + 1] [i_0])))))));
                            }
                            arr_31 [(_Bool)1] [i_1] [i_6] [i_6] &= ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_6] [i_7])), (arr_10 [i_7] [i_7 + 2] [i_0] [i_0 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
