/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160816
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_17)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_0 - 1] [i_1] [i_2] [9ULL] = arr_7 [i_0] [i_1] [i_3 + 1] [i_3];
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_4] [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4] [(short)11])) ? (((((/* implicit */_Bool) arr_4 [2])) ? (((/* implicit */int) arr_7 [i_0] [6ULL] [i_2] [i_1])) : (((/* implicit */int) (unsigned char)146)))) : (var_14)));
                            arr_15 [(short)10] = (~(arr_4 [5]));
                        }
                        arr_16 [(unsigned char)5] [11LL] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_0 [10] [i_0])))));
                        arr_17 [6] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (~(arr_9 [i_3 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    }
                } 
            } 
            arr_18 [i_1] [i_1] = ((/* implicit */_Bool) var_3);
            arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [(signed char)4] [i_0 - 1])))) ? (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned char)47)))) : (((/* implicit */int) ((_Bool) arr_13 [i_0] [i_1])))));
            arr_20 [10LL] &= ((((((/* implicit */int) (unsigned char)56)) > (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [(_Bool)1])))) ? (((/* implicit */int) ((arr_10 [i_0 - 1]) < (arr_10 [4ULL])))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])));
            arr_21 [i_1] = ((/* implicit */unsigned char) (~(arr_4 [i_0 - 1])));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_24 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (var_3) : (arr_1 [i_0] [i_5])))) ? (((/* implicit */int) ((signed char) arr_22 [i_5]))) : (((/* implicit */int) arr_23 [11LL] [i_5] [i_0])));
            arr_25 [(unsigned char)8] [i_0 - 1] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0 - 1]))));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_4 [i_0 - 1])));
    }
    var_18 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
}
