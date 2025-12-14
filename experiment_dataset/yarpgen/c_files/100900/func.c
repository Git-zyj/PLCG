/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100900
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
    var_11 += ((/* implicit */unsigned char) ((_Bool) var_6));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) * (((/* implicit */int) arr_4 [16ULL] [16ULL] [i_1]))))));
                var_13 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_8) != (-150839923)))), ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2 + 2] [i_2 - 1] [i_3])) || (((/* implicit */_Bool) -150839923)))))) : (arr_9 [i_0] [i_2 + 1] [(_Bool)1] [i_2 + 3] [(signed char)8] [i_3])));
                            arr_11 [i_0] [i_1] [i_2 + 3] [(_Bool)1] [i_3] [0LL] = ((/* implicit */_Bool) arr_0 [i_2 + 3]);
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) (-(4233167906U)));
                var_16 = ((/* implicit */unsigned long long int) ((4233167906U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41687)))));
            }
        } 
    } 
    var_17 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18014398501093376ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)99))))) : (var_2)))), (var_0));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)5670)) ? (5169201822327484635ULL) : (((/* implicit */unsigned long long int) -150839936))));
}
