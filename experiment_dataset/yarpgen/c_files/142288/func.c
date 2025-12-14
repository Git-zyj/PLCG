/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142288
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
    var_16 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = var_12;
                arr_5 [i_0 + 2] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)124)), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))) + (((unsigned long long int) arr_1 [i_0]))))));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (-4212900979940953469LL)))) ? (((/* implicit */unsigned long long int) min((arr_2 [i_1]), ((-9223372036854775807LL - 1LL))))) : (((unsigned long long int) arr_0 [(short)20])))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(arr_7 [i_0] [i_1] [(_Bool)1])));
                    arr_9 [(unsigned char)17] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned char) 4212900979940953469LL));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_14);
}
