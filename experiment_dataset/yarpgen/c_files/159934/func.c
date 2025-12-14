/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159934
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) 3201745781035680996ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (arr_15 [i_0] [(unsigned short)9] [i_2]))))) : (arr_8 [i_0] [i_0 + 2] [i_0 + 2]))) << ((((-(min((((/* implicit */long long int) arr_15 [i_0] [(unsigned short)4] [i_0])), (-9007936047494772354LL))))) - (9007936047494772337LL)))));
                            var_16 = ((/* implicit */_Bool) min((arr_9 [i_0] [(signed char)9] [i_0]), (((/* implicit */unsigned long long int) arr_3 [8LL]))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 - 1] [i_1])) ? (((/* implicit */unsigned long long int) 1573383865812275842LL)) : (arr_8 [i_3] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 + 1] [i_2 + 2] [i_2] [i_3])) ? (max((((/* implicit */long long int) var_9)), (1035178839791603314LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 3] [i_1] [i_2 - 1])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1] [i_2 + 1]))))) ? (arr_14 [(unsigned short)2] [i_1]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_3))))))));
                        }
                    } 
                } 
                var_18 = min(((~(arr_12 [i_0 + 1] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 3]))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))), (max((arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_1] [i_0 + 1]), (arr_12 [i_1] [i_1] [i_1] [i_0] [(signed char)11]))))));
                arr_16 [i_0 - 2] [i_0 - 1] [2LL] = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) 9007936047494772349LL)))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_8 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0]), (((/* implicit */unsigned char) (signed char)-82)))))))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))));
                arr_17 [i_0] [i_1] &= ((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_0] [i_0] [i_0 - 1]);
            }
        } 
    } 
    var_19 |= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) : (min((min((8883841015186458637LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))));
    var_20 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
}
