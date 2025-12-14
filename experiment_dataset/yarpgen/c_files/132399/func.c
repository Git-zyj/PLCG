/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132399
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_3)) << ((((-(((((/* implicit */_Bool) (short)2048)) ? (10689668331163791478ULL) : (10482461628830312645ULL))))) - (7757075742545760128ULL)))));
    var_14 += ((/* implicit */unsigned short) 658317121U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(short)12] [i_2 - 1])) ? (arr_5 [i_1] [i_1] [i_1] [i_0]) : (1447383579U)))) * (((9443384097080771077ULL) - (((/* implicit */unsigned long long int) 4120251551U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (+(174715721U)));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_0] [0U] [8U] [i_4])))) ? (((/* implicit */long long int) ((1447383579U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)2048)))))) : (7225945058342431952LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) 7855715958888242738LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2847583716U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))));
        arr_14 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)645))) : ((-9223372036854775807LL - 1LL))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) 5065115054816677157LL);
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2070))) + (1447383555U)));
    }
}
