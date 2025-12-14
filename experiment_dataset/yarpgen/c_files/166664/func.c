/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166664
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [12])) ? (((/* implicit */int) var_10)) : (((int) arr_0 [19LL]))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_13)) ? (arr_0 [(unsigned short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11795)))))))));
        arr_3 [i_0] = arr_0 [i_0];
        var_18 += ((/* implicit */unsigned char) min(((+(arr_0 [i_0]))), ((+(arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [(short)11] [i_2] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_3 - 2] [i_2 - 2] [5U]))));
                        arr_12 [i_0] [(signed char)7] [i_1] [i_3] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3719))) : (arr_0 [i_0]));
                    }
                } 
            } 
            arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) : (((/* implicit */int) ((unsigned short) arr_10 [(_Bool)1] [5] [i_0] [i_1] [(unsigned short)14])))));
        }
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [16LL] [i_0])) ? (11038573929923483439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)84))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))))))))));
    }
    var_20 &= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (var_0)));
}
