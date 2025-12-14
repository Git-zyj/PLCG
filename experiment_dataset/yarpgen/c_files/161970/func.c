/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161970
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0 - 2] [20ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) arr_4 [i_0] [i_2] [i_3] [i_4]))) * (((arr_4 [i_0] [2ULL] [i_4] [i_4]) / (arr_4 [i_2] [i_1] [i_0] [i_0 - 2])))));
                                var_11 ^= ((/* implicit */long long int) var_8);
                                var_12 -= ((/* implicit */short) max((((/* implicit */unsigned int) -1269584234)), (((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 1] [i_3])) ? (var_3) : (var_3))) / (((((/* implicit */_Bool) arr_7 [i_0] [11] [19LL] [i_3])) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_1])) : (var_2)))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */int) 438991779U);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_6) ^ (((/* implicit */int) (short)-28293)))));
    var_15 = ((/* implicit */short) var_3);
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (2633834916U) : (((/* implicit */unsigned int) var_5))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (signed char i_6 = 4; i_6 < 24; i_6 += 3) 
        {
            {
                arr_19 [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_5] [i_5] [i_5] [1LL] [i_5] [11ULL] [i_6 - 4])), ((((!(((/* implicit */_Bool) arr_18 [i_5])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_12 [i_5] [i_6]) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5])))))));
                var_17 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_10 [i_5] [i_6 - 3])), ((+(arr_16 [i_6] [i_5] [i_5]))))), (((((/* implicit */_Bool) arr_7 [i_6 - 4] [i_6 - 1] [i_6 - 1] [i_6 + 1])) ? (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_5]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_9)))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 23; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) (-(min((arr_14 [i_7 - 1]), (((/* implicit */long long int) (short)-28293))))));
                            var_19 = ((/* implicit */signed char) var_1);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((arr_4 [i_8 + 1] [i_7 + 1] [(signed char)20] [i_5]) & (((/* implicit */long long int) arr_22 [i_5] [i_7] [i_7])))))) >> (((((((/* implicit */_Bool) -1269584234)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (var_6) : (arr_7 [i_5] [i_5] [i_6] [i_5])))))) - (1891017025U)))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */long long int) ((unsigned short) (+(((((/* implicit */_Bool) 1269584233)) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) arr_3 [i_5])))))));
            }
        } 
    } 
}
