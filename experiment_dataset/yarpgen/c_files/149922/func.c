/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149922
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [2] |= ((/* implicit */short) ((((/* implicit */_Bool) -1276801697082364551LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */int) arr_2 [i_0] [i_1])))))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (var_4)))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((unsigned char) var_4));
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551610ULL)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_18) : (((/* implicit */long long int) var_0))))) ? (7537756253798996270LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))));
    var_22 = ((/* implicit */int) var_7);
}
