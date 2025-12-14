/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177147
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 1])))) == ((+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min(((+(var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_0 [i_1] [i_1]), (arr_8 [i_0] [i_0] [i_2] [i_0])))), (min((((/* implicit */int) (unsigned short)0)), (var_0))))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1 - 1] [i_2])) > (((/* implicit */int) arr_4 [i_1 - 1]))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_1 + 1] [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = (+(((((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (min((((/* implicit */unsigned short) arr_9 [i_6] [i_6] [i_6] [i_6] [i_4])), (arr_13 [i_6] [i_4] [i_4])))))) || (((/* implicit */_Bool) (+(-5389651264639835404LL))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((arr_12 [i_4]) / (((/* implicit */long long int) arr_1 [i_6]))))) ? (arr_3 [5ULL]) : (((((/* implicit */int) (unsigned short)29307)) / (((/* implicit */int) (unsigned short)10105)))))), (arr_3 [i_4 + 1]))))));
                    arr_17 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */signed char) min((((arr_15 [i_4 - 1] [i_5] [i_6]) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_5] [i_6])) : (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_6])))), (((arr_15 [i_4 + 1] [i_6] [i_6]) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_4 - 1] [0ULL] [i_6]))))));
                }
            } 
        } 
    } 
}
