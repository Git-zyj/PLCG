/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179671
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_4] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]);
                                var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) & (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) != (1553995188U)))) / (((/* implicit */int) min((var_5), (var_6)))))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((long long int) (signed char)6)) : (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_0] [i_4] [i_2]), (((/* implicit */unsigned short) var_12)))))))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [(unsigned char)6] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1553995188U)))) < (max(((+(((/* implicit */int) (signed char)16)))), (((((/* implicit */_Bool) 98297961693909206ULL)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))));
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */int) (+(arr_3 [i_0] [i_1])));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (signed char)-48))))) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((long long int) var_4)))))));
    var_18 = ((/* implicit */long long int) min((var_6), (var_6)));
}
