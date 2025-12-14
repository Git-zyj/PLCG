/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128846
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
    var_10 = ((/* implicit */_Bool) var_8);
    var_11 = (+((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))));
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_1 - 2]));
            var_14 = var_2;
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 *= ((/* implicit */signed char) (-(arr_0 [i_0 - 1] [i_0])));
            arr_10 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) ^ (arr_0 [i_0 + 1] [i_0 - 2])));
        }
        for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_16 = (!(((/* implicit */_Bool) var_0)));
            arr_15 [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_7 [i_0] [i_3] [i_0 - 3]));
            var_17 = ((/* implicit */signed char) ((long long int) arr_6 [i_0 - 2]));
            arr_16 [i_0] [9LL] = ((/* implicit */short) var_8);
        }
        for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-104)))))));
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_4 - 2] [i_0])) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-1)))))));
            var_19 = ((/* implicit */unsigned long long int) var_8);
        }
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0])) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-48))))));
                        arr_29 [i_5] [i_5] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_32 [i_8] = ((/* implicit */int) max((((unsigned int) (signed char)-1)), (((/* implicit */unsigned int) arr_30 [i_8]))));
        arr_33 [i_8] [i_8] = ((/* implicit */short) (((~(arr_31 [i_8]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_30 [i_8]), (arr_30 [21LL])))))));
    }
}
