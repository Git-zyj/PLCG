/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156801
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
    var_17 = (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (4433678723037498381ULL))))));
    var_18 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (((((/* implicit */_Bool) 10285272276317361596ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (268435455ULL))))));
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
    var_20 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551614ULL))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                            {
                                var_22 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)4))))) : (18446744073709551608ULL));
                                var_23 *= ((/* implicit */signed char) (+(arr_1 [i_0 - 2])));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                            {
                                arr_16 [i_0 + 2] [i_0 + 3] [i_2] [i_2] [i_0 + 3] = ((/* implicit */signed char) (-(arr_9 [i_0] [i_0 + 1] [i_0 - 2])));
                                arr_17 [i_0] [i_0 + 3] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_7);
                            }
                            for (signed char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                            {
                                arr_20 [i_6] [i_2] = (+(12347621286974241636ULL));
                                var_24 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) 4577380298348360432ULL)) ? (18446744073709551615ULL) : (10152055619371007279ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((1084253362154401113ULL) - (1084253362154401100ULL)))))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_12 [i_0 + 1] [i_2])))), (((/* implicit */int) ((signed char) (signed char)-1))))))));
                            }
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) 2198989701120ULL)));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), ((+(((var_13) << (((((/* implicit */int) arr_2 [i_0])) - (97)))))))));
                            arr_22 [i_1] [i_2] [i_0 - 2] [i_2] = 0ULL;
                        }
                    } 
                } 
            }
        } 
    } 
}
