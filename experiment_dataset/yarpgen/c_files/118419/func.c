/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118419
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
    var_12 += ((/* implicit */signed char) ((_Bool) min((((((/* implicit */unsigned long long int) var_0)) * (1308767109093039650ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)82)) ? (((((/* implicit */_Bool) 770748465)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-76))))))), (arr_2 [i_2] [i_0])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned long long int) var_9);
                                var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-1601353115) : (((/* implicit */int) (signed char)-83))))) && (((/* implicit */_Bool) 1601353115))));
                                var_16 = ((/* implicit */unsigned long long int) (signed char)-82);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (-1719670861)))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) : (var_2)));
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)0)) : (var_10))) * (((/* implicit */int) (signed char)-17))))) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_5))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_5))))))));
}
