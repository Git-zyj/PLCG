/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155031
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
    var_11 |= ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_2])) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) (signed char)-57))))))) ? (((int) ((((/* implicit */long long int) var_6)) + (var_7)))) : (((/* implicit */int) (unsigned char)211))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3]))))) ? (((long long int) arr_1 [i_1])) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ ((~(-5485339847963520836LL))))) : (((((/* implicit */_Bool) var_4)) ? (((long long int) arr_8 [i_0] [i_0] [i_0] [(short)20])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : (var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_2))));
}
