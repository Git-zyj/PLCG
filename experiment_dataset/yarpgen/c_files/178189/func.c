/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178189
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
    var_13 = ((/* implicit */unsigned char) 0U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 1] = ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                arr_13 [13U] [i_2] [17ULL] [i_4] = ((/* implicit */int) min(((+(((unsigned long long int) -1069459515862094676LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0 - 4] [i_2 - 1])))))));
                                var_14 = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [(unsigned short)20] [i_3] [i_4]))));
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (((arr_2 [i_0 - 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) var_7)) : (var_10)))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = min((max((max((((/* implicit */short) arr_9 [i_0] [i_1] [i_3])), (arr_8 [i_4]))), (((/* implicit */short) arr_1 [i_0 - 3] [i_2 - 1])))), (((/* implicit */short) (_Bool)1)));
                                arr_16 [i_4] [i_4] [i_1] [i_4] [23LL] [i_1] = ((signed char) arr_3 [i_0 - 1]);
                            }
                            var_15 = ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0 - 1]))))) : (((unsigned int) 15203946096326886778ULL)));
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */_Bool) 3242797977382664838ULL);
                arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) + (max((arr_4 [i_0 - 4] [i_0 - 3]), (((/* implicit */long long int) ((unsigned int) var_7)))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) var_12)) ? (var_7) : (var_7));
}
