/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115613
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
    var_19 = var_15;
    var_20 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_3))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 &= ((/* implicit */signed char) (!((((-2147483647 - 1)) >= (((var_15) & (((/* implicit */int) (signed char)127))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2])) > (((/* implicit */int) arr_5 [i_0]))));
                        var_22 += ((/* implicit */signed char) ((short) (signed char)5));
                    }
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)-127))))));
                    arr_14 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) var_3);
                    var_23 = ((/* implicit */unsigned char) ((int) var_17));
                    var_24 -= ((/* implicit */signed char) ((long long int) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-27705)) : (((/* implicit */int) (short)21075)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        arr_18 [i_4 + 2] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 2] [i_4] [i_4] [i_4 + 2]))));
        var_25 = ((/* implicit */_Bool) (+(arr_16 [i_4 + 1])));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_26 ^= ((/* implicit */signed char) (~(((/* implicit */int) (short)32761))));
        var_27 = ((/* implicit */unsigned int) arr_4 [i_5] [3LL] [i_5]);
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */int) (!(arr_25 [i_6])));
        arr_27 [i_6] [i_6] = ((/* implicit */short) ((max((arr_2 [i_6] [i_6]), (arr_2 [i_6] [i_6]))) - (max((((/* implicit */int) var_14)), (arr_2 [i_6] [(signed char)1])))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7489)) ? (((/* implicit */int) (short)-15064)) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
}
