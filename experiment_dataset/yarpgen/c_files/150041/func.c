/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150041
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1998928025)) ? (((/* implicit */int) arr_1 [(short)14])) : (((/* implicit */int) arr_1 [12U]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                arr_7 [i_0] [i_1] = (~(arr_4 [i_1]));
                arr_8 [i_0] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) var_10);
                var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)0]))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
            }
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (unsigned char)128)))) : (((((/* implicit */int) (signed char)46)) / (((/* implicit */int) (signed char)-47))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_9))) : (((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_0] [0] [i_3])))));
                arr_13 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) var_3)) : (0ULL))));
                arr_14 [(unsigned short)0] &= ((/* implicit */int) arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned long long int) arr_3 [(short)8]);
                            var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)31);
            }
        }
        arr_22 [i_0] = ((/* implicit */unsigned int) var_12);
        var_19 = ((/* implicit */long long int) ((((unsigned long long int) 6402802134748876818LL)) * (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 1; i_7 < 12; i_7 += 2) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_7 + 1])))))));
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_24 [i_7 - 1]) : (arr_24 [i_7 + 1])));
            arr_29 [i_6] [i_6] &= ((/* implicit */unsigned long long int) (short)-32586);
            var_21 = ((/* implicit */unsigned int) arr_25 [i_7]);
        }
        arr_30 [i_6] = ((/* implicit */int) arr_15 [i_6] [i_6] [i_6]);
        var_22 = ((/* implicit */unsigned char) -497925156);
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [9])) ? (((/* implicit */int) arr_25 [i_6])) : (var_7)));
    }
    var_24 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))) - (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29052)) ? (((/* implicit */long long int) var_11)) : (var_6)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_3)))) : (12ULL)))));
}
