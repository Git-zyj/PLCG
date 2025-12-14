/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175359
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
    var_17 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) ((((unsigned long long int) arr_1 [i_1] [i_1])) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                var_19 = var_10;
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (arr_1 [i_1 + 2] [i_1 - 2]) : (arr_1 [i_0] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (arr_0 [(unsigned char)7] [i_1 - 1]) : (arr_1 [i_0] [i_1 + 1]))) : (((arr_1 [0LL] [i_1 - 2]) >> (((arr_1 [i_0] [i_1 - 1]) - (9220714083903285772ULL)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-(-2694103012643817239LL)));
}
