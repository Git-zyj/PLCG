/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123005
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
    var_10 = ((/* implicit */short) var_9);
    var_11 = ((/* implicit */signed char) 362773475U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) var_9);
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) 3012917638U)) / (4409032133425551372ULL)))))) != (((((/* implicit */_Bool) 2057646606)) ? (var_4) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])))))))));
                arr_6 [(unsigned short)7] = max((((var_7) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)21053)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (max((((/* implicit */unsigned int) arr_8 [i_2] [2ULL] [2ULL] [2ULL])), (arr_5 [15LL] [i_1]))))))));
                            var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (15486863922029665320ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_0] [i_3])), (4294967265U)))) : (max((var_1), (((/* implicit */unsigned long long int) -1))))))) ? (((unsigned long long int) 0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0)) + (var_1)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 0)) ? (arr_4 [12U] [i_1]) : (((/* implicit */int) arr_2 [i_2] [1ULL])))))))));
                            var_15 = ((/* implicit */unsigned int) ((signed char) (~((~(((/* implicit */int) (unsigned short)35591)))))));
                            var_16 = ((/* implicit */unsigned short) arr_5 [i_1] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) -823667711))))) || (((/* implicit */_Bool) var_9)))))) ^ (var_1));
}
