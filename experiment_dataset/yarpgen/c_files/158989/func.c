/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158989
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-19130))));
        arr_3 [i_0] [i_0] = (+(((/* implicit */int) var_7)));
        arr_4 [i_0] = ((/* implicit */_Bool) var_10);
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */int) min(((~(4067956018662149477ULL))), (min(((~(4067956018662149481ULL))), (((/* implicit */unsigned long long int) ((int) 4067956018662149477ULL)))))));
        var_16 = arr_7 [(_Bool)1];
    }
    for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((unsigned long long int) min((arr_0 [i_2]), (arr_0 [i_2]))));
        arr_11 [i_2] = ((/* implicit */_Bool) arr_0 [i_2]);
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned long long int) 25U)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23961))) : (var_0)));
    var_19 = var_0;
    var_20 = ((/* implicit */unsigned short) (+((((-(((/* implicit */int) var_9)))) & (((/* implicit */int) var_10))))));
    var_21 |= ((/* implicit */unsigned int) var_5);
}
