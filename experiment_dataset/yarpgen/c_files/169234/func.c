/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169234
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2648))) : (var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) var_4);
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                arr_6 [i_0] [7ULL] [(short)9] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]);
                var_22 = ((/* implicit */long long int) arr_0 [i_2 + 1]);
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) 8568568407599739233LL);
                    var_24 ^= ((/* implicit */long long int) (short)13);
                    var_25 = ((arr_4 [i_2 - 2] [i_2 + 1] [i_2 - 2]) + (arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2]));
                    var_26 = arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 1];
                }
                for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
                {
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_5 [i_1] [i_1] [i_2 - 3] [i_4 + 1])));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) arr_0 [i_1])) || (arr_2 [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(arr_4 [i_0] [i_0] [7LL])))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_14))))));
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_2 - 2] [i_0] [i_2 - 2] [i_0] [i_0]))));
                        arr_22 [6LL] = ((/* implicit */unsigned long long int) (-(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_4 - 3])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_0] [i_0] [i_4 - 3])))));
                        arr_23 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (9U)));
                    }
                    var_29 = ((/* implicit */unsigned int) ((arr_19 [i_0] [i_0] [i_0] [i_4] [i_0] [i_4] [i_0]) - (((/* implicit */int) ((arr_19 [i_0] [i_1] [i_2 - 3] [i_1] [i_0] [i_1] [i_2 - 3]) == (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4 + 3] [i_4 + 2])))))));
                }
            }
        }
        for (int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_30 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4340201150382359723LL)) ? (var_3) : (var_12))));
            arr_26 [i_0] [(unsigned char)13] = ((/* implicit */signed char) ((var_17) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            arr_27 [i_0] [14LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_7] [i_0])) & (var_11)));
        }
        var_31 = ((/* implicit */int) var_15);
        var_32 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
    }
}
