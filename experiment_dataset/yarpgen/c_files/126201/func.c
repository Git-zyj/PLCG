/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126201
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (-(min((2796291947U), (((/* implicit */unsigned int) (unsigned short)53644))))));
                            var_21 = ((/* implicit */short) min((var_21), (min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) 8799793755429158877ULL)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [(_Bool)1] [i_4 - 3] [i_4 - 3] [(_Bool)1] |= ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_6)) * ((-(((/* implicit */int) (unsigned short)11892)))))));
                                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53644))))), ((-(18175743882594418033ULL)))));
                                var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_0] [i_1 + 1] [i_4] [i_5]))) ? ((-(2216026208294376963ULL))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4])) ? (15526660404629286323ULL) : (((/* implicit */unsigned long long int) var_11)))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((var_4) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35)))))) & (arr_4 [i_1 + 2] [i_1 - 1])))))))));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5742171967039001998ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4503984474193170382ULL)))) || ((!(((((/* implicit */_Bool) var_5)) && ((_Bool)1))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
    {
        for (unsigned short i_8 = 2; i_8 < 16; i_8 += 2) 
        {
            {
                var_26 = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53654))) & (990049268453989207ULL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11882))))))) | (((/* implicit */unsigned long long int) (-(((((-187845908) + (2147483647))) << (((((/* implicit */int) var_4)) - (1))))))))));
                arr_26 [i_7] [i_7] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        for (short i_10 = 3; i_10 < 19; i_10 += 4) 
        {
            for (signed char i_11 = 2; i_11 < 19; i_11 += 1) 
            {
                {
                    arr_35 [i_9] [i_9] [i_11] [i_10] = ((/* implicit */short) (-((-((~(((/* implicit */int) (unsigned short)53644))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (short i_13 = 2; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_27 &= ((/* implicit */signed char) arr_7 [i_11 + 1]);
                                var_28 = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) var_14)), (arr_28 [i_9] [i_10 - 1])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) (-((((~(((/* implicit */int) arr_19 [i_9] [i_10] [i_11] [i_11] [i_10] [i_10])))) & (((/* implicit */int) ((((/* implicit */int) (signed char)104)) <= (((/* implicit */int) var_18)))))))));
                }
            } 
        } 
    } 
    var_30 ^= ((/* implicit */short) var_11);
}
