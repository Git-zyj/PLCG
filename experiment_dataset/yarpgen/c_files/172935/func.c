/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172935
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
    var_13 = max((max((((/* implicit */unsigned long long int) var_12)), (((10832324140427329565ULL) + (((/* implicit */unsigned long long int) 1355045504183055262LL)))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) & (max((var_0), (((/* implicit */unsigned long long int) var_4)))))));
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) 34359738360ULL)) ? (13412873699206998303ULL) : (((/* implicit */unsigned long long int) var_9)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))));
    var_15 = ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
    var_16 = ((min((max((13412873699206998298ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_6)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_11))) == (((unsigned long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [6ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [12LL] [12LL])))))) : (max((arr_4 [i_0] [i_1 + 2] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]))))))))))));
                var_18 = ((/* implicit */long long int) (+(15968803588945159864ULL)));
            }
        } 
    } 
}
