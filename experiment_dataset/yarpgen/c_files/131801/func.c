/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131801
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
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57857)) && (((/* implicit */_Bool) arr_0 [(signed char)4]))))), (var_7))))))));
        var_16 *= min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) != (((/* implicit */int) (unsigned char)2))))), (((((/* implicit */_Bool) 1994882534U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11630))) : (6198828037320351569ULL))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (int i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_5 [i_1]))));
                arr_6 [(unsigned char)10] [i_1] [i_1] = ((/* implicit */int) ((max((min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_2 [i_2 - 3]))), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [20ULL]))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_1])), (arr_3 [i_1] [i_1])))) ? (arr_3 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_0)))))))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_2 + 1] [i_2 + 1]), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) -1835783131)) : (1446776401U)))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_2 + 1])), (-2062733840)))))))));
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-21583))));
                var_20 = ((/* implicit */signed char) max(((unsigned char)254), ((unsigned char)2)));
            }
        } 
    } 
}
