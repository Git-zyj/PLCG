/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114402
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
    var_14 = var_6;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (~(65535U))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(max((6800624521081961316LL), (-5466655777602383826LL)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        for (long long int i_2 = 2; i_2 < 7; i_2 += 4) 
        {
            {
                arr_9 [i_1 - 2] = ((/* implicit */long long int) min((min((min((arr_7 [i_2] [1U]), (var_8))), (((3889978646001197179ULL) & (((/* implicit */unsigned long long int) -2865083977021284676LL)))))), ((~((~(14556765427708354416ULL)))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 2; i_3 < 7; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (-7673073914698576202LL)));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((long long int) 3889978646001197199ULL)))));
                                var_17 = var_0;
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((8978461168310520306LL), (((/* implicit */long long int) 126123087U))))) ? ((~(arr_13 [i_1 + 2] [i_1] [i_1 - 1] [i_1] [i_1]))) : (((unsigned long long int) 7673073914698576202LL))));
                arr_17 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned int) (~(((((6322704737380667635ULL) ^ (var_12))) | (min((var_5), (18446744073709551599ULL)))))));
}
