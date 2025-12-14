/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161638
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1])) + (17194)))))) ? (((/* implicit */int) ((signed char) var_5))) : ((((!((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5599))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [6LL] [i_2] [i_0] = max((4932294195917012269LL), ((((_Bool)1) ? (22LL) : (((/* implicit */long long int) -235782822)))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1] [i_2] [i_4 + 1])) : (((/* implicit */int) (unsigned char)102))))) ? (-3152851014711991410LL) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8316570967510022496LL)))))) || (((/* implicit */_Bool) ((arr_8 [10]) & (((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_4])) : (((/* implicit */int) (short)7)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] = ((861700240442187890ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned char)31)) & (((/* implicit */int) arr_15 [(short)13] [i_1]))))))));
                }
                var_16 = ((/* implicit */long long int) min((-235782822), (((max((((/* implicit */int) (_Bool)1)), (-17))) + (((/* implicit */int) arr_5 [(_Bool)1]))))));
                arr_18 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1527171535U))) ? (((/* implicit */unsigned int) (-(-1788789725)))) : (((((/* implicit */_Bool) -1442638004)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (2505849014U)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_5);
}
