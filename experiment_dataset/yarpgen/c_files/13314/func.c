/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13314
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (unsigned char)246))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (2489265532U)))) + (min((-3235201665057804669LL), (((/* implicit */long long int) arr_1 [i_0]))))));
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(16550528105511777223ULL)))))) ? (((/* implicit */unsigned int) (-(var_0)))) : ((((-(1805701771U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-29572))) ^ (3235201665057804690LL)))) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 1805701784U)) ? (((/* implicit */unsigned long long int) 5874906261329658544LL)) : (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) != (((/* implicit */int) (short)-29572)))))))) * (((/* implicit */unsigned long long int) ((arr_2 [i_0]) << (((arr_2 [i_0]) - (3998174889211498331LL))))))));
        var_19 = arr_3 [3U] [4ULL];
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */long long int) 2489265523U)), (-3235201665057804678LL)))))));
        var_21 *= ((/* implicit */unsigned char) ((4294967288U) * (1907344872U)));
        var_22 = ((/* implicit */_Bool) ((unsigned char) (signed char)-126));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) ((unsigned char) (unsigned char)163)))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_11 [10LL] [3LL] |= ((/* implicit */unsigned char) ((7U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 6178563154476418972LL)) > (arr_6 [i_2] [i_2])))))));
        var_23 = ((/* implicit */short) min((var_23), (((short) ((_Bool) 5ULL)))));
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 6178563154476418979LL))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_18 [i_2] [4U] [0LL] |= ((/* implicit */unsigned int) ((unsigned char) arr_17 [(unsigned char)1] [i_3] [i_4] [i_4]));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_25 [i_2] [i_2] [i_3] [0ULL] [0U] [i_5] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) arr_1 [i_4]))));
                                var_24 = ((/* implicit */short) 11764271U);
                                var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [(unsigned short)9] [i_3] [i_4] [10U])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
