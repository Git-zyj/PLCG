/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158604
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
    var_17 = ((/* implicit */_Bool) var_10);
    var_18 -= ((/* implicit */short) max((min(((+(var_4))), (min((((/* implicit */unsigned int) var_0)), (var_4))))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_1 - 1] [i_4 - 1]) >> (((((/* implicit */int) var_5)) - (17930)))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_2] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) arr_13 [i_2] [i_4] [i_2] [i_3])), (arr_0 [i_0]))))))));
                                arr_17 [i_1] [i_3] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (signed char)-36)) ? (528103463184773476ULL) : (((/* implicit */unsigned long long int) -5777133311702839570LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))))) >> (((min((((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_2])), (arr_7 [i_4 - 1] [i_3]))) - (16686U)))));
                                var_19 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((var_20), (((signed char) (-((+(var_16))))))));
                var_21 *= ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (arr_12 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))));
            }
        } 
    } 
}
