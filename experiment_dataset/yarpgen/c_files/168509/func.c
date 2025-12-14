/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168509
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
    var_13 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((1451168240221322865LL), (((/* implicit */long long int) (signed char)-11))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_8 [i_3] [i_1] [i_3 + 1] [i_3] [19LL] [i_2]))))));
                        var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (signed char)-11)), (-177974403804676974LL))), ((-(var_4)))));
                        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((var_1), (177974403804676985LL)))), (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_0] [i_3 + 1])), (var_11)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (signed char i_5 = 4; i_5 < 22; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(9223372036854775807LL)))), ((~(min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551615ULL)))))));
                    var_17 &= (~((~(344723875282097005LL))));
                }
            } 
        } 
        var_18 -= ((/* implicit */signed char) max((13768754942149979134ULL), (((/* implicit */unsigned long long int) 5643459652317411306LL))));
        var_19 |= max((((/* implicit */unsigned long long int) (-(var_4)))), ((-(13768754942149979134ULL))));
        arr_19 [i_0] [i_0] = max((min((-1LL), (-177974403804676960LL))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-60))))));
    }
    for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
    {
        var_20 &= ((/* implicit */unsigned long long int) max((max((arr_8 [i_6] [i_6] [(signed char)7] [15LL] [i_6] [i_6 - 1]), (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6 + 2] [i_6]))), (max((var_6), (var_4)))));
        arr_23 [i_6] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_6 + 2] [i_6 + 2]))))), ((+(arr_8 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] [i_6]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), ((-(var_4)))));
            var_22 += ((/* implicit */signed char) (-(var_6)));
            var_23 = ((/* implicit */long long int) min((var_23), ((~(2154550401738330776LL)))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(3114518168630344734ULL))))));
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        }
    }
}
