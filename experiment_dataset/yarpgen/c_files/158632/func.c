/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158632
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
    var_12 &= (+(((((/* implicit */_Bool) 4188974021U)) ? (7455611627286574335LL) : (((/* implicit */long long int) 696520473U)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_12 [i_0] [0LL] [i_2] [i_2] [(short)2] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)52255))));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_3] [(unsigned short)4] [7] [(_Bool)1]))));
                        var_14 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_3])));
                        arr_13 [9U] [(unsigned short)2] [(_Bool)1] [i_0] [(unsigned char)0] [i_1] = ((/* implicit */unsigned short) ((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned char)1] [i_3] [i_3]))))) > (((/* implicit */long long int) ((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41167)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_15 = ((((/* implicit */int) arr_2 [i_0])) / (arr_7 [i_4] [i_1]));
                        arr_16 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)4]))) : (var_3))))));
                        arr_17 [i_1] [i_1] [7] [i_2] [0] [i_2] = ((((_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_9 [(short)8] [i_2] [(unsigned short)5] [6LL]))))) : (((int) (short)18838)));
                    }
                    var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_3 [(unsigned char)0] [0LL]) : (arr_3 [i_0] [(unsigned short)6])))));
                }
            } 
        } 
    } 
}
