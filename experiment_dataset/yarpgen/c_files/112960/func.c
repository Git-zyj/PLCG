/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112960
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
    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (((unsigned int) 9223372036854775807LL))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = (+(var_10));
        var_17 = ((/* implicit */unsigned int) ((((var_7) - (var_5))) + (((/* implicit */long long int) (+(var_0))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                        arr_9 [i_1] [i_2] = ((var_10) ^ (((/* implicit */long long int) var_13)));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) == (1119528719U))))) : (min((var_11), (((/* implicit */long long int) var_1))))))) ? (((/* implicit */int) ((((var_7) | (var_7))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))))))))) : (((/* implicit */int) (!(((var_5) <= (var_10)))))))))));
                        arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_14 [i_4] = (+((~(arr_13 [i_4]))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
        {
            var_20 = (((!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_13)))))) ? (var_5) : (((((((/* implicit */_Bool) 9223372036854775802LL)) && (((/* implicit */_Bool) var_12)))) ? (min((var_5), (-9223372036854775787LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
            arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) arr_16 [i_5] [i_5] [i_5]);
            arr_18 [i_5] [i_5] = ((/* implicit */long long int) (+(var_14)));
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) <= (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4]))) : (arr_15 [i_6] [i_6] [i_4])))));
            arr_21 [i_4] = ((/* implicit */unsigned int) ((long long int) -9223372036854775793LL));
            arr_22 [i_4] = ((/* implicit */long long int) ((-9223372036854775787LL) < ((-9223372036854775807LL - 1LL))));
        }
    }
    var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775807LL))) : (((9223372036854775807LL) << (((var_0) - (3304277295U))))))), (((/* implicit */long long int) var_6))));
}
