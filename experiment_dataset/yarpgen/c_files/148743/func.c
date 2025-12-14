/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148743
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
    var_11 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((unsigned char) var_2)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((/* implicit */int) (+(var_0)));
                                var_14 *= ((max((((/* implicit */long long int) (unsigned short)34011)), ((-9223372036854775807LL - 1LL)))) / (arr_3 [i_1 - 2] [i_1] [i_1 - 2]));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) ((var_1) * (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_2))) / (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                    var_17 = ((unsigned short) (~((~(((/* implicit */int) (unsigned short)58277))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (signed char i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */short) var_8);
                    var_19 = ((/* implicit */int) max((min((arr_10 [i_6] [(unsigned char)1] [i_6] [(unsigned char)1] [i_7] [i_7]), (arr_10 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1]))), (((/* implicit */unsigned short) var_7))));
                    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((arr_3 [i_5] [i_5] [i_6 + 1]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_7])))))))) : ((+(4766468120464501914LL)))));
                }
            } 
        } 
    } 
}
