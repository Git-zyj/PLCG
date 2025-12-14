/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110806
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
    var_16 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) -3188794791976280503LL)) ? (((/* implicit */long long int) arr_0 [i_0])) : (-3188794791976280503LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_2 [i_0] [i_0] |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_0)) ? (-3188794791976280503LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        var_18 = ((/* implicit */unsigned short) ((arr_0 [i_0]) >> (((arr_0 [i_0]) - (876058998)))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((3188794791976280503LL) % (-3188794791976280524LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((-3188794791976280486LL) != (arr_3 [i_1 + 3] [i_1 - 1]))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_1 + 3] [i_1 + 3]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */int) (unsigned short)65535)) : (-1599889477))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)-5610)) : (((/* implicit */int) (unsigned short)0))))) ? (max((var_1), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 5428865513616087686ULL))))))))) : (((((/* implicit */_Bool) -1LL)) ? (3188794791976280486LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        arr_6 [i_1] = ((/* implicit */int) (signed char)-44);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2867172011U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (short)-4385))))))))) : (((((11475158249866990995ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44)))))));
    }
    for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2 + 1] = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        arr_10 [(short)5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 3]))) - (((/* implicit */int) var_2))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3202170126U)) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [2]))))) : (((/* implicit */int) ((1427795285U) < (arr_18 [(signed char)11] [i_4] [i_5]))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3188794791976280505LL)))))) * (-1082263168510661083LL)));
                            arr_21 [i_6] = ((unsigned int) arr_13 [i_2 - 3] [i_2 + 1]);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned int) ((arr_3 [i_2 - 2] [i_2 - 2]) - (((/* implicit */long long int) ((/* implicit */int) (!(arr_4 [12])))))));
            arr_22 [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-1821490633534574960LL)));
        }
    }
}
