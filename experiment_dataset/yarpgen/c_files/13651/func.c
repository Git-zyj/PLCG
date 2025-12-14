/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13651
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
    var_17 ^= ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) 18446744073709551597ULL);
                var_19 = ((/* implicit */unsigned long long int) min((var_19), ((((!(((/* implicit */_Bool) 22ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_0] [i_1] [i_0])))))))) : (((((/* implicit */_Bool) ((unsigned int) (unsigned char)69))) ? (((((/* implicit */_Bool) arr_5 [8ULL] [i_0] [9ULL])) ? (arr_1 [i_0] [i_0]) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)208)) < (((/* implicit */int) (unsigned char)155))))))))))));
            }
        } 
    } 
    var_20 = var_5;
    var_21 = ((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3)))))));
}
