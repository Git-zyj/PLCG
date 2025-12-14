/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157120
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_0] [(short)9] [i_3] [i_3 + 2] = ((/* implicit */_Bool) var_8);
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_10 [10U] [8] [i_2] [i_3]))));
                        var_15 -= ((/* implicit */short) (-(arr_4 [i_1] [i_2])));
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (33554431) : (-33554447))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [7] [7]))))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_1] [i_1] [i_4] &= arr_5 [i_0] [i_0] [i_2] [i_4];
                        var_16 &= ((/* implicit */short) ((int) min((arr_2 [i_4 - 1] [4]), (max((((/* implicit */int) arr_8 [i_4] [i_2] [i_0] [i_0] [i_0])), (arr_14 [i_0] [i_4] [i_2] [i_4] [i_4]))))));
                    }
                    arr_16 [0] &= (-((+(var_2))));
                    arr_17 [i_0] = ((((unsigned long long int) ((signed char) (short)-1))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (-33554437)))) ? (((long long int) var_9)) : (((/* implicit */long long int) arr_9 [i_0] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 13; i_5 += 1) 
    {
        for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            {
                arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) arr_20 [i_6]))))) ? ((~(((/* implicit */int) (signed char)-67)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_6]))) <= (var_2))))))));
                arr_23 [i_5] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)21105))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)110)) ? (1589446385) : (-1589446390))), (max((((/* implicit */int) arr_19 [i_5] [i_6 - 1])), (var_9)))))) : (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24))) : (((((/* implicit */unsigned int) 1589446405)) * (2136951854U)))))));
                arr_24 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_21 [i_6] [0ULL])), (var_4))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_18 [11U]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            {
                                arr_38 [i_7] [i_8] [i_9] [i_10] [i_8] [i_9] [3ULL] = ((/* implicit */_Bool) ((short) ((((((/* implicit */_Bool) arr_37 [3U] [(short)6] [i_9] [i_9] [i_9])) ? (var_0) : (3618596652U))) + (((/* implicit */unsigned int) ((33554431) << (((var_8) - (5305763722062985901LL)))))))));
                                var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_9] [i_9] [i_11] [i_9] [i_9])) & (((/* implicit */int) arr_34 [i_7 + 1] [i_7 + 1] [i_11] [i_10] [i_11]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_7] [i_8] [i_11] [i_10] [i_7])) : (var_9))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_28 [i_8] [i_8]), (((/* implicit */short) ((_Bool) arr_27 [i_7] [i_8])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_8 + 2])) ? (((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_21 [i_7 - 1] [i_7]))))) : (((unsigned int) arr_21 [i_7 - 1] [i_7 - 1]))));
            }
        } 
    } 
}
