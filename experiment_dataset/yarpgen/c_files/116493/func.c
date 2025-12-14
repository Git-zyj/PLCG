/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116493
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_1] [(short)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [i_0] [i_1])))) : (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [6U])) : (arr_5 [i_0] [i_1]))))));
                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 36027697507336192ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (36027697507336191ULL) : (((/* implicit */unsigned long long int) 1702365491U))))));
                var_18 ^= ((/* implicit */unsigned short) (((~((~(((/* implicit */int) arr_1 [i_1])))))) << (((((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_12) : (var_15))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) - (10746243599656278238ULL)))));
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((unsigned long long int) var_13))))));
    var_20 = ((/* implicit */unsigned int) ((var_11) > (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) ((2717131766U) >= (3245303120U)))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                var_21 = (~((~(((((/* implicit */_Bool) var_1)) ? (3407705248U) : (var_10))))));
                arr_14 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned short)17202)), (var_14))) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))), (min(((~(arr_13 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_14) : (var_10))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_2] [16] [i_2] [i_5 + 1] [i_2]))));
                                arr_23 [i_5] [(unsigned short)16] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) arr_19 [i_4] [i_3] [i_4] [i_5 - 1] [i_6])) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_2] [12ULL]) < (((/* implicit */unsigned long long int) arr_10 [i_2] [(unsigned short)16])))))))))) >= ((~(arr_8 [i_3] [9U])))));
                            }
                        } 
                    } 
                } 
                var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_3] [i_3] [i_3] [i_2])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 2717131767U)) < (arr_18 [i_2] [i_2] [i_2] [i_2])))), ((~(((/* implicit */int) var_16))))))) : (((long long int) arr_16 [i_3] [i_2] [i_2]))));
            }
        } 
    } 
}
