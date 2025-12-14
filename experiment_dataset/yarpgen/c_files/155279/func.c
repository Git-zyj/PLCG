/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155279
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 |= (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) arr_9 [i_2 - 1]);
                        arr_10 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_9));
                        arr_11 [i_0] [i_1] [i_2] [i_2 - 2] [i_3] [i_3] |= ((/* implicit */unsigned long long int) (+(arr_1 [i_2 - 1] [i_3 + 2])));
                    }
                    var_17 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (signed char)109)) && (((/* implicit */_Bool) (unsigned short)47936)))) ? ((+(-3977770712563064122LL))) : (((/* implicit */long long int) -1359426184)))), (((/* implicit */long long int) ((signed char) ((unsigned char) arr_9 [i_0]))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(var_10))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_4] [i_1])))))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_4])) << (((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2] [i_5] [i_5]))))) ? (((((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_5] [i_5])) & (((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_5] [i_5])))) : ((~(((/* implicit */int) arr_8 [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_5] [i_2 - 1]))))));
                                var_21 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3977770712563064136LL)))) + (((((/* implicit */_Bool) (short)-26142)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 1] [i_1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2 - 2] = ((/* implicit */int) max((((min((-3977770712563064132LL), (((/* implicit */long long int) var_14)))) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 + 1]))))), (((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0]))))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) var_11);
}
