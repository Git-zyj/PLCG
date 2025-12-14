/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18697
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23066)) ? (1478416635) : (((/* implicit */int) (short)-592))))) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (8309695479692054223LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32256))))) : (((/* implicit */long long int) ((-1126669587) | (((/* implicit */int) (short)11853))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) -1126669608)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */short) 1088262306);
                                var_11 = ((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)32766)) >> (((5821933722969759486LL) - (5821933722969759455LL)))))))) != (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65520))))), (-1LL)))));
                                arr_13 [i_3] = ((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) (short)3684)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_8)))))));
                                var_12 = ((/* implicit */long long int) var_3);
                                var_13 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-20591))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */short) var_5);
    var_15 = ((/* implicit */_Bool) (short)3255);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 3LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)32769)))) : (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) 866650427)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (((/* implicit */short) (_Bool)1))))) % (((((/* implicit */int) (short)-23231)) - (((/* implicit */int) (short)-19287)))))))));
}
