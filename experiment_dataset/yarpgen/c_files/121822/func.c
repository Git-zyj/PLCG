/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121822
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
    var_18 |= ((/* implicit */long long int) 3974895018U);
    var_19 = ((/* implicit */signed char) 1128054438U);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 853950076U)) ? (28U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19793))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (~(-5182627290718931872LL)));
                                arr_13 [i_1] [i_1] [i_4] = ((/* implicit */long long int) 2817102289U);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) 26U);
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((543827615U), (var_6)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) & ((~(-3927957596118372849LL))))) : (var_10)));
                                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 408884707)) ? (1713881244) : (((/* implicit */int) var_15)))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((long long int) (((!(((/* implicit */_Bool) var_17)))) ? (408884707) : (((/* implicit */int) (short)-7725)))))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                    arr_23 [i_1] [i_1] [i_5] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((30U), (4294967267U)))) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1920823378)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 3; i_8 < 19; i_8 += 2) 
    {
        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            {
                var_27 = 408884707;
                var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4294967269U), (16U)))) ? (((/* implicit */unsigned long long int) min((4294967267U), (((unsigned int) (-9223372036854775807LL - 1LL)))))) : (max((17476547363863574276ULL), (((/* implicit */unsigned long long int) 29U))))));
                var_29 = ((/* implicit */unsigned char) (((_Bool)1) ? (min((((((/* implicit */unsigned long long int) 4294967269U)) * (17476547363863574276ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (signed char)107)) : (354095481)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                var_30 *= ((/* implicit */signed char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (53U)))))), ((!(((/* implicit */_Bool) (short)32767))))));
                arr_28 [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) (+((+(((unsigned long long int) 7474128426553710800ULL))))));
            }
        } 
    } 
}
