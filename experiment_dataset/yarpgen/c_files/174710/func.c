/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174710
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((min((arr_1 [i_1 - 1]), (((/* implicit */unsigned int) (short)16589)))) % (max((arr_1 [i_1 - 1]), (((/* implicit */unsigned int) (unsigned char)109)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1 - 1] [i_1] [i_3] = ((/* implicit */int) (unsigned char)2);
                            var_11 = ((/* implicit */unsigned long long int) ((arr_3 [i_1 - 2] [i_1 - 1] [i_1]) >= (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1 - 2] [i_1 + 1] [i_1]) : (arr_3 [i_1 + 1] [i_1 - 1] [i_1])))));
                            var_12 = ((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16589))))), ((+(var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) max((var_5), (var_3)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (2197949513728ULL)))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)21)), (4LL)))) ? (var_3) : (min((((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_4] [i_4] [i_4])), (var_5)))))) ? (((/* implicit */unsigned int) ((int) arr_11 [i_4] [i_4] [i_4] [i_5] [i_5]))) : (arr_1 [i_5])));
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (int i_8 = 1; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_12 [i_8] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]), (arr_12 [i_8] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1])))) ? ((~(((/* implicit */int) arr_12 [i_8 - 1] [i_8] [i_8 - 1] [10] [i_8 + 1] [i_8])))) : (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_12 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1]))))));
                                var_15 = ((/* implicit */long long int) arr_17 [i_4] [i_5] [i_6]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
