/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188698
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned short) 8753049988901762591LL);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) arr_2 [i_4 - 1] [i_2 - 1])) : (((/* implicit */int) arr_2 [i_4 - 1] [i_2 - 1])))), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_2)))) << (((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1] [i_4 - 1]))))));
                                arr_12 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)7))))) ? (7942141817487238744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (((3906559848704466427ULL) * (18446744073709551615ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_9);
}
