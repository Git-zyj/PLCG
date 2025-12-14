/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15458
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
    var_13 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) / (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) ((var_8) / (((/* implicit */int) arr_5 [i_1] [i_2]))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_1 [i_0])) + ((+(((/* implicit */int) arr_1 [i_2]))))))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])), (9317118043232581468ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [17])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2699706595U)) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (var_11)))) ? (((/* implicit */int) (short)-31168)) : (((/* implicit */int) var_3))))));
                    }
                    for (int i_4 = 3; i_4 < 18; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) (+(var_8)));
                        arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */int) (-(var_5)));
                    }
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */_Bool) (-(var_11)));
}
