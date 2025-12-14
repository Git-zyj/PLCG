/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11692
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */unsigned int) 13949696340292317225ULL);
                var_16 = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 3]));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_2 - 1] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7454001280614074873ULL))));
                            var_17 = ((((arr_10 [i_2 + 1]) + (2147483647))) >> (((((int) arr_8 [i_0] [i_0] [i_0] [i_0])) + (653746252))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0]))) ? (arr_0 [i_3]) : (((/* implicit */long long int) arr_9 [i_0] [i_1 - 1] [i_2 + 2] [i_1 + 1]))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_2 [i_0])), (4294967295U)))))) > (arr_8 [i_0] [i_1] [i_1 - 2] [i_1 - 3]));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1 - 3] [i_1 + 1]) / (((/* implicit */int) ((_Bool) (signed char)13))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
}
