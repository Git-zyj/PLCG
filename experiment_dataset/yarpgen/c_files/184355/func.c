/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184355
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
    var_16 = ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [10ULL] [(signed char)2] [i_0] [i_1] = ((/* implicit */unsigned int) min((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) 805306368)))))));
                    var_17 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) ((((/* implicit */int) (short)11800)) == (var_11)))), (var_10)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((var_13) & (((/* implicit */int) arr_11 [i_3] [i_3]))))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_12 [i_3]))));
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_16 [7] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? ((-(((((/* implicit */_Bool) 259054759)) ? (((/* implicit */long long int) var_12)) : (1918823059556837557LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (short)-11800)) : (((/* implicit */int) ((1918823059556837557LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
        var_20 = ((/* implicit */int) var_2);
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17176)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_11 [i_4] [i_4])))))) : (((((/* implicit */_Bool) 1918823059556837559LL)) ? (((/* implicit */unsigned long long int) 259054749)) : (arr_13 [i_4])))));
    }
    /* LoopSeq 1 */
    for (short i_5 = 2; i_5 < 13; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) max((((/* implicit */int) (short)4276)), (-813460163))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5])) ? (arr_15 [i_5]) : (((/* implicit */int) var_8))))) == (arr_13 [i_5 - 2]))))));
        var_21 = ((/* implicit */_Bool) arr_14 [i_5 + 2]);
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 1073741823ULL))));
}
