/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154927
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
    var_13 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (2868472921042435146ULL) : (((/* implicit */unsigned long long int) arr_2 [i_2 - 2]))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) (+(((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                            var_17 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (+(arr_9 [i_5] [i_1] [i_4] [i_1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((((/* implicit */int) arr_16 [i_0] [i_1] [i_4 - 1] [i_5])) + (2147483647))) << (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_4 - 1] [i_5])))))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))) : (3646025356U)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((arr_10 [i_4 - 1] [i_1 + 1] [i_1 + 1] [i_1]), (var_2)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? ((-(((/* implicit */int) (short)32763)))) : (((/* implicit */int) (unsigned char)143)))) : (((/* implicit */int) ((_Bool) var_6)))));
                var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_0] [i_0]))))) ? ((-(3812188890U))) : (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))))));
                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_1] [i_1 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) min((var_2), (var_8))))))) ? ((~(min((-3961602035750759568LL), (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)136)) << (((((/* implicit */int) var_12)) << (((3812188890U) - (3812188883U))))))))));
            }
        } 
    } 
    var_22 ^= min((((/* implicit */unsigned char) var_0)), (var_7));
}
