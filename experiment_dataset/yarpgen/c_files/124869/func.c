/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124869
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
    var_18 = ((/* implicit */int) (~(((((/* implicit */long long int) ((var_8) ? (983101175U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) | (max((-5032552168611752963LL), (((/* implicit */long long int) (signed char)127))))))));
    var_19 = ((/* implicit */short) var_17);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) (short)124)))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((_Bool) max((arr_1 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1421698443487250768LL)) ? (3727800966U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))))))))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) ((short) arr_2 [i_0] [i_1] [i_3 + 1])))))));
                            var_23 = ((/* implicit */unsigned long long int) (-(5032552168611752941LL)));
                            var_24 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)73))))) ? (((/* implicit */unsigned long long int) (+(1263143123)))) : (min((arr_1 [6U]), (var_16))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (~((~(max((var_16), (((/* implicit */unsigned long long int) var_13))))))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1283082041)), (var_16)))) ? (arr_3 [i_0 - 2] [i_1 - 2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1263143123)))) & (((((/* implicit */_Bool) -5032552168611752963LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0])))))));
                arr_8 [i_0 + 1] [(short)8] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0 - 2] [i_0] [i_0])) ? (arr_4 [i_1 - 2] [i_0 - 2] [i_0 - 2] [i_0]) : (arr_4 [i_1 - 2] [i_0 - 2] [i_0] [i_0]))) << (((/* implicit */int) min((max((((/* implicit */unsigned short) var_9)), (arr_5 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4354160364065786576ULL))))))))));
            }
        } 
    } 
}
