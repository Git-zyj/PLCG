/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160812
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
    var_19 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_20 |= ((/* implicit */int) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) max((min((arr_1 [i_0 - 3]), (((/* implicit */unsigned int) (short)19395)))), ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0])))))));
        arr_2 [3LL] = ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
        var_22 = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] = max((max((arr_0 [i_0 + 1]), (arr_0 [(_Bool)0]))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) max((((/* implicit */int) (_Bool)1)), (arr_5 [i_1])))))));
        arr_7 [i_1] &= ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_5 [i_1]) == (((/* implicit */int) (_Bool)1))))), (min((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (((unsigned int) (_Bool)1))));
    }
}
