/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155365
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
    var_11 += ((/* implicit */unsigned short) (~(((/* implicit */int) max((((((/* implicit */unsigned long long int) var_0)) >= (var_6))), (((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58618))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)51447))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = (+(((/* implicit */int) arr_0 [i_0 + 1])));
            var_13 -= ((/* implicit */signed char) arr_6 [4]);
        }
        var_14 = ((/* implicit */unsigned long long int) var_5);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_2 [(signed char)8]))));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_10), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) && (((/* implicit */_Bool) var_4)))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3])) / (((var_10) / (((/* implicit */int) (unsigned char)6))))))) ? (((((((/* implicit */int) arr_13 [i_2] [i_3] [i_3])) * (((/* implicit */int) var_3)))) / (var_0))) : ((-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 4; i_4 < 17; i_4 += 1) 
                {
                    for (short i_5 = 4; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43253))))) ? (var_7) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (arr_14 [i_5 - 3] [i_5] [i_5 - 3] [i_5]))))));
                            var_20 -= ((/* implicit */_Bool) arr_12 [17ULL]);
                            var_21 ^= ((/* implicit */int) max((17178002970971799278ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned long long int) var_8))))) | (((((unsigned long long int) (short)31931)) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51447)))))));
}
