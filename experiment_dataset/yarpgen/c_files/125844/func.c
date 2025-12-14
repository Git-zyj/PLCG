/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125844
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
    var_13 |= ((/* implicit */short) (((~(var_1))) <= (((max((var_12), (var_1))) + (((/* implicit */unsigned long long int) var_7))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((_Bool) 11865032990804424407ULL));
        arr_4 [i_0] = (!(((/* implicit */_Bool) (signed char)-67)));
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) arr_6 [0ULL]);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            {
                                arr_19 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 2] = arr_5 [i_3] [i_2];
                                var_16 = ((/* implicit */_Bool) (short)0);
                                var_17 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1])) ? (max((arr_13 [i_1] [i_2] [i_1]), (((/* implicit */int) var_8)))) : (max((1908337085), (((/* implicit */int) (short)2264))))))) ? ((+(((6581711082905127213ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [10]))))))) : (0ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_1] = max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)96)));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 563317170)) ? (arr_12 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) var_4))));
        var_18 = (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_22 [14ULL]) : (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6])))));
    }
}
