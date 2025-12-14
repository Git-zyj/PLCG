/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110560
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
        var_12 = ((/* implicit */unsigned long long int) (signed char)-97);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) var_7);
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1])) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_3 [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_4))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_1])) & ((-(max((var_9), (((/* implicit */long long int) var_7)))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((var_5) ? (((var_4) - (arr_0 [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29069)))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_3] = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 + 1] [i_2])) || (((/* implicit */_Bool) 536838144U))))), (((498395012U) << (((arr_14 [i_2 + 1] [i_2 + 1] [i_2]) + (3844232647699790042LL)))))))) : (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 + 1] [i_2])) || (((/* implicit */_Bool) 536838144U))))), (((498395012U) << (((((arr_14 [i_2 + 1] [i_2 + 1] [i_2]) - (3844232647699790042LL))) - (1798283230818674353LL))))))));
                        arr_19 [i_2 + 1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_2])) != (-594888105))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */long long int) 1458769076)) - (arr_15 [i_2] [i_2] [i_2] [i_4] [i_5])))))) % (max((max((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_8 [i_4]))))));
                    }
                } 
            } 
        } 
    }
    var_17 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) -329493756886330303LL)) : (var_4))) & (var_8)));
}
