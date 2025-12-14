/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124027
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
    var_11 = ((/* implicit */unsigned int) (((~(((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_6))))))) & (((/* implicit */int) var_5))));
    var_12 = 2495724854742120LL;
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (((((var_4) >= (var_1))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 9223372036854775791LL)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2495724854742130LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13843)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1999240133735456710LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 - 1] [i_1] [i_4 - 2]))) : (2339287709U)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))));
                                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (-2495724854742115LL) : (((/* implicit */long long int) var_0)))) | (min((-9223372036854775791LL), (((/* implicit */long long int) 2225926959U))))))) > (((arr_12 [i_0] [i_1] [i_2] [5ULL] [i_3 - 2] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((2495724854742135LL) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
                                var_16 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */int) (signed char)27)) % (((/* implicit */int) var_7)))) : ((+((+(((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) / (((unsigned long long int) arr_6 [i_0] [i_1] [i_1]))))));
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (max((((/* implicit */unsigned long long int) 2069040333U)), (9427531398289135720ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3109544848U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))))))) ? (((/* implicit */unsigned long long int) 3256536236U)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_10))))) : (arr_5 [i_2] [i_0] [i_0])))));
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1])) >> (((9223372036854775807LL) - (9223372036854775777LL)))))) ? (-2495724854742125LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) > (((/* implicit */long long int) max((((/* implicit */int) ((-9223372036854775792LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-32753)))))))));
                }
            } 
        } 
    } 
}
