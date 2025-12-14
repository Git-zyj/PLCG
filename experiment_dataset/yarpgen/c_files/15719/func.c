/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15719
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
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_15 *= ((/* implicit */short) min((arr_5 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)-16114))));
                            arr_11 [(signed char)14] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min(((short)16104), (((/* implicit */short) arr_8 [i_2] [i_3]))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 9470374025641944955ULL)) ? (((((/* implicit */int) (unsigned short)54934)) >> (((((/* implicit */int) (short)-5027)) + (5039))))) : (((/* implicit */int) (_Bool)1)))))));
                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61684)) ? (16799218683230157195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_0 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)82)))))))) ? (((/* implicit */int) (signed char)-9)) : (((int) arr_9 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32572))) % (5948715728789410093LL)));
}
