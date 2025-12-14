/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166214
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (signed char)-33);
                var_17 |= ((/* implicit */_Bool) min((((arr_5 [8]) + (arr_5 [(_Bool)1]))), (((arr_5 [12ULL]) << (((((/* implicit */int) var_6)) - (1550)))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 2])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_13))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), ((((~(var_10))) | (var_0)))));
    var_19 = ((/* implicit */int) var_4);
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            var_20 |= ((unsigned short) (signed char)-33);
            var_21 *= (~(((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) 2769811952U)) : (var_14))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_1 [i_2]))));
        }
        var_23 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1627432536U)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        arr_15 [i_4] = ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) : (4294967295U)))) : (17827771231930330700ULL));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_4])) || (((/* implicit */_Bool) arr_9 [12ULL]))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4] [8U] [8U])) ? (((long long int) (signed char)30)) : (((/* implicit */long long int) arr_0 [i_4]))));
        arr_16 [i_4] [i_4] &= (-(18446744073709551589ULL));
    }
    var_26 = 18446744073709551611ULL;
}
