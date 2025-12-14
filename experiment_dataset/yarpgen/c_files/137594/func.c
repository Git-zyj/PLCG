/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137594
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1541358218)) / (((((/* implicit */_Bool) var_5)) ? (min((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_5))))))))));
                            arr_11 [i_0] [i_1] [(unsigned short)2] [i_2] [6ULL] = ((/* implicit */int) (((~(var_0))) + (((var_1) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_13 *= ((/* implicit */_Bool) min((max((arr_7 [i_0] [i_1]), (arr_7 [i_0] [i_1 - 1]))), (((var_7) ? (arr_7 [i_0] [i_1 - 1]) : (arr_7 [i_0] [i_1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) 1776526523))));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (max((((/* implicit */long long int) min((arr_13 [i_4]), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4])) && (((/* implicit */_Bool) arr_12 [i_4])))))))), ((+((-(var_5)))))))));
        var_16 = ((/* implicit */unsigned int) var_12);
    }
}
