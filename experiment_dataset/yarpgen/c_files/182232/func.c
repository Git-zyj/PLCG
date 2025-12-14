/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182232
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
    var_18 &= ((/* implicit */long long int) max((((/* implicit */int) max((((((/* implicit */int) (unsigned char)83)) != (((/* implicit */int) (unsigned short)511)))), (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_3))))))), ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)24185))))))));
    var_19 &= ((/* implicit */unsigned long long int) 9223372036854775807LL);
    var_20 = ((/* implicit */long long int) (((-(var_3))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) ((signed char) ((max((((/* implicit */long long int) (short)32767)), (9223372036854775807LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24157))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4 - 1] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(min((arr_13 [i_0 + 1] [i_1 - 1]), (((/* implicit */int) (_Bool)1))))));
                                var_22 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((18275089133873883720ULL) >> (((18275089133873883727ULL) - (18275089133873883702ULL)))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0 + 2])) : (max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_3])), (171654939835667906ULL))))), (((unsigned long long int) (_Bool)0))));
                                var_23 += ((((((/* implicit */_Bool) (unsigned char)87)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_16))))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [0ULL] [i_2])));
                            }
                        } 
                    } 
                } 
                arr_16 [(_Bool)0] [i_1 + 2] [(signed char)6] |= ((/* implicit */signed char) (+(((/* implicit */int) (!(var_9))))));
            }
        } 
    } 
    var_24 += min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_17)))) ? (max((var_3), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))), ((-(var_3))));
}
