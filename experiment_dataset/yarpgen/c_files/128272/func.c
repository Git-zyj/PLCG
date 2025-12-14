/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128272
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) 9179436897236269179ULL))));
                            arr_9 [i_0] [i_1] [i_2 - 3] [i_2 - 3] = ((/* implicit */int) var_6);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                            {
                                var_21 &= ((/* implicit */unsigned int) (!(((_Bool) var_6))));
                                arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((-1715286662) & (((/* implicit */int) (_Bool)0))));
                                var_22 &= ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]);
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] [i_3 + 2]))));
                                var_24 = ((long long int) arr_5 [i_3 - 1] [i_3 - 1] [i_4] [i_4 + 2]);
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3 + 2] [i_0] [i_3] = ((/* implicit */short) arr_4 [i_3] [i_5]);
                                var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_17)))) : (arr_6 [i_5])));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (int i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_26 &= ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((-132528832) | (var_17)))))));
                            var_27 = ((/* implicit */short) var_3);
                            var_28 = max((((/* implicit */long long int) arr_20 [i_7] [i_6])), (((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */long long int) 726107683)) & (arr_5 [i_0 - 2] [i_1] [i_6] [7LL]))))));
                            var_29 = ((/* implicit */int) (_Bool)1);
                            var_30 = ((/* implicit */int) min((var_30), (min((((/* implicit */int) var_11)), ((-(-132528832)))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]))) != (18446744073709551615ULL))))) : (((((/* implicit */_Bool) 536870908U)) ? (min((((/* implicit */unsigned int) var_2)), (var_1))) : (var_9)))));
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_4))));
    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_13))));
    var_34 &= ((/* implicit */int) max((((/* implicit */long long int) (short)2882)), (0LL)));
    var_35 &= min((((/* implicit */unsigned long long int) max((((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (short)7095))))), (((((/* implicit */_Bool) -455238420)) ? (((/* implicit */unsigned int) var_15)) : (var_1)))))), (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) var_17)) : (17005387153427441378ULL))))));
}
