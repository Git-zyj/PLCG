/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148813
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
    var_11 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) (~(((unsigned long long int) arr_3 [i_3] [i_2 + 3] [i_2 - 1]))));
                        var_13 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_6 [i_2 - 2] [i_3] [i_2] [i_2])))) >= (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2 - 2] [11LL] [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2 - 2] [i_1] [i_2 - 2] [i_2]))))));
                        var_14 = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 2] [i_2 + 2])) != (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 3] [i_2 - 3])))));
                    }
                } 
            } 
            arr_9 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (var_0))))));
            var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0] [i_0] [i_0]))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_5 [i_1] [i_1] [i_0]) : (arr_5 [i_1] [i_1] [i_0])))));
            arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [6U]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [9] [i_1] [i_1])))))) % (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((unsigned long long int) var_6)) : (var_5)))));
            var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) var_2)))))) == (min((min((var_5), (18446744073709551609ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]))))));
        }
        arr_11 [i_0] = ((((/* implicit */_Bool) (-(((unsigned long long int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30858)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
}
