/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101533
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) min((min((max((((/* implicit */unsigned int) arr_9 [13LL] [i_1] [i_2 - 1] [i_2])), (arr_1 [(short)11]))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)5546)), (arr_5 [i_0] [i_1] [i_1])))))), (((/* implicit */unsigned int) (~(max((((/* implicit */int) var_5)), (arr_6 [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        arr_15 [i_3] [i_2 - 2] [(short)3] [i_1] [i_0] [(unsigned short)21] = ((/* implicit */unsigned long long int) (+(-2089327574469942985LL)));
                        var_17 |= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 255U)) < (arr_7 [i_0] [i_1] [5LL] [i_1]))) ? (4294967025U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2 + 1]))));
                    }
                    arr_16 [i_0] [i_1] [6ULL] = (-(var_3));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_2))));
    var_20 = (+(((/* implicit */int) (((~(255U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)3900)) < (((/* implicit */int) (short)3894))))))))));
}
