/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100816
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((571790420756517492ULL), (571790420756517498ULL)))) ? (((((/* implicit */_Bool) 571790420756517492ULL)) ? (((/* implicit */unsigned long long int) var_7)) : ((+(17874953652953034138ULL))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (17874953652953034126ULL))))))))));
    var_14 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((571790420756517498ULL), (571790420756517513ULL)))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 - 1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((arr_3 [i_0 - 1] [i_1]), (arr_3 [i_0 - 1] [i_1])))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [11ULL] [i_1] [11ULL] [10] [i_4] [15LL] = ((/* implicit */unsigned int) (~((((+(17874953652953034117ULL))) & (571790420756517471ULL)))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [(unsigned short)16] [i_4] [i_4] = (-(((((/* implicit */_Bool) max((arr_11 [4ULL] [i_0] [i_1] [i_0] [17] [4LL] [i_4]), (17874953652953034131ULL)))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_3])), (571790420756517489ULL))) : (((/* implicit */unsigned long long int) ((int) 571790420756517513ULL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))) & (571790420756517512ULL)))) ? (((unsigned long long int) 571790420756517485ULL)) : ((+(arr_5 [i_5] [i_5] [i_5])))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_5])))) != (max((arr_6 [i_5] [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5] [i_5])))));
        var_18 = ((/* implicit */long long int) 571790420756517520ULL);
    }
}
