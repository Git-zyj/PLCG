/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129197
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
    var_17 = ((/* implicit */int) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */int) (signed char)100))))), (((var_5) / (((/* implicit */long long int) arr_0 [i_0]))))));
        arr_5 [(short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (short)-32744)) && (((/* implicit */_Bool) var_1))))), (min((var_3), (((/* implicit */short) (_Bool)0))))))) <= (((/* implicit */int) var_7))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(((unsigned long long int) (_Bool)1))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) ((arr_2 [i_1] [i_1]) ? ((~(((/* implicit */int) var_2)))) : (((arr_2 [i_1] [i_1]) ? (((/* implicit */int) arr_2 [i_1] [(unsigned char)6])) : (((/* implicit */int) (_Bool)1))))));
        arr_10 [(_Bool)1] = ((/* implicit */unsigned int) (+(((((((/* implicit */int) var_4)) - (((/* implicit */int) arr_1 [i_1])))) * (((/* implicit */int) var_8))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 8; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_18 += (+(((/* implicit */int) var_8)));
                        var_19 = ((((/* implicit */_Bool) ((short) arr_8 [i_3 - 3]))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_8 [i_3 + 2])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_3 - 2])) : (arr_0 [i_3 + 2]))));
                    }
                } 
            } 
            arr_21 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((((/* implicit */long long int) (_Bool)1)), (arr_11 [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_1] [i_2] [i_2] [i_2] [i_2]))))))))) >> ((((~(((/* implicit */int) arr_8 [i_1])))) + (186)))));
        }
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)235)))))));
        var_21 = ((int) (+(-1059064147)));
    }
}
