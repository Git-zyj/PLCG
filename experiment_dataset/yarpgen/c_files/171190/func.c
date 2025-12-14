/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171190
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
    var_17 = ((/* implicit */long long int) ((min(((-(var_9))), (((/* implicit */unsigned int) (short)-31287)))) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (var_16) : (((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        arr_11 [i_0] [i_1] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 + 3] [i_0] [i_0 + 2] [i_0]))));
                        arr_12 [i_1] [i_2] [i_1] [i_1] = 452312946U;
                    }
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) (-(var_16)));
                        var_21 = ((/* implicit */signed char) (-(min((((/* implicit */int) (unsigned char)225)), (arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_4])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) || (((/* implicit */_Bool) arr_3 [i_2] [i_5]))));
                        var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5] [i_5] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) : (3968960053U)))) ? (((/* implicit */int) arr_18 [i_2] [i_0 - 1] [i_0 + 3] [i_0 - 2])) : (((/* implicit */int) arr_15 [i_0 - 2] [i_0 + 3] [i_0]))));
                        arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((((((/* implicit */int) var_13)) + (2147483647))) >> (((/* implicit */int) var_7))))));
                    }
                    arr_21 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-19)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-125))))) : (arr_7 [i_0 + 2] [i_0 - 1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)234))))), (0LL))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)12954)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (unsigned short)32984)))), (((/* implicit */int) min((var_1), (((/* implicit */short) var_4)))))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            {
                var_24 = ((/* implicit */int) min((max((arr_0 [i_6] [i_7]), (arr_0 [i_6] [i_6]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60836)) % (((/* implicit */int) (unsigned char)165)))))));
                var_25 = ((/* implicit */unsigned short) min((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (arr_7 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7]))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14678))))))))));
            }
        } 
    } 
}
