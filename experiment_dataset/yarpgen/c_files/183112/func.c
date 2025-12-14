/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183112
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            var_19 &= (+(((/* implicit */int) min(((signed char)-14), ((signed char)(-127 - 1))))));
            var_20 *= var_5;
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((arr_1 [i_0]) < (((/* implicit */int) var_16))))), (min((arr_2 [i_0] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_3)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) min((var_11), (968914544605985891LL)))))))))))));
                        var_22 = ((/* implicit */unsigned int) (signed char)-14);
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -2930809934495546683LL)) || (((/* implicit */_Bool) (-2147483647 - 1))))) ? (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_3] [i_3] [i_3] [22])), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_3] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_4])))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2]))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_13)) > (0LL)))) : ((-(((/* implicit */int) (signed char)0))))))), (var_1)));
        }
        arr_12 [i_0] = ((/* implicit */long long int) max((((unsigned int) -2126567366)), (((/* implicit */unsigned int) ((7693350222062212105ULL) < (((/* implicit */unsigned long long int) 968914544605985891LL)))))));
    }
    var_25 = ((/* implicit */int) var_15);
}
