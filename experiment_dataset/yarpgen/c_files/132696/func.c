/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132696
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
    var_15 = ((/* implicit */short) var_7);
    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)153)) && (((/* implicit */_Bool) (unsigned char)48))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_0)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
    var_17 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)757))) : (var_10)))) ? ((-(((/* implicit */int) arr_5 [i_2 + 1] [i_2] [(signed char)17])))) : (((/* implicit */int) var_11))));
                    var_19 = ((/* implicit */signed char) ((unsigned short) (signed char)-30));
                }
            } 
        } 
    } 
}
