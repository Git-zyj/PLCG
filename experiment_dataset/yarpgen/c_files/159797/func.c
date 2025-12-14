/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159797
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_0] [9LL])), (arr_1 [i_0])))) ? ((-(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-120))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [9LL])) : (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (_Bool)1))))));
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-64))))) + (17U)));
                arr_6 [i_0] [8LL] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (signed char)121))))) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((arr_3 [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) (signed char)115)))) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_0 [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_4);
    var_17 = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */_Bool) var_2);
}
