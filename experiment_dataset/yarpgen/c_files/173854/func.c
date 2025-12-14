/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173854
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
    var_17 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_7)))) | (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_2))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 14; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((arr_0 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (((-839833424780638107LL) | (839833424780638113LL)))))))))));
                    arr_8 [i_0] [i_0] [i_2 - 2] [i_0] = ((/* implicit */unsigned short) -839833424780638102LL);
                    var_19 = ((/* implicit */unsigned short) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_0 [i_0]))), (((/* implicit */unsigned long long int) var_8))))));
                    var_20 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) arr_6 [i_1 - 1] [i_1 - 1] [i_2 - 3]))) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)-49))))));
                }
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
}
