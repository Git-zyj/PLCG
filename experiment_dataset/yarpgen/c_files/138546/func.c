/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138546
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 14478169276194997485ULL))));
                    }
                } 
            } 
            arr_11 [(_Bool)1] [16ULL] = ((/* implicit */int) (-(arr_3 [i_1 - 1] [i_1 - 1] [i_0])));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 14478169276194997485ULL))))) + ((-(((/* implicit */int) arr_7 [(unsigned short)1] [(unsigned short)1]))))));
            var_23 = ((/* implicit */int) min((var_23), (0)));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_15 [(_Bool)1] [i_4] [i_4] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) var_17)) : (arr_4 [i_4 - 1] [i_4])));
            arr_16 [i_4] [i_0] [i_4] = var_7;
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_4 - 1] [(_Bool)1]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            var_26 = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned long long int) arr_17 [(_Bool)1] [i_5])) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [15ULL])) : (9006924376834048ULL)))));
            var_27 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [i_0])))) / (arr_18 [i_0] [i_0])));
        }
        arr_19 [21] = ((/* implicit */unsigned short) 0ULL);
    }
    var_28 = ((/* implicit */unsigned short) var_0);
    var_29 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-14713))))) + (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) ((((/* implicit */int) var_3)) <= (var_6)))))))));
}
