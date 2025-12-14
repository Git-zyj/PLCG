/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148290
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
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(517259811536779941LL))), (min((((/* implicit */long long int) (short)13707)), (517259811536779943LL)))))) || ((!(((/* implicit */_Bool) var_3))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_3 [7] = ((/* implicit */unsigned short) ((_Bool) arr_2 [12]));
        var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) max(((unsigned char)116), (((/* implicit */unsigned char) var_9))))) : (arr_0 [i_0 - 1] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24544)) || (((/* implicit */_Bool) 517259811536779960LL)))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3118))))) ? (((((/* implicit */_Bool) var_9)) ? (max((var_3), (5464631072733552970ULL))) : (((/* implicit */unsigned long long int) 1278512202930703364LL)))) : (((/* implicit */unsigned long long int) var_11))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 = (+(arr_2 [i_1]));
        var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) var_13))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2 + 2])) * (((/* implicit */int) (unsigned short)38741))));
        var_20 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_9)))) + (2147483647))) << (((var_1) - (478130204)))));
    }
    var_21 = ((/* implicit */unsigned short) var_1);
    var_22 = ((/* implicit */int) max((var_12), (((/* implicit */long long int) var_1))));
    var_23 = ((/* implicit */int) var_13);
}
