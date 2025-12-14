/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176930
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((982136114U) / (((/* implicit */unsigned int) 685192570)))), (((unsigned int) arr_13 [i_0] [i_1] [18LL] [i_3 - 2] [i_1] [i_4] [i_4]))))) || (((/* implicit */_Bool) min((685192574), (((int) 4237687752U)))))));
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 939524096)) ? (-685192575) : (-685192570)))))) ? (max((arr_9 [i_3 + 3]), (arr_9 [i_3 - 1]))) : (((((arr_13 [i_1] [8] [i_1] [i_1] [i_1] [i_4] [i_3 + 4]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_2 [i_1])) - (3463)))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */long long int) -822640407)) + (7438248764241942802LL))) : ((-(arr_11 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((unsigned int) max((((/* implicit */long long int) var_11)), (var_3))));
}
