/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10815
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) arr_6 [i_1])), (arr_8 [0ULL] [i_1] [7]))) + (((/* implicit */unsigned long long int) arr_1 [(_Bool)1] [i_0 + 2])))) - (((/* implicit */unsigned long long int) min((-112714173), (((/* implicit */int) (unsigned char)32)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 + 1])) : (min((((/* implicit */unsigned long long int) var_7)), (arr_8 [i_0] [(unsigned char)5] [i_0 + 1]))));
                                var_12 = ((/* implicit */unsigned int) arr_7 [i_2] [i_4]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) arr_10 [7LL] [i_1] [3ULL] [(unsigned char)1] [i_0]);
                    var_14 = ((/* implicit */signed char) min((min((0ULL), (((/* implicit */unsigned long long int) (signed char)-92)))), (var_9)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_1);
}
