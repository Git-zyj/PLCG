/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169909
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) ^ (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_17 ^= ((/* implicit */unsigned int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ ((-(((/* implicit */int) (signed char)127))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 1]), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1 - 3])) & (((/* implicit */int) (unsigned short)991))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) ((long long int) arr_5 [i_1 - 1] [4LL]))) ? (((/* implicit */int) max((arr_6 [i_0] [i_1 - 3] [i_2] [i_3]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_7 [i_0])))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)195)) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105)))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 2]))))) || (((/* implicit */_Bool) (+(arr_10 [i_0] [i_1] [i_1] [i_3] [i_0] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (-((((+(1423729305417609906ULL))) | (max((var_10), (((/* implicit */unsigned long long int) -9223372036854775806LL))))))));
}
