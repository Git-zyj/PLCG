/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109188
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
    var_12 += ((/* implicit */signed char) max((((/* implicit */int) min((var_4), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)127))))))), ((((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_6)) >> (((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) var_11);
        var_14 = ((/* implicit */unsigned int) ((short) (unsigned short)57688));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_8 [i_1 - 1] = arr_6 [i_2] [i_1 - 1];
            var_15 ^= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (unsigned short)1)), (arr_5 [i_1]))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3752))))))))));
        }
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_16 ^= ((/* implicit */signed char) (-(arr_5 [i_1])));
            var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65523)) * (((/* implicit */int) arr_9 [(short)12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)11510))))) : (((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (_Bool)1))));
            arr_11 [i_1 - 1] = arr_3 [i_1];
            var_18 -= ((/* implicit */short) (_Bool)1);
        }
        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            arr_23 [(short)12] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_21 [i_6 + 2] [i_6] [i_6] [i_6 + 1] [i_6 + 2]), (((/* implicit */unsigned short) arr_16 [i_6 + 1] [i_6 + 1] [i_6] [i_6]))))) + (((/* implicit */int) max((arr_16 [i_6 - 2] [i_6] [i_6] [i_6]), (arr_16 [i_6 + 2] [i_6 + 3] [i_6 + 3] [i_6]))))));
                            var_19 = ((/* implicit */short) var_11);
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_4 [(unsigned short)13] [i_4]))));
                        }
                        for (short i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            arr_28 [i_1 + 2] [i_5] [i_5] [i_5] [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1 + 2] [i_1] [(_Bool)1] [i_1 + 2] [i_1])) ? (((long long int) arr_15 [i_6 - 2] [i_4])) : (((arr_26 [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 1] [i_6 - 2]) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_24 [i_1] [i_4] [i_4] [i_5] [(unsigned short)4] [i_5] [i_8])))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (arr_15 [i_4] [i_4])))), (max((var_5), (((/* implicit */unsigned short) arr_24 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_5] [i_1]))))))) && (((_Bool) (short)-11535))));
                        }
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)14156), (((short) 2833489220U))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_29 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_6 [i_1 - 1] [i_6 + 3]) ^ (arr_6 [i_1 + 2] [i_6 - 2])))) && (((/* implicit */_Bool) ((arr_6 [i_1 + 2] [i_6 - 1]) * (arr_6 [i_1 + 2] [i_6 + 2]))))));
                    }
                } 
            } 
            var_23 *= ((/* implicit */unsigned short) arr_16 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
        }
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_10 [i_1 + 1] [i_1 - 1])))));
    }
}
