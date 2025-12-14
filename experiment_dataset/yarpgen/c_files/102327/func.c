/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102327
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
    var_16 = ((/* implicit */unsigned int) var_4);
    var_17 |= ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 16268142370590044213ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 3]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 5765633333551421175LL);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (((((!((_Bool)1))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_6 [i_1] [(unsigned short)16])))))) >> ((((~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)-32406)) : (((/* implicit */int) (_Bool)1)))))) - (32385)))));
        arr_8 [i_1] [6U] = ((/* implicit */unsigned char) var_1);
    }
}
