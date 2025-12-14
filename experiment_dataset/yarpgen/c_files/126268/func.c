/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126268
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_18 ^= (-(1207382188U));
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                var_19 -= max((((unsigned int) (signed char)-112)), (max((arr_7 [6LL] [i_3 - 2] [i_3 - 2] [i_4]), (arr_7 [i_2] [i_3 + 1] [i_4] [i_4]))));
                                var_20 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 11645194848602278080ULL)) ? (((/* implicit */long long int) 0U)) : (arr_6 [i_3 - 3] [18U] [18U] [i_0 - 3])))));
                                var_21 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])));
                                var_22 = ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_1])) ? (arr_2 [i_0] [i_1 + 1] [i_1]) : (arr_2 [i_0] [i_1 - 3] [12U])));
                            }
                            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) 
                            {
                                var_23 = max((((/* implicit */unsigned int) (signed char)102)), (27U));
                                var_24 = ((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3]);
                                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-120))));
                            }
                            for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                            {
                                arr_18 [i_0] [i_6] [i_6] [i_0] [i_6] |= ((/* implicit */long long int) arr_8 [19LL] [19LL] [i_2] [i_3] [i_6] [i_6]);
                                var_26 |= (signed char)96;
                            }
                            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                            {
                                var_27 ^= ((/* implicit */long long int) (-(((unsigned int) (signed char)118))));
                                arr_22 [i_0] [i_1] [i_1 + 2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((4294967270U) > (((unsigned int) (signed char)-120))));
                                var_28 = ((/* implicit */unsigned int) max(((+(arr_14 [i_1] [10LL] [i_1 + 1] [i_0] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
                                var_29 ^= ((/* implicit */signed char) 9223372036854775792LL);
                            }
                            var_30 -= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)110))))));
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((9223372036854775792LL), (9223372036854775807LL))))));
                        }
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)10)))))) + (2147483647))) >> (((var_1) - (2745095025U)))));
            }
        } 
    } 
    var_32 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) (signed char)110))))) ? ((+(2028982907119441321ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (926775589U))))))));
}
