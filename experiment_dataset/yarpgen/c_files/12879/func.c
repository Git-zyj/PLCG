/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12879
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_10), (var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((((/* implicit */unsigned int) (short)-32409)), (var_9)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((+(var_9))) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                                var_13 = ((/* implicit */short) (-(((min((arr_9 [i_3] [i_1] [i_2]), (arr_0 [i_3]))) * (arr_2 [i_4] [i_3] [i_2])))));
                                var_14 = ((/* implicit */long long int) ((unsigned char) (unsigned short)30720));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_4 [i_2])))), (((((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))))) != (arr_9 [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    arr_20 [i_5] [(signed char)1] [i_5] = min((((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_7] [i_7] [i_6]))))), (8912753437858587573LL));
                    var_16 ^= ((/* implicit */int) arr_17 [i_5] [i_6] [i_7]);
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) / (1279130015241899119LL))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)7)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned short)65524))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5 - 2] [i_6] [i_7]))) : (arr_15 [i_6] [i_5 - 2])))))));
                }
            } 
        } 
    } 
}
