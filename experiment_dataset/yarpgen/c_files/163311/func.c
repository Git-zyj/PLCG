/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163311
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_1 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_1] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_4 - 3] [i_3] [i_3] [i_3] [i_0]))));
                                arr_13 [i_3] [i_3] [3LL] [i_3] [i_4] = ((/* implicit */signed char) (~(((long long int) var_18))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_3 [i_2 - 2] [i_2] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 + 1] [(short)8] [i_1] [i_2]))))));
                                var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (arr_21 [i_2 - 2] [i_1] [(short)9] [(unsigned char)2] [i_5 - 1] [i_0 + 3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_5 + 1] [i_0 + 4] [i_2 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        for (short i_8 = 4; i_8 < 8; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    arr_32 [i_8] [i_7] [i_8] = (i_8 % 2 == zero) ? (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_8 - 2])) >> (((((12792881263850524999ULL) << (((((/* implicit */int) arr_29 [i_8])) - (52514))))) - (8481156756540489723ULL))))))) : (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_8 - 2])) >> (((((((12792881263850524999ULL) << (((((((/* implicit */int) arr_29 [i_8])) - (52514))) + (8112))))) - (8481156756540489723ULL))) - (17163555306689527789ULL)))))));
                    arr_33 [i_8] [i_8] [i_8] = arr_10 [i_9] [i_8] [i_8] [i_8] [i_7];
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) <= (((((/* implicit */_Bool) -2922685561313537416LL)) ? (319062279525017135ULL) : (var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [(unsigned char)2] [i_7]))) : (((long long int) arr_30 [i_9] [i_8 + 2] [(unsigned short)3] [i_8]))));
                    arr_34 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_9] [i_7] [i_9]))))) ? ((+(((unsigned long long int) arr_23 [i_8 + 2] [i_9])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_28 [i_9] [i_7] [i_9])) > (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))))));
                    arr_35 [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    } 
}
