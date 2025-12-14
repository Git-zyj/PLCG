/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18444
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
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(max((((/* implicit */int) var_3)), (9)))))), (((((/* implicit */_Bool) max((-4843391028868537901LL), (((/* implicit */long long int) (-2147483647 - 1)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15068))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1699764368781630011LL))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((int) var_7));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_19 -= ((/* implicit */long long int) ((int) (-(((/* implicit */int) (unsigned short)50479)))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_1))));
                        arr_11 [23ULL] [22LL] [i_2] [(signed char)6] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-3595270271320478697LL) : (-1699764368781630012LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) var_4))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4843391028868537886LL)) ? (1417425724106783048LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15082)))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_16))))));
                            arr_14 [i_4] [i_3] [13ULL] [i_2] [i_2] [16ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) (signed char)44)))) : ((~(((/* implicit */int) var_16))))));
                            arr_15 [i_0] [(short)20] [(short)20] [i_3] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) var_15))))));
                            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                    }
                    var_23 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])))));
                }
            }
        } 
    } 
}
