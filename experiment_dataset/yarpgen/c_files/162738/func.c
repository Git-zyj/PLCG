/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162738
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
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 = ((/* implicit */long long int) (signed char)119);
    var_18 += ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */long long int) ((short) ((((/* implicit */int) ((signed char) (signed char)-115))) <= (((((/* implicit */_Bool) (unsigned short)43012)) ? (arr_1 [i_0]) : (((/* implicit */int) (short)8160)))))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_4 [i_0] [i_2]);
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (signed char)115)))))) ? (max(((~(19LL))), (((/* implicit */long long int) max((arr_10 [i_3] [i_2] [i_1 + 3]), (((/* implicit */unsigned int) var_0))))))) : (((/* implicit */long long int) ((int) arr_3 [i_3 + 3]))))))));
                        var_21 -= (((+(((/* implicit */int) arr_5 [i_3 - 1] [i_0] [i_0])))) - (((/* implicit */int) max((((/* implicit */short) min(((signed char)-99), ((signed char)95)))), (arr_0 [i_1] [i_3 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_13)))));
                        var_23 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 542272124U)) % (8LL))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_16 [i_4] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_5] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0]))));
                            var_24 = ((/* implicit */short) max((var_24), ((short)-17579)));
                            var_25 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_1 + 4] [i_1 + 2] [i_1] [i_2 - 2] [i_2 - 1]))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) -1868681872))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) var_6);
                            var_28 -= ((/* implicit */unsigned int) (signed char)-119);
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 2] [i_2 - 3] [i_4] [i_6])))))));
                            var_30 = (~(((/* implicit */int) arr_14 [i_2] [i_2 + 1] [i_6])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_31 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (arr_21 [i_0] [i_1] [i_2])))));
                            arr_25 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])) <= (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_0]))) / (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                    for (short i_8 = 3; i_8 < 16; i_8 += 3) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((arr_19 [i_2 - 3]) - (286209448U)))))) : (((unsigned long long int) ((unsigned int) arr_23 [i_0])))));
                        arr_29 [i_0] [i_2] [i_1] [i_1 + 1] [i_0] |= ((/* implicit */long long int) arr_4 [i_0] [i_1 + 2]);
                        var_32 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                        var_33 -= ((/* implicit */short) var_10);
                    }
                    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) min((((((((/* implicit */unsigned int) arr_1 [i_2])) & (arr_10 [i_1] [i_2] [i_1]))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))))), (((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */short) arr_30 [i_9] [i_2] [i_0] [i_0])), ((short)32761)))))));
                        var_35 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)45370));
                        arr_34 [i_0] [i_1 - 1] [i_2 - 2] [i_9] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0]))) * (var_15)))) ^ (var_2))));
                        var_36 ^= ((/* implicit */int) max(((~(arr_27 [i_0]))), (2142009303U)));
                    }
                }
                for (int i_10 = 2; i_10 < 19; i_10 += 4) 
                {
                    var_37 &= ((_Bool) (unsigned char)212);
                    arr_38 [i_0] [i_10] = ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)106), ((unsigned char)229))))) <= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (var_9))))));
                }
            }
        } 
    } 
}
