/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111095
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
    var_19 = ((/* implicit */long long int) ((signed char) ((max((3805279130982509376LL), (var_10))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (var_10))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((((/* implicit */long long int) arr_0 [i_0] [i_0])) % (arr_1 [i_0]))) : (((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((arr_0 [i_0] [i_1 - 1]) - (1631844756U)))))));
                var_21 = ((/* implicit */long long int) var_9);
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) >= (min((var_10), (8056423899521609560LL))))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_7)) : (15345724261343325166ULL)));
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_24 = var_16;
        var_25 = (short)1652;
        var_26 |= min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) : (3101019812366226476ULL))))), (arr_5 [i_2] [i_2]));
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) var_11);
        arr_9 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) 3101019812366226457ULL));
    }
}
