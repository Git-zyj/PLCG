/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136654
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
    var_12 &= ((/* implicit */_Bool) ((unsigned long long int) min(((signed char)-54), (((/* implicit */signed char) ((-740782604) >= (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) ((int) var_5));
                arr_6 [i_0] [i_1] [7ULL] = var_1;
                var_14 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_8))) << (((max((var_4), (((/* implicit */unsigned long long int) var_1)))) - (5435983530100230812ULL))))) < (((/* implicit */int) min((((var_2) == (arr_5 [i_0]))), (((_Bool) arr_1 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    arr_15 [i_3] [3U] [3U] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_3]) : (((/* implicit */int) arr_14 [i_3])))))) ? (((((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [1] [i_2] [i_2])))))) | ((-(var_0))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_0)) : (var_3))) >= (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (var_2)))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_0))));
                }
                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_6);
            }
        } 
    } 
}
