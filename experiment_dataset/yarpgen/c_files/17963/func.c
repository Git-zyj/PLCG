/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17963
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_7 [2ULL] &= ((/* implicit */unsigned int) (short)(-32767 - 1));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) (short)0);
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 807052381U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28))) : (6974689089252095481ULL));
    var_18 = ((/* implicit */_Bool) -4788284847177676473LL);
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        arr_11 [i_2] = (+(((((((/* implicit */int) arr_6 [i_2 + 3])) == (((/* implicit */int) arr_3 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) : (max((arr_1 [i_2] [i_2]), (6974689089252095481ULL))))));
        arr_12 [6ULL] = ((/* implicit */_Bool) arr_3 [14ULL]);
    }
}
