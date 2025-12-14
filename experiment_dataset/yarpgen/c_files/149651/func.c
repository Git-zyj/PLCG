/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149651
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
    var_17 = ((/* implicit */int) ((short) var_10));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((arr_1 [i_0]) >> (((arr_1 [i_0]) - (445727114711460353LL)))));
        arr_2 [4LL] = ((signed char) ((arr_1 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (short)2779)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((unsigned long long int) -7445708317326792439LL));
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-9)) || (((/* implicit */_Bool) arr_1 [i_1])))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 - 3])) ? (((/* implicit */int) arr_3 [1] [i_0] [i_1 - 2])) : (((/* implicit */int) (short)-2805))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) arr_5 [i_2 + 2]);
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 7; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        arr_17 [(unsigned char)7] [i_0] [i_0] [i_2] [(signed char)8] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (short)2782)) : (((/* implicit */int) (signed char)-105))));
                        arr_18 [i_0] [i_2] [i_2] = (-(arr_5 [i_3 + 2]));
                    }
                } 
            } 
            arr_19 [i_0] [i_0] = ((/* implicit */short) (-(arr_12 [i_0] [i_2 + 3] [i_2 + 3] [i_2 + 2])));
        }
        var_21 = ((/* implicit */unsigned long long int) 830082386U);
    }
    for (short i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        arr_22 [i_5] |= ((/* implicit */int) arr_4 [(unsigned char)1]);
        arr_23 [i_5 + 1] = ((/* implicit */long long int) (short)-14980);
    }
    var_22 = ((/* implicit */short) (~(var_1)));
}
