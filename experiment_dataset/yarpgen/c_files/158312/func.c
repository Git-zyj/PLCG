/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158312
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
    var_12 -= ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (short)32753))))));
    var_13 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) min((((/* implicit */short) ((157105563) == ((((_Bool)1) ? (((/* implicit */int) (short)-1)) : ((-2147483647 - 1))))))), (arr_0 [i_0])));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? ((-(((/* implicit */int) (short)0)))) : (((int) ((signed char) arr_1 [i_0 - 1])))));
        var_15 = ((/* implicit */unsigned char) max((arr_1 [i_0 - 1]), (((signed char) (_Bool)1))));
    }
    var_16 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)72)))))));
        var_18 = ((/* implicit */short) var_0);
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_5 [7LL] [i_1])) : ((~(((/* implicit */int) (signed char)-125))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_20 = var_3;
                    var_21 *= ((/* implicit */_Bool) arr_6 [15LL]);
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (int i_6 = 2; i_6 < 23; i_6 += 2) 
            {
                {
                    arr_16 [i_4] [(signed char)20] = ((int) ((((/* implicit */_Bool) (unsigned char)53)) ? (2747023223U) : (((/* implicit */unsigned int) 2147483647))));
                    arr_17 [i_4] [i_5] [i_6] [i_4] = ((((/* implicit */int) (signed char)-76)) / (((/* implicit */int) (_Bool)1)));
                    var_22 = arr_11 [(signed char)18];
                    var_23 = ((/* implicit */long long int) ((signed char) arr_12 [i_4] [(short)20] [i_6]));
                    arr_18 [i_4] = ((/* implicit */unsigned char) (short)-8172);
                }
            } 
        } 
        var_24 = ((((/* implicit */_Bool) (unsigned short)58619)) ? (-872358339) : (((/* implicit */int) (short)14950)));
    }
}
