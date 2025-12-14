/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185040
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
    var_13 = ((/* implicit */unsigned int) 1985823538881085523ULL);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) ((1985823538881085519ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((min((arr_0 [i_0]), (arr_0 [i_0]))), (max((var_4), (arr_0 [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        arr_12 [i_3] [9ULL] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (arr_10 [i_2] [i_3 - 1] [i_3] [i_3])));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_3 + 1])) ? (1985823538881085534ULL) : (((/* implicit */unsigned long long int) ((int) arr_2 [i_2] [i_2])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_17 [i_3] = ((/* implicit */short) (-(1768369890)));
                            arr_18 [i_3] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_6);
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = var_9;
                            var_15 &= (~(((/* implicit */int) var_12)));
                        }
                        arr_20 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_2]))) - (var_10)));
                    }
                }
            } 
        } 
    } 
}
