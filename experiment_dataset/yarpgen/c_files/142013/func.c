/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142013
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            arr_11 [i_0 + 1] [(short)11] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)2] [(short)2] [(short)2]))) < (arr_5 [i_0] [i_0] [i_0] [i_0 + 1])))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_10 [i_0 + 2] [i_4 - 1] [(unsigned short)21] [i_4 + 2] [i_4 + 3]))))));
                            var_20 = (-((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) (short)4022)) - (4019))))));
                        }
                        arr_12 [i_3] [7] [i_0] [i_0] [i_3] = ((/* implicit */signed char) -2492452564914646639LL);
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_3 [i_0 + 3] [i_3]))));
                        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4022))))) ? (max((-8271290626672249771LL), (((/* implicit */long long int) (unsigned short)807)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]))) : (-1102372080982365899LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)95)) | (((/* implicit */int) arr_8 [i_0] [(unsigned short)6] [16LL] [16LL])))))));
                    }
                    var_22 = ((/* implicit */int) arr_5 [i_0] [(unsigned short)11] [i_0] [i_2]);
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_11);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_10)), (var_2)));
}
