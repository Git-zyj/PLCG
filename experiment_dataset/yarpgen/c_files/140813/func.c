/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140813
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
    var_10 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)-100), ((signed char)-100)))) ? (var_6) : ((-(((/* implicit */int) (signed char)100))))))) - (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)106))) + (var_9))), (((/* implicit */long long int) (short)-18466))))));
    var_11 &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) <= (((((/* implicit */_Bool) 9223372036854775799LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) >= (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1))))))));
    var_12 = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)80)))) >> (((max((((/* implicit */int) (signed char)99)), (max((((/* implicit */int) var_3)), (2147483631))))) - (2147483611)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) max((((/* implicit */int) (short)0)), (arr_2 [i_1] [i_1]))))) ? ((+(((arr_2 [i_1] [i_1 - 1]) << (((((((/* implicit */int) (signed char)-100)) + (130))) - (30))))))) : (((/* implicit */int) (short)11532))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_9 [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -967470151)) ? ((+(((/* implicit */int) (signed char)18)))) : ((-(((/* implicit */int) (_Bool)1))))))) / (((unsigned long long int) ((15ULL) * (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))))));
                            var_14 *= ((/* implicit */long long int) ((int) ((unsigned int) -1LL)));
                            arr_10 [i_1] = ((/* implicit */unsigned char) (~(4294967295U)));
                            arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 3] [(signed char)15] [i_1 + 2] [i_2] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
