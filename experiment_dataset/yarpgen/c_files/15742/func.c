/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15742
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
    var_18 *= ((/* implicit */_Bool) ((signed char) var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-16658)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23950))) : (0U)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7U))))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((0U) / (4294967285U)))))) ? (min((((((/* implicit */_Bool) 4127403194773030590LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [8ULL] [i_1] [i_1 - 1]))) : (var_11))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4127403194773030590LL)) ? (1973029631) : (((((/* implicit */int) (unsigned short)34993)) ^ (-1973029625)))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [2U] [i_2])) % (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15920))))) : (min((min((((/* implicit */unsigned long long int) (signed char)0)), (2305843009213693888ULL))), (((/* implicit */unsigned long long int) arr_7 [21LL] [i_2]))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_6)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))));
    }
    var_22 = ((/* implicit */unsigned short) var_15);
    var_23 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (~(var_6))))))));
}
