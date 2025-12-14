/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16004
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
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(var_9)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [6LL]))))) || (((/* implicit */_Bool) var_14))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_2 [i_0] [i_0])))) : (var_2)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_22 = ((((/* implicit */unsigned int) arr_1 [i_1])) | (((((/* implicit */_Bool) var_1)) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)-1)))))))));
                    var_23 = ((/* implicit */signed char) arr_2 [i_1] [i_1]);
                    var_24 = ((/* implicit */unsigned char) ((arr_4 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_2 - 3] [i_1]))))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        var_26 = (signed char)24;
        var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_0 [i_3] [i_3])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_3 + 1])))));
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) <= (((/* implicit */int) (short)12526))));
}
