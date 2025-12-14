/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166472
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
    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) << (((max((((/* implicit */int) var_13)), (((((/* implicit */int) (unsigned char)132)) + (((/* implicit */int) (unsigned short)14832)))))) - (14948)))));
    var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)5)), ((unsigned short)22430))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (short)-23854)) : ((+(((/* implicit */int) arr_5 [(unsigned short)2] [(_Bool)1] [(unsigned short)2] [i_0])))))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-33)), ((unsigned short)22426))))));
                        var_16 += ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                    }
                } 
            } 
            arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) min((arr_7 [i_1]), (arr_3 [i_0] [i_0])))), (max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) (unsigned short)8820)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_16 [i_4] [i_0] [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_4 + 1]))))))));
                var_18 |= ((/* implicit */short) (+((+(((/* implicit */int) arr_2 [i_4]))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) var_6))));
                var_20 = ((/* implicit */int) (signed char)-5);
            }
            for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                arr_19 [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_0 [i_1 - 2] [i_5 - 1]), (arr_0 [i_1 + 3] [i_5 + 1]))))));
                arr_20 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) > (72057044282114048LL)))) <= (((((/* implicit */int) (short)-23844)) ^ (((/* implicit */int) var_6)))))) ? (((/* implicit */int) min((arr_18 [i_1] [i_1] [i_1]), (arr_18 [i_1] [i_1 + 3] [i_1])))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_11 [i_1] [i_5 + 1] [i_1 + 1] [i_1 + 3] [i_1]) : (-1237636598)))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            arr_28 [(signed char)4] [(signed char)4] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)-6)))), (((/* implicit */int) (signed char)-9))))), (9223372036854775807LL)));
                            var_21 -= arr_2 [i_1];
                            arr_29 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_6]))));
                        }
                    } 
                } 
            }
        }
        arr_30 [(unsigned char)7] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
}
