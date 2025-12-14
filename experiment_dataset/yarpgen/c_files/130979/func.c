/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130979
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
    var_19 *= ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = 2408502979335852274ULL;
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_9 [i_0] [4] [4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16038241094373699344ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12929914846815840530ULL)));
                        var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) 17823785522000419180ULL))))));
                        arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) var_9);
                        var_22 = ((/* implicit */short) (+(max((16038241094373699342ULL), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_1]))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) 2733495291U);
                        arr_15 [i_1] [i_1] [i_4] = ((/* implicit */_Bool) var_6);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) (-(2408502979335852274ULL)));
                        arr_18 [i_5] [(short)1] = ((/* implicit */short) (!((_Bool)0)));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        var_26 ^= ((/* implicit */short) arr_19 [(unsigned short)7] [i_1] [i_2] [i_1] [i_6] [i_6 - 2]);
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_25 [i_8] [i_7] = ((/* implicit */unsigned long long int) 7409084360286752465LL);
                                arr_26 [i_7] [i_2] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_28 [i_9] [i_10]) / (arr_28 [i_10] [i_9])))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7481949243532713342LL)))))));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 1019864187)) : (-7481949243532713363LL)));
            }
        } 
    } 
}
