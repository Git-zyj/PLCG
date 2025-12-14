/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140640
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 *= ((/* implicit */unsigned long long int) var_10);
                var_16 = min(((-(((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (arr_3 [i_1]))))), (((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_3 [i_0])))));
                var_17 = ((/* implicit */_Bool) (-(min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_1 + 4] [i_1 + 4]))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_8))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 2])))));
                var_19 = ((/* implicit */_Bool) (unsigned short)0);
            }
        } 
    } 
    var_20 = ((((/* implicit */unsigned long long int) 615448946U)) == (13175437743457479980ULL));
    var_21 = var_12;
    var_22 = ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8749017740742447324ULL))))) : (((/* implicit */int) ((unsigned short) var_5)))))));
    var_23 = ((/* implicit */unsigned long long int) ((signed char) 8322352676920146431ULL));
}
