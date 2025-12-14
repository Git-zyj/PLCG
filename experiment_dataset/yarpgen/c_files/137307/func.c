/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137307
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0]);
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-1867)), (arr_0 [i_0]))))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(min((min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))))))))));
        }
        arr_8 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_5)), (var_0))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
