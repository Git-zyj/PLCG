/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115046
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
    var_20 = ((/* implicit */signed char) (~(min((max((((/* implicit */long long int) var_16)), (var_7))), (((/* implicit */long long int) ((unsigned char) 1994864779)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(short)3] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_2 [i_0] [i_0])) % (((((/* implicit */unsigned int) var_8)) ^ (arr_1 [i_0])))))) : (max((((/* implicit */long long int) ((_Bool) arr_0 [i_0] [i_0]))), (var_7)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_21 += ((unsigned int) arr_5 [(short)7]);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_8 [i_1] [i_2])) / (max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [(signed char)9] [i_1] [i_2] [i_2])))));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) 864704029)) == (2259873539U)))) % (((/* implicit */int) (short)12742))))) <= (min((((/* implicit */long long int) (short)12740)), (-1LL)))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-12740)), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32116)) >= (((/* implicit */int) (signed char)6)))))) + (((arr_5 [i_0]) ? (arr_10 [i_0] [i_0] [i_0]) : (66060288U)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) var_14);
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [(signed char)4])) ? (((((/* implicit */_Bool) (short)19136)) ? (((/* implicit */int) (short)-19147)) : (((/* implicit */int) (short)19151)))) : (((/* implicit */int) ((short) var_14)))));
        var_25 = ((/* implicit */short) min((var_25), ((short)12751)));
        arr_15 [i_3 + 3] [i_3 + 3] = ((/* implicit */long long int) arr_12 [i_3] [4LL]);
    }
    var_26 = ((/* implicit */_Bool) 17179869152LL);
    var_27 = ((/* implicit */short) ((((/* implicit */int) (short)15872)) >= (((/* implicit */int) (signed char)125))));
}
