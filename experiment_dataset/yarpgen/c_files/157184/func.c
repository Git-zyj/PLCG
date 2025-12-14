/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157184
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
    var_11 = ((/* implicit */short) (-(60U)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [i_3] &= ((/* implicit */short) arr_0 [i_2] [i_1]);
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (signed char)123);
                        var_12 = ((/* implicit */int) min((var_12), (arr_1 [i_3])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */short) ((((((/* implicit */int) arr_15 [i_4] [i_2] [i_2] [1] [i_1])) >= (((/* implicit */int) var_10)))) ? (arr_16 [i_4] [i_1] [i_0] [i_2 + 2] [4ULL] [i_4]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))));
                        var_14 += ((/* implicit */_Bool) ((((/* implicit */int) (short)23294)) / (((/* implicit */int) (signed char)31))));
                    }
                    arr_17 [i_0] [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_1] [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_21 [11] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */int) var_8);
                        var_15 = ((/* implicit */_Bool) ((short) arr_6 [10] [i_2 + 2]));
                        var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2 + 2] [i_2] [i_2] [i_0])) || (((/* implicit */_Bool) arr_15 [i_0] [i_2 + 2] [i_2] [i_5] [i_2 + 2]))));
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44335)) <= (((/* implicit */int) (unsigned short)4095))));
                    }
                    arr_22 [i_1] = ((/* implicit */unsigned int) ((((arr_10 [i_2 + 1] [i_1] [i_2] [12ULL]) <= (arr_9 [i_1] [i_2 + 1] [i_2] [i_2]))) ? (((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4075))))) | (arr_16 [i_2] [i_1] [i_2 + 2] [i_2] [i_2 + 1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-126273879) == (-973344682)))))));
                }
            } 
        } 
    } 
}
