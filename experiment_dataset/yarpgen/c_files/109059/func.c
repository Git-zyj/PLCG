/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109059
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
    var_18 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (+(var_11)))), (min((((/* implicit */unsigned long long int) (unsigned char)0)), (9830029588301103000ULL))))) >> (((/* implicit */int) ((min((var_9), (((/* implicit */long long int) var_5)))) > (((/* implicit */long long int) ((((/* implicit */int) (signed char)18)) >> (((((/* implicit */int) var_16)) - (19218)))))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) var_13)), (var_15))))) ? (max(((~(var_9))), (((/* implicit */long long int) ((var_14) ^ (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4))))))))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_2 - 1] [i_3] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (var_14) : (((/* implicit */int) ((short) ((1405677157) << (((/* implicit */int) (unsigned char)0))))))));
                            arr_11 [i_1] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */long long int) (-(max((var_8), (((/* implicit */unsigned int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)0)))))))));
                            var_22 ^= ((/* implicit */short) var_17);
                            arr_19 [(signed char)4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_8 [i_4] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 3]);
                        }
                    } 
                } 
            }
        } 
    } 
}
