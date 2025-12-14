/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116690
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
    var_10 = ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
        var_11 = ((/* implicit */int) min(((signed char)127), ((signed char)-127)));
    }
    /* LoopSeq 4 */
    for (short i_1 = 4; i_1 < 12; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))));
        arr_5 [(short)6] [i_1] = ((/* implicit */unsigned long long int) var_3);
        arr_6 [i_1] &= ((/* implicit */unsigned int) max(((~(var_4))), (((/* implicit */long long int) arr_0 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max(((short)32767), (((/* implicit */short) (signed char)-127)))))));
        var_13 = (+(((/* implicit */int) (short)32767)));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) arr_8 [i_2] [(unsigned char)1]);
        var_14 = ((/* implicit */unsigned long long int) min(((~(max((var_9), (var_5))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)62))) <= (541265056U))))));
        arr_13 [i_2] [i_2] = ((/* implicit */short) 7819579018096139658LL);
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_15 = ((((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 740716458))))) | (((var_5) << (((var_7) - (6168289893644788185LL))))))) : (((/* implicit */int) (short)-13961)));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((arr_14 [i_3]) ? (var_1) : (((/* implicit */int) arr_14 [i_3])))) & (((((/* implicit */int) (signed char)-127)) ^ (((/* implicit */int) arr_14 [i_3])))))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((arr_1 [i_4]) + (2147483647))) << (((((/* implicit */int) (signed char)127)) - (127))))) <= (((((/* implicit */_Bool) 1262433148)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (short)-32753))))));
        var_17 = ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) arr_9 [i_4])))) : (((/* implicit */int) arr_8 [i_4] [i_4])));
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 7; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    arr_23 [i_6] [i_5] [i_4] = ((/* implicit */short) (-(arr_17 [i_5 - 1] [i_5 + 3])));
                    arr_24 [i_6] [(short)5] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_4]))));
                    arr_25 [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_5 + 1] [i_5 + 3]) : (arr_3 [i_5 + 1] [i_5 + 3])));
                }
            } 
        } 
        arr_26 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [0ULL] [0ULL] [i_4]))) <= (((18225850211079249172ULL) | (((/* implicit */unsigned long long int) 2113512575))))));
    }
}
