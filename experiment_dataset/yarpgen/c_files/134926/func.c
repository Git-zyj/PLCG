/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134926
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_1] = var_4;
                var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (arr_0 [i_0 + 1] [i_1]))), (((((/* implicit */_Bool) min((11181887173826855206ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [19ULL] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) 536870911)) ? (12516302432517664336ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047)))))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 2147483635)), (12516302432517664343ULL)));
}
