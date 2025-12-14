/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142872
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
    var_12 = ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) -328718776)) : (5896577114724052810LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)28294))))))))) ? (((((/* implicit */int) (signed char)73)) & ((+(var_0))))) : (((/* implicit */int) var_9)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((var_0) | (((/* implicit */int) (short)22086))));
                                var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & ((+(arr_2 [i_0] [i_1]))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((arr_9 [i_0] [i_1]) >= (arr_9 [i_2] [i_0])));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned char) ((signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) : (var_10))));
                    var_17 = var_6;
                }
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) ((_Bool) 1042236565495212662LL))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (8426678062217909822ULL))))))));
}
