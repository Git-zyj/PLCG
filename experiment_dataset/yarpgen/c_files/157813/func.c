/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157813
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_10 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(_Bool)1])))))));
                var_11 += ((/* implicit */unsigned long long int) ((max((arr_6 [i_0] [i_0] [i_1]), (arr_6 [i_1] [i_1] [i_1]))) ^ (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (arr_6 [i_1] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2903898351397252532LL)) ? (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((2132345586U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((_Bool) 2147483647)))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((+(var_3))) - ((+(((/* implicit */int) arr_10 [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_2 + 1])))))))));
                                arr_14 [i_4] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_2 - 1]))))) & (((unsigned int) arr_0 [i_0] [i_2 + 1]))));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_16 = ((_Bool) ((((/* implicit */unsigned long long int) (-(var_1)))) | ((-(5872109544953484204ULL)))));
    var_17 = ((/* implicit */unsigned int) 18446744073709551615ULL);
}
