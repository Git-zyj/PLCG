/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167928
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_3 [i_0] [8ULL]) >= (((/* implicit */unsigned long long int) arr_7 [i_0]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) -4621751568125739774LL)))))));
                    var_11 = ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0] [5LL] [i_0]))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((arr_0 [i_0]) / (((/* implicit */int) (unsigned short)20757))))));
                    var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20762)) == (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) (short)0))))));
                }
                var_13 = ((/* implicit */unsigned char) ((unsigned long long int) 0LL));
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4338))) / (arr_9 [i_3 + 1] [i_3 + 1] [i_3])))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_3 + 1])), (arr_9 [i_3 - 2] [i_3 - 1] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)20757))))))))));
                            var_15 |= ((/* implicit */unsigned long long int) (unsigned short)20757);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57289)) ? (((/* implicit */unsigned long long int) ((var_2) ^ (-4621751568125739761LL)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61212))) : (var_6))))));
}
