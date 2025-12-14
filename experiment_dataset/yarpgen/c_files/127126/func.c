/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127126
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)18))))) : (var_9))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_3 [i_0 + 2] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_4 [i_0 - 1])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 += ((/* implicit */signed char) arr_4 [i_1]);
                            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)225), ((unsigned char)251)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)213))))) : (((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_0 + 2])) ? (arr_0 [i_2 + 1] [i_0 + 2]) : (arr_0 [i_2 + 1] [i_0 + 2])))));
                            var_15 += ((/* implicit */short) arr_3 [i_1] [i_1]);
                            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)238))));
                    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)208)) || (((/* implicit */_Bool) var_0)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                arr_21 [i_5] [i_5] [i_5] &= ((/* implicit */unsigned long long int) (unsigned char)16);
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 4ULL))));
                arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)253)), (arr_20 [i_6])))) ? (-8875331217009843147LL) : (((1822082145007317415LL) + (((/* implicit */long long int) var_10))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_1);
    var_21 ^= ((/* implicit */unsigned long long int) max((max((var_2), (var_0))), (((/* implicit */long long int) -2090195198))));
    var_22 = ((/* implicit */unsigned char) var_10);
}
