/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117435
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
    var_16 = ((/* implicit */int) ((_Bool) (+(((((/* implicit */_Bool) (unsigned short)25)) ? (var_2) : (var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned long long int) ((int) (+(arr_7 [i_2 - 2] [i_1 - 1] [i_1] [i_1]))));
                                arr_16 [i_0 - 1] [(unsigned char)9] [i_2 - 2] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) >= (12489376629342896112ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(-3LL)))) ? (var_2) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [12U] [i_5] [i_5]))))))) <= (((/* implicit */unsigned int) (-(max((((/* implicit */int) var_11)), (arr_22 [i_0 + 1] [i_1] [i_5] [(signed char)10] [i_6])))))))))));
                            arr_24 [i_0] [i_1 - 1] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -1318646677)), (4294967288U)));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_15 [i_0] [4LL] [14ULL] [3U] [i_5] [i_6]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_8] [i_0 - 1] [i_0 - 1] [i_8]))))) ^ (((12489376629342896104ULL) << (((((/* implicit */int) arr_18 [i_8] [i_0 - 3] [i_0 - 3] [i_8])) - (23516)))))))));
                            var_21 = ((/* implicit */int) arr_4 [i_0]);
                        }
                    } 
                } 
                var_22 -= ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_17 [(short)14] [i_1])))) % (((/* implicit */int) max((arr_12 [2U] [1ULL] [i_0 + 2] [i_1] [i_1]), (var_14)))))) ^ (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [(signed char)5]))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_23 = ((signed char) max((((/* implicit */unsigned long long int) var_14)), (arr_34 [i_0 - 3] [i_9] [i_10] [i_10] [i_10])));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 - 3] [(signed char)6] [i_0 + 2] [i_10]))) | (arr_33 [i_10] [i_10]))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_23 [2LL] [i_1] [i_9] [(signed char)7])) ^ (((/* implicit */int) arr_31 [i_1 - 1] [i_9] [i_10]))))))) ^ (min((-5658205856554244707LL), (((/* implicit */long long int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
