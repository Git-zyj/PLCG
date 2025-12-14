/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124658
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [7ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? ((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (6600635969622276991ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) var_5)) + (24130))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 11846108104087274639ULL))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_13);
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-113)), (var_11))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-88)) / (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 5373367615553798481ULL)) ? (11846108104087274637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))));
                            arr_20 [i_2] [i_3] [i_5] [i_5 + 2] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (signed char)127)) ? (var_10) : (1204543734U)))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)1024))))) && ((!(((/* implicit */_Bool) (signed char)-1))))));
                            arr_21 [i_2] [i_2] [i_4] [i_5 - 2] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((2665592797126868379ULL), (var_1))), (((/* implicit */unsigned long long int) var_14))))) ? (((arr_15 [i_5 + 1] [i_5 + 1] [23ULL] [(signed char)20]) - (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        }
                    } 
                } 
                arr_22 [i_2] [i_3] [i_3] |= ((/* implicit */unsigned long long int) min((arr_8 [i_3]), (((/* implicit */short) (signed char)78))));
                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_2])) * (((/* implicit */int) (signed char)-122))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3]))) : ((-(var_0)))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31288)))))) / (((6600635969622276977ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967295U))))))));
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((signed char) (short)-7122))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))))));
                                arr_30 [i_2] [i_2] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned int) 0ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */unsigned long long int) 2764052427U)) : (11846108104087274656ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)107))))) : (var_8))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) < (11846108104087274656ULL))) ? (((/* implicit */unsigned long long int) 12U)) : (((((/* implicit */_Bool) (signed char)-22)) ? (11846108104087274630ULL) : (4418641659232960998ULL))))))))));
}
