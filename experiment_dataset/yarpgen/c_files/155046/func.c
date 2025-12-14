/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155046
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
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) 0ULL);
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    arr_10 [i_2] [i_0] [i_2 + 3] [i_0] = var_14;
                    arr_11 [i_1] [i_0] [i_1] [i_2 + 1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_2 + 2])), (((((/* implicit */_Bool) 1904062786U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)25727))))))) ? (((unsigned long long int) ((arr_0 [i_0]) ? (arr_2 [i_1]) : (((/* implicit */long long int) var_9))))) : (((/* implicit */unsigned long long int) ((long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2390904510U))))))));
                    arr_12 [i_0] [i_1] [i_2 + 1] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 5039332470091839609ULL)))) ? (min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) 3657344830U)) ? (9223372036854775807LL) : (((/* implicit */long long int) 655726355U)))))) : (((/* implicit */long long int) (~((+(((/* implicit */int) var_1)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_15 [i_3 - 1] [i_0] [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-24964)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (655726369U)))));
                        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (unsigned short)39808)))) ? (((((/* implicit */_Bool) 4294967285U)) ? (((-946546105430949041LL) ^ (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112)))));
                        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [18U]), (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)60)) << (((((/* implicit */int) (short)28951)) - (28948)))))) : (min((var_9), (((/* implicit */unsigned int) (signed char)-84))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 18446744073709551596ULL)))) && (((/* implicit */_Bool) (~(-1082617338))))))) : (((/* implicit */int) var_3))));
                        arr_17 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33549)) && (((/* implicit */_Bool) 19ULL)))))))), (((unsigned long long int) 7884497584014670859LL))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [12U] [i_4 - 1] &= ((/* implicit */long long int) var_7);
                        var_18 = ((/* implicit */unsigned int) arr_9 [i_0]);
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_1] [i_1] [5ULL] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (signed char)25)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) -3LL)) : (0ULL)))))));
                            arr_29 [i_1] [i_0] [i_6 - 2] = (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)94))))) && (((/* implicit */_Bool) ((unsigned int) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_5);
}
