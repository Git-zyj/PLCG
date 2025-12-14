/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119036
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((int) var_3)))) ? (((/* implicit */int) var_2)) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)130))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_6))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_9))));
                    arr_8 [i_1] = (~(((/* implicit */int) var_11)));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(3729218971366023720ULL))) : (3729218971366023720ULL)))) ? (((((/* implicit */int) arr_0 [i_0 + 2])) >> (((((unsigned long long int) arr_4 [i_0] [(unsigned char)3] [i_0 + 1])) - (930972781ULL))))) : ((-(((/* implicit */int) var_0)))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (12623))))))))));
                    var_18 -= ((/* implicit */unsigned char) ((((unsigned long long int) max((var_8), (((/* implicit */long long int) var_11))))) - ((((!(((/* implicit */_Bool) var_8)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((-(1276580025U))) * (min((arr_12 [i_0 + 1] [12U] [(short)10] [i_3 - 1]), (arr_12 [i_0 + 2] [10U] [0U] [i_0 + 2]))))))));
                    arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) max(((-(min((((/* implicit */unsigned int) var_3)), (var_1))))), (((/* implicit */unsigned int) arr_5 [i_3 + 2]))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        arr_18 [21U] [i_5] = var_8;
        var_20 &= (-(((/* implicit */int) var_0)));
        var_21 -= ((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) arr_17 [i_5 + 1])), (7408878043678563354LL))));
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
    }
}
