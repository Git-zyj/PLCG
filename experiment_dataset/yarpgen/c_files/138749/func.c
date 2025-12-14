/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138749
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
    var_13 = ((/* implicit */signed char) min(((-(((((/* implicit */int) (short)20289)) & (((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20290))) < (4294967295U))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (_Bool)0)), ((~(480888572724940105LL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_12 [i_3] [(short)3] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((-8792960388553508320LL), (((/* implicit */long long int) 4294967283U))));
                        arr_13 [i_3] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) & (arr_5 [i_0 - 2] [i_1] [i_1])))))));
                        arr_14 [i_0 - 2] [(short)0] [i_1] [i_1] [i_0 - 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_4 [i_0 - 2]), (arr_4 [i_3 + 3])))) / (((((/* implicit */int) arr_4 [i_0 + 1])) & (((/* implicit */int) arr_4 [i_3 + 1]))))));
                        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((7509718940924457043ULL) != (((/* implicit */unsigned long long int) var_9))))) << (((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12592))))) - (1599536675741102006ULL))))) == (var_9)));
                        var_15 = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */int) 14401196550254230838ULL);
    var_17 = ((/* implicit */unsigned int) (-(((var_2) ? (((((/* implicit */int) var_4)) >> (((var_12) - (1599536675741102020ULL))))) : (var_9)))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) || ((!(((/* implicit */_Bool) (short)837))))))))))));
}
