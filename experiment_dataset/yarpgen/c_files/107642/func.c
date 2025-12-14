/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107642
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1] [i_0])))))))), (arr_0 [21LL])));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                arr_8 [2LL] [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) arr_5 [i_0]))))) <= ((+(((/* implicit */int) (short)-24434)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 &= ((/* implicit */_Bool) var_5);
                                var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_11 [i_3] [(short)16] [i_1] [i_0]))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max(((-2147483647 - 1)), (((/* implicit */int) (short)24419)))))));
                                var_20 -= ((/* implicit */long long int) (short)24400);
                                var_21 = ((/* implicit */unsigned short) ((17ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (signed char)-99))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 151593833650029740LL)) ? (-7123031558849325462LL) : (((/* implicit */long long int) -1944109202))))), (var_4))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_22 [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(arr_6 [12U])))) ? (((/* implicit */int) min((arr_5 [(unsigned char)14]), (((/* implicit */short) var_1))))) : (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)24428))))))));
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) arr_18 [i_5]);
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_2 [i_6]))));
                            }
                        } 
                    } 
                } 
                arr_29 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_24 [i_5] [i_5] [i_6]) <= (arr_24 [i_6] [i_6] [i_5])))), (((int) (+(var_7))))));
            }
        } 
    } 
}
