/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150524
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
    var_20 &= ((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)15)) * (0))) - ((~(((/* implicit */int) var_10)))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)10996), (((/* implicit */unsigned short) (_Bool)0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned int) -1793744460819001085LL);
        var_22 = ((/* implicit */signed char) ((arr_0 [i_0]) | (3511039231U)));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            var_23 = ((/* implicit */long long int) (((-(arr_3 [2ULL] [i_1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_24 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_3] [i_3]))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (arr_0 [i_1]))));
                var_25 = ((/* implicit */unsigned char) ((-550295319) <= (-1918669636)));
            }
            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8389)) ? (arr_3 [i_1] [(_Bool)0]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4] [i_1] [i_1])) >> (((((/* implicit */int) (unsigned short)27339)) - (27315)))))) : (arr_3 [i_2 - 3] [i_2 - 2])));
                var_27 = arr_5 [(_Bool)1] [i_2] [i_4];
                var_28 = ((/* implicit */unsigned int) arr_7 [i_4]);
                var_29 &= ((/* implicit */unsigned short) arr_4 [i_1]);
                arr_15 [i_1 - 1] [i_2] [i_2] [i_2 + 2] = ((/* implicit */unsigned int) ((arr_8 [i_1] [i_2] [i_2]) - ((~(((/* implicit */int) (_Bool)0))))));
            }
        }
        for (int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            arr_18 [i_1] [i_1] [i_5 + 3] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) * (arr_0 [i_1])))) > (((arr_3 [i_1 - 1] [i_5]) | (arr_3 [i_1 + 1] [i_1])))));
            var_30 = ((/* implicit */unsigned char) arr_3 [i_1 + 1] [i_5]);
            var_31 = ((/* implicit */signed char) (+(arr_1 [i_5 - 2])));
            var_32 = ((/* implicit */int) arr_1 [i_1 - 1]);
        }
        var_33 = ((/* implicit */_Bool) (-((-(arr_0 [i_1])))));
        var_34 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_1]);
    }
    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)51234), (min((((/* implicit */unsigned short) (signed char)-9)), (arr_11 [i_6] [i_6] [i_6]))))))) > ((+(-5173300145186048227LL)))));
        arr_22 [i_6] = ((/* implicit */signed char) max((((/* implicit */int) ((arr_3 [3] [i_6]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_6]) == (arr_16 [i_6] [i_6] [i_6])))))))), (max(((-(((/* implicit */int) (short)-28795)))), (((/* implicit */int) arr_12 [i_6]))))));
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_20 [i_6] [i_6])))))))));
    }
}
