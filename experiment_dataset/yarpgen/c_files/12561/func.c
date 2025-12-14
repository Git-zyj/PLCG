/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12561
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) + (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
        var_20 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_17) - (((/* implicit */unsigned int) 2147483647))))), (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_1] [0]))) : (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_4]))))))), (var_2)));
                        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47145))))) ? (((/* implicit */long long int) min((-80956713), (((/* implicit */int) (_Bool)1))))) : (max((min((((/* implicit */long long int) (_Bool)1)), (arr_2 [i_1] [i_2]))), (((((/* implicit */long long int) ((/* implicit */int) var_15))) - (arr_2 [i_1] [i_2])))))));
                        arr_14 [i_1] [i_2] [i_3] [i_1] [i_4] = (((!(((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_9))))))) ? (-80956710) : (((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
        } 
        var_23 &= arr_5 [i_1] [i_1];
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_15 [i_5])) ? ((((_Bool)1) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) 1325786202U)), (6309813664949111802LL)))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (-990518508)));
    }
    var_25 &= ((/* implicit */unsigned int) var_0);
    var_26 = ((/* implicit */int) var_4);
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_3))));
}
