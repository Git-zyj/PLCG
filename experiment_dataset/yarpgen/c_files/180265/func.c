/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180265
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
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)32173)), (min((arr_0 [i_0]), (arr_1 [i_0] [i_1])))));
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 2] [i_1 + 1]), (arr_1 [i_0 + 1] [i_1 - 1])))) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3291659855727221679ULL)) ? (arr_0 [i_1]) : (((/* implicit */int) (signed char)-116)))))) / (((((/* implicit */int) var_2)) / (((/* implicit */int) (_Bool)1)))))))));
                var_18 ^= ((((/* implicit */_Bool) 676794697U)) ? (var_1) : (max((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])), (3291659855727221679ULL))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_7);
    var_20 = ((/* implicit */unsigned short) max((var_20), (var_14)));
    var_21 = var_12;
    var_22 |= var_15;
}
