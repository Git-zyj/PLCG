/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166019
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [(signed char)7] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) - (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((unsigned short) (unsigned char)22))))));
                        var_15 = ((/* implicit */_Bool) ((((unsigned int) var_0)) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_0] = ((/* implicit */short) var_13);
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) var_9);
                        var_16 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 946365905U))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [(signed char)6] [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_12)));
                                var_18 = ((/* implicit */signed char) ((unsigned short) ((unsigned char) var_6)));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) var_10);
}
