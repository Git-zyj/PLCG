/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118548
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
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_2 [i_1] [i_0])) > (((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) -1438090491)) ? (5212600865861347901ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) : ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (var_12))))))))));
                var_21 += ((/* implicit */unsigned int) var_7);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16)))) : (((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12))))) + (((/* implicit */unsigned long long int) (-(var_2)))))))));
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2652194876811347693ULL)) && (var_10))) ? (max((((/* implicit */unsigned int) arr_2 [i_1 + 1] [i_3])), (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [(short)0])) : (((/* implicit */int) (short)2852)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
