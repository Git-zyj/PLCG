/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127222
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-20761)) : (((/* implicit */int) (unsigned short)31428))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21015))) > (var_6))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_10)))))));
                                var_14 *= ((/* implicit */short) ((max((var_5), (var_5))) != (((/* implicit */long long int) ((((/* implicit */int) (short)0)) / (((/* implicit */int) max(((short)-21015), (var_12)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */signed char) (unsigned short)9473);
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) (short)-21015)))))));
                    arr_14 [7ULL] [(signed char)5] [i_1 + 3] [10LL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)32744), ((short)-21008)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)21007)) : (((/* implicit */int) arr_10 [(signed char)2] [i_2] [i_2] [(unsigned char)1] [i_0])))))))), (arr_1 [i_1] [(signed char)4])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_6);
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)56062))))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (var_10))))), (((/* implicit */unsigned int) (signed char)-21))));
}
