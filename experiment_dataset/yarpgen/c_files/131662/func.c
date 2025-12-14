/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131662
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) var_0);
                    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [0] [i_0 + 4] [i_0 + 4] [i_0 + 4])))), ((+(((/* implicit */int) arr_6 [i_0] [i_0 + 4] [i_0 + 4] [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((short) (+((+(2199006478336ULL))))));
                                var_14 &= ((/* implicit */short) (-(max((max((((/* implicit */int) var_6)), (var_5))), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_1] [i_2] [i_3 - 2])) ? (((/* implicit */unsigned long long int) var_10)) : (2199006478337ULL)))) ? (max((2199006478349ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_1] [i_2] [i_3 - 2])))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] |= ((/* implicit */signed char) max((((((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0])) << (((((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])) - (29723))))), (((/* implicit */int) max((arr_12 [i_0] [i_0 - 1] [8] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                arr_28 [i_5 + 3] [i_5] [i_5 + 3] [i_5] [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) < (((/* implicit */int) arr_15 [i_5])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_6 + 1] [i_5] [i_5] [i_9] [i_6])) ? (arr_17 [i_6]) : (var_5)))), (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((arr_26 [i_6 + 3] [i_6] [i_8 + 2]) ? (((((/* implicit */int) arr_23 [i_5] [i_5] [i_7 - 1] [i_5] [(short)1] [i_6])) - (((/* implicit */int) var_3)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                                arr_29 [i_9] [i_6] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_5 - 1] [i_5 - 1] [i_8] [i_8 + 2] [i_6]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (short i_11 = 3; i_11 < 13; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((2199006478348ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_2)) ? (arr_37 [i_5] [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_10]) : (((/* implicit */unsigned long long int) var_5)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [(_Bool)1] [(_Bool)1] [i_11] [i_5 + 1] [i_6 + 2] [i_10]))) : (max((((/* implicit */long long int) arr_23 [i_5] [i_6] [i_10] [i_11] [i_11] [i_5])), (var_8)))))))))));
                                arr_38 [10ULL] [i_6] [i_6] [i_11] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)29405)), (13593121456217720316ULL))))));
                                var_17 = max((((((((/* implicit */int) (short)-29405)) >= (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5])))))) : (arr_25 [i_5] [i_6 + 4] [i_6] [i_6 + 4] [i_11 + 2] [i_12]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_20 [i_6])) <= ((-(13593121456217720328ULL)))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) - (((((/* implicit */_Bool) (short)19844)) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) arr_23 [i_5] [i_6] [i_5] [(_Bool)1] [i_12] [i_5]))))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) var_8)))))))))));
                                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_5 + 4]))))) : (((((/* implicit */_Bool) var_2)) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_11] [i_11] [i_11] [i_12] [i_5])))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)19844))));
            }
        } 
    } 
}
