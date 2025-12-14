/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135785
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
    var_12 = ((/* implicit */short) var_7);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [9U] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_9 [i_0 - 1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) >= (max((((/* implicit */unsigned long long int) (_Bool)1)), (9286620389030844279ULL))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-78)) || (((/* implicit */_Bool) var_4)))))))));
                                var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_4 [i_0] [i_1] [15U] [i_3])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_8))))) : (((/* implicit */int) arr_5 [i_4 + 1] [i_1 - 1] [i_0] [i_0 - 1])))), (((/* implicit */int) var_9))));
                                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) (-(var_7))));
                                var_18 = ((/* implicit */unsigned short) arr_5 [i_4 - 4] [i_3] [i_2] [i_0]);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1] [(signed char)0])))), ((!(((/* implicit */_Bool) var_1))))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (~(var_1))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)94)) * (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_1), (10631382168298854752ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) : (((unsigned int) (short)-26673))))));
}
