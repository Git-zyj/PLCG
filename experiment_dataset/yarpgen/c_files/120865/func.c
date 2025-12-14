/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120865
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
    var_10 ^= ((/* implicit */int) ((((var_8) >> (((((1396342394U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) - (21288U))))) * (((unsigned long long int) ((((/* implicit */_Bool) 310196465U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (133514843U))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) var_3)));
        var_11 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) <= (min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max(((unsigned short)23021), (((/* implicit */unsigned short) (_Bool)0)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (-(var_8)));
                    var_13 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) min(((unsigned short)50520), (var_0)))) << (((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max(((unsigned short)42518), (((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned short) arr_3 [i_0])), (var_7)))))));
                                var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)23021))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_2])) >> (((((/* implicit */int) var_3)) - (273)))));
                }
            } 
        } 
        var_16 -= ((/* implicit */unsigned short) ((signed char) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) arr_3 [i_0])))));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_1))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((short) var_0))), ((-(((/* implicit */int) (unsigned short)41702))))))) : (max((((unsigned int) (unsigned short)8533)), (((/* implicit */unsigned int) ((unsigned short) var_2)))))));
    var_18 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)48649)))) <= (((((/* implicit */_Bool) (unsigned short)9324)) ? (32256) : (2089416889)))))), (var_2)));
}
