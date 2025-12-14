/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136104
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
    var_11 = ((/* implicit */signed char) ((((long long int) max((var_1), (var_1)))) | (max((max((var_4), ((-9223372036854775807LL - 1LL)))), (var_4)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-113))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0 - 1]);
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) (signed char)25)))), (((((((/* implicit */_Bool) -6LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) < (((/* implicit */long long int) (+(4129485725U)))))))))));
        var_14 = ((/* implicit */long long int) ((int) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [5LL]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min(((~(((long long int) -8224530907141843710LL)))), (((/* implicit */long long int) var_6)))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) min((((((-37308032649321718LL) + (829951703985835531LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))), (max((((((/* implicit */_Bool) arr_5 [i_1] [10])) ? (((/* implicit */long long int) arr_7 [i_1])) : (var_4))), (((long long int) arr_6 [i_1] [7LL]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_1] [i_2]), (arr_6 [i_1] [i_2])))) ? (((/* implicit */long long int) (-(2147483631)))) : (((long long int) arr_6 [i_1] [i_2]))));
            var_17 = ((/* implicit */long long int) max((var_17), (var_5)));
        }
    }
    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_18 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (7LL)))) ? (((/* implicit */long long int) var_7)) : ((+(var_10))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_3] [8LL])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) (signed char)77)))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_7))))))));
        arr_15 [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [i_3]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3] [i_3]))))) : (max((((/* implicit */long long int) ((unsigned int) 9223372036854775807LL))), (((((/* implicit */_Bool) 121584694221155592LL)) ? (var_0) : (var_5))))));
        /* LoopNest 3 */
        for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_22 [i_3] [12LL] [i_5] [i_5] [5LL] = ((/* implicit */unsigned int) ((signed char) var_8));
                        var_19 += ((var_9) / (arr_12 [i_5]));
                        arr_23 [i_3] [i_4] [i_4] [2LL] [i_5] [i_5] = ((/* implicit */unsigned int) 995318587493874955LL);
                    }
                } 
            } 
        } 
        var_20 = -8224530907141843685LL;
        arr_24 [i_3] [i_3] = ((/* implicit */long long int) (~(1162877359U)));
    }
}
