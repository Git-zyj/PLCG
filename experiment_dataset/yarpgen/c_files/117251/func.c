/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117251
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
    var_12 = ((/* implicit */unsigned long long int) -11LL);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_13 -= ((/* implicit */int) (unsigned char)15);
        var_14 = ((/* implicit */int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((((var_4) + (((/* implicit */int) var_2)))) - (((((/* implicit */int) arr_1 [(_Bool)1])) - (((/* implicit */int) (_Bool)1))))));
        var_15 = arr_0 [i_1];
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_1 [i_2])) / (var_4))))))));
        arr_7 [i_2] = ((/* implicit */_Bool) arr_0 [i_2]);
    }
    var_17 = ((/* implicit */signed char) var_4);
}
