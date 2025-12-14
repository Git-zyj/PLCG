/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181185
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) 852718503U))) | (((((/* implicit */unsigned long long int) var_12)) / (var_2)))));
    var_15 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_13 [i_3] [i_1] [(short)8] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1095534966574412103ULL)) ? ((-(1095534966574412103ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1])))))) || (((/* implicit */_Bool) var_13))));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_8 [i_1 + 1] [i_0 - 1]))) != (((((/* implicit */int) arr_3 [i_0 - 1])) - (((/* implicit */int) arr_3 [i_0 - 1]))))));
                        }
                        arr_14 [i_0 + 1] [i_0 + 2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 2] [i_1 - 1])))))) && (((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                        var_18 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (17351209107135139513ULL))))) ? (((/* implicit */unsigned long long int) min((max((arr_2 [5LL]), (((/* implicit */unsigned int) arr_10 [i_0 + 1] [(unsigned char)4] [i_0 + 1] [i_0 + 1])))), (var_5)))) : (var_2));
                        arr_19 [i_0] [8] [8] [i_2] [i_0] [i_0] = ((/* implicit */int) ((_Bool) ((2251799813619712LL) - (((/* implicit */long long int) var_4)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            var_19 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)));
                            var_20 = (~(-1LL));
                            var_21 = ((/* implicit */int) var_2);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_25 [i_0 - 1] [i_1] [i_2] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_6 [i_0 - 1] [i_1 + 1] [i_5 + 1]) <= (arr_6 [i_0 - 1] [i_1 + 1] [i_5 - 1])))) / (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_4 [i_5 + 2]))))));
                            arr_26 [i_0] = ((/* implicit */unsigned int) ((arr_22 [i_0] [i_0] [i_2] [i_0] [i_7]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6)))))));
                        }
                    }
                    for (unsigned int i_8 = 1; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) var_13);
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 20727073))));
                            var_24 = ((((arr_6 [i_0 - 1] [i_1 + 1] [i_8 + 1]) / (arr_6 [i_0 - 1] [i_1 - 1] [i_8 + 1]))) / (((arr_6 [i_0 + 2] [i_1 - 1] [i_8 - 1]) / (((/* implicit */long long int) var_5)))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_1 - 1] [i_8 + 2] [i_10])))));
                            var_26 = arr_4 [i_0];
                            var_27 = ((/* implicit */signed char) arr_29 [i_8 + 2] [i_8] [i_8] [i_8] [i_8 - 1] [i_8]);
                        }
                    }
                    var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) != ((~((-(var_5)))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) ((((arr_8 [i_0 - 1] [i_1 - 1]) || (((/* implicit */_Bool) (unsigned short)65531)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_0 + 1] [i_1 - 1]) && (arr_8 [i_0 + 1] [i_1 - 1])))))));
                                var_30 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (~(var_2))))))) - (((/* implicit */int) var_13))));
                                arr_39 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                                var_31 += ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
