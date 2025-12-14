/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149958
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) + (var_1)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((-766382292) / (((/* implicit */int) var_11)))))) & (-766382292)));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
        arr_6 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 766382291)) ? (max((4822225883898087143LL), (((/* implicit */long long int) -246893799)))) : (((/* implicit */long long int) (-(766382291))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_13 [i_2] = ((((((/* implicit */_Bool) (~(-4822225883898087144LL)))) && (((/* implicit */_Bool) (-(arr_8 [i_0] [i_2])))))) ? (((unsigned long long int) arr_0 [i_0])) : (((((((/* implicit */_Bool) (short)-23588)) ? (8654066892428674701ULL) : (((/* implicit */unsigned long long int) -766382292)))) | (((/* implicit */unsigned long long int) ((long long int) (short)32767))))));
                    arr_14 [14LL] [i_1] &= ((/* implicit */long long int) var_1);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        arr_18 [i_2] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_15 [i_0 + 1] [i_3] [i_3 + 1] [i_3])), ((+(4822225883898087143LL)))));
                        arr_19 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_3))) % ((~(-246893806)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_22 [i_0 + 1] [i_2] [i_0] [i_0] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (12041461180354338361ULL) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_1] [i_2] [i_0 + 1]))))) ? (max((((/* implicit */unsigned int) min((arr_10 [i_4] [i_1] [i_0]), (arr_1 [i_1])))), ((-(var_14))))) : (((/* implicit */unsigned int) max((-1678753527), (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1]))))));
                        arr_23 [i_0 - 1] [i_2] [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) var_7)) ? (4523223768392915061LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) arr_15 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_2]))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_27 [i_0 - 1] [i_1] [i_2] [(signed char)4] = ((/* implicit */signed char) 8654066892428674701ULL);
                        arr_28 [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_8 [i_5] [i_0 + 1])))));
                    }
                    arr_29 [i_0] [i_0 - 1] [i_0 - 1] [10ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767))));
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (arr_8 [i_0 + 1] [i_0 - 1])));
    }
    for (long long int i_6 = 3; i_6 < 23; i_6 += 2) 
    {
        arr_33 [i_6 - 1] [i_6] = ((/* implicit */_Bool) ((long long int) min((arr_31 [i_6 - 2]), (arr_31 [i_6 - 3]))));
        arr_34 [i_6] [i_6 - 2] = ((/* implicit */long long int) (~(var_14)));
    }
    var_21 = var_1;
}
