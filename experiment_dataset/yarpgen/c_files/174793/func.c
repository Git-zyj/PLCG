/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174793
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-28)) != (((/* implicit */int) var_0)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (short)-28)) != (((/* implicit */int) var_2)))))))), ((((!(((/* implicit */_Bool) (signed char)-64)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    var_13 = ((/* implicit */short) (+((-(((/* implicit */int) var_10))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) (-(((unsigned long long int) arr_1 [i_0 - 2] [i_0 + 2]))));
        arr_4 [i_0] [7ULL] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-45))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) (-(((/* implicit */int) (short)28)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_1])))) : (((unsigned int) min((((/* implicit */short) arr_6 [(_Bool)1])), ((short)28)))));
        arr_7 [i_1] = ((/* implicit */long long int) max((arr_6 [(short)20]), ((!((_Bool)1)))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */int) (short)-11);
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_4] [3U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1])))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_6 [i_3]))));
                        arr_20 [i_2 - 1] [(short)1] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_11 [i_2] [i_4] [3]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_12 [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_4] [(_Bool)1])) : (((/* implicit */int) (short)127)))))) : ((+(((/* implicit */int) (short)-128))))));
                        var_17 = ((/* implicit */unsigned long long int) -1LL);
                    }
                } 
            } 
        } 
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */long long int) ((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1]) ? (((/* implicit */int) arr_9 [14LL] [4ULL])) : (((/* implicit */int) (signed char)42))))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (-10LL)))));
    }
}
