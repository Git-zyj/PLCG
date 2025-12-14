/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156722
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 += ((/* implicit */_Bool) ((unsigned short) ((((_Bool) 4291383980U)) || (((/* implicit */_Bool) max((-2577642138384881926LL), (((/* implicit */long long int) var_11))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((signed char) 3583315U)));
        var_17 = ((/* implicit */unsigned long long int) 3583315U);
        var_18 = ((/* implicit */unsigned long long int) 4291383980U);
    }
    var_19 = ((/* implicit */unsigned long long int) ((short) ((3583316U) + (((((/* implicit */_Bool) 0ULL)) ? (3583315U) : (((/* implicit */unsigned int) -513870511)))))));
    var_20 = ((short) ((unsigned long long int) min((4291383981U), (((/* implicit */unsigned int) var_15)))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        for (short i_2 = 4; i_2 < 19; i_2 += 1) 
        {
            {
                var_21 &= ((/* implicit */long long int) ((((/* implicit */int) (short)-236)) & (((/* implicit */int) (short)-6982))));
                arr_8 [i_2] = ((/* implicit */unsigned char) (signed char)48);
                arr_9 [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 229064130)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 51041046U))))))))) && (((((((/* implicit */_Bool) (signed char)60)) && (((/* implicit */_Bool) 2285000772824576527ULL)))) && ((!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))));
                arr_10 [(short)6] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1]))) == (arr_6 [i_1] [i_1]))))) <= (max((((/* implicit */unsigned int) arr_4 [i_1] [i_2 - 1])), ((+(3583315U)))))));
            }
        } 
    } 
}
