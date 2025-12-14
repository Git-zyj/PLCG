/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175962
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
    var_18 = ((/* implicit */_Bool) (((-(((/* implicit */int) ((signed char) (_Bool)1))))) - ((-(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */_Bool) arr_3 [i_0]);
                var_20 -= ((/* implicit */unsigned short) min(((((-(((/* implicit */int) arr_3 [i_1])))) & ((-(((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((((/* implicit */int) (unsigned char)126)) | (((/* implicit */int) var_14)))) : (((((/* implicit */int) var_13)) | (((/* implicit */int) arr_2 [i_0]))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((signed char)-120), (((/* implicit */signed char) var_13))))) || (((/* implicit */_Bool) (short)-30406))))), (var_4))))));
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_1])) - (19465)))))) ? (((/* implicit */int) min(((signed char)90), ((signed char)127)))) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)6])))) >> (((((/* implicit */int) arr_3 [(signed char)14])) - (2620)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_1] [i_2] [i_1] [(short)17] [i_0] = (signed char)74;
                                arr_13 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((var_11), (((/* implicit */short) var_0)))))))));
                                var_23 = ((/* implicit */short) min(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) ((short) (unsigned char)209)))))));
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */_Bool) var_2);
                    arr_14 [i_0] [i_0] [i_1] [(signed char)0] = var_2;
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_18 [(_Bool)1] = ((/* implicit */signed char) min((((((/* implicit */int) var_9)) | (((((/* implicit */int) arr_9 [i_5])) ^ (((/* implicit */int) arr_9 [(_Bool)1])))))), (min((((/* implicit */int) arr_7 [i_1 - 2] [i_5] [i_5 + 1])), ((-(((/* implicit */int) arr_2 [(signed char)0]))))))));
                    var_25 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_1)) << ((((~(((/* implicit */int) (unsigned short)7408)))) + (7414))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((((/* implicit */short) var_4)), (var_11)))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (short)-30387))))))));
}
