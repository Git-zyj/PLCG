/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133098
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32762))) - (1433403967U)))))) ? (((/* implicit */int) max((var_0), ((_Bool)1)))) : ((+((+(((/* implicit */int) (_Bool)1))))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) (+(-25152011)))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), (max((1048575U), (1433403945U)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((arr_1 [i_0]) ? (7601808027310924929LL) : (((/* implicit */long long int) (-2147483647 - 1)))));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(-5220883659888259191LL)));
    }
    for (unsigned int i_1 = 4; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_5 [i_1 - 3]))))), (((var_9) ? (((/* implicit */long long int) 4293918718U)) : (-18LL))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_1 + 1])) >> ((((+(arr_6 [i_1 - 1]))) - (639751440U)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (short)11492))));
        var_25 |= ((/* implicit */_Bool) var_19);
    }
}
