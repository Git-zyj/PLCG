/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135205
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 838093621U))));
                var_13 += arr_4 [i_1];
                arr_6 [i_1] = ((/* implicit */int) ((long long int) var_6));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 + 1] = ((/* implicit */int) max((max((((/* implicit */unsigned int) var_8)), (arr_2 [i_1 - 3]))), ((+(arr_2 [i_1 - 2])))));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
                            {
                                var_14 ^= ((/* implicit */unsigned int) arr_16 [i_4] [i_3] [i_3] [i_3] [i_4] [i_3] [i_0]);
                                arr_18 [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1767035072)))) ? (4323455642275676160LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4] [i_1] [i_4 + 3] [i_4 + 2] [i_4 - 2] [i_4 - 1])) & (((/* implicit */int) arr_13 [i_4] [i_1] [i_4 + 3] [i_4 + 2] [i_4 - 2] [i_4 + 2])))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                            {
                                var_15 &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 2147483645)) && (((/* implicit */_Bool) 4261257829U))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (arr_2 [i_5]))))))));
                            }
                            var_17 = ((/* implicit */int) -3001266161563973722LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) || (((((/* implicit */_Bool) -3001266161563973746LL)) || (((((/* implicit */_Bool) 7983193241253470776LL)) && (((/* implicit */_Bool) (unsigned char)66))))))));
}
