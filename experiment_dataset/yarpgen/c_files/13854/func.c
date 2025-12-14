/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13854
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * ((-(((/* implicit */int) var_3))))));
    var_21 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1] [i_0])))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [(_Bool)1] [i_1] = ((/* implicit */long long int) arr_3 [i_0]);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_13 [18] [(short)4] [i_1] [i_2] [i_3] [(unsigned char)20] [i_1] |= (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)18] [i_1]))))));
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 + 2] [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_2]), (arr_3 [i_0])))))))));
                            arr_14 [i_4] [i_4] [i_4] [i_3] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) max((3492379568432315155ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (710388008)));
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_0 [i_5] [i_0])) || (((/* implicit */_Bool) arr_6 [4U])))) || (((((/* implicit */_Bool) arr_7 [(short)10] [i_5])) || (((/* implicit */_Bool) arr_10 [(unsigned char)22] [(unsigned char)22] [i_0] [(unsigned char)22] [i_5] [i_5])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) arr_0 [i_5] [i_5])))))));
            var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_15 [i_5] [i_5] [i_5]))))));
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(unsigned char)14] [i_5])) >> (((arr_9 [4ULL] [i_7] [i_7] [i_7]) + (1140784324)))))) ? ((-(arr_4 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [10] [i_6] [i_6 - 1] [i_6 + 2] [22LL] [5ULL])))))));
                        arr_23 [i_5] [i_5] [i_6] [i_6 - 1] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [(short)21] [i_5] [i_0] [i_6 - 1] [i_5])))))) ? (((/* implicit */int) arr_21 [i_5] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_5])) : (arr_9 [23U] [23U] [i_6 + 1] [i_7])))));
                    }
                } 
            } 
            arr_24 [i_0] |= ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) != (arr_8 [22] [i_5] [i_5] [(short)17]))))) | (((((/* implicit */_Bool) arr_19 [(_Bool)1])) ? (arr_16 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [12LL] [i_0] [i_0] [i_0])))))))));
        }
        var_27 = ((/* implicit */unsigned long long int) arr_16 [i_0]);
    }
    var_28 = ((/* implicit */short) var_0);
}
