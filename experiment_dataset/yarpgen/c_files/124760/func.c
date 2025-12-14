/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124760
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
    var_15 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) ^ (var_12)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((int) var_14));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (signed char)0))))) + (min((((/* implicit */long long int) -214964232)), (arr_3 [i_0]))))), (((/* implicit */long long int) var_11))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (arr_14 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [16ULL])));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (-((-(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) (+((+(var_11)))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2 - 1] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) var_2)) : (16775168ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])))));
                }
                arr_17 [(signed char)3] [i_1] = ((/* implicit */_Bool) (-(min((arr_3 [i_0]), (arr_3 [i_0])))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (max((arr_12 [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        arr_29 [i_5] [i_5] [i_6 - 1] [i_7] [i_8] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)24576)) || (((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_6 - 1])))))));
                        var_21 *= ((/* implicit */unsigned int) (signed char)-104);
                    }
                } 
            } 
        } 
        arr_30 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_5])) - (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5]))));
    }
}
