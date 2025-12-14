/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168333
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)29363)))))));
                arr_6 [(unsigned short)3] [i_0] [(short)8] = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0])), (var_9)))), (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_4 [(unsigned char)5] [i_0] [i_0])) - (33837)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_14 = min((((/* implicit */int) max(((short)-29364), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))))), (((var_11) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_2])) : (((/* implicit */int) arr_7 [5] [(unsigned char)12])))));
        var_15 = ((/* implicit */short) var_9);
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [(unsigned short)2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [(unsigned char)10])))), (((((((/* implicit */int) arr_8 [i_2] [i_2])) > (((/* implicit */int) (short)-29364)))) ? (((/* implicit */int) (short)29159)) : (((/* implicit */int) ((var_0) > (((/* implicit */int) (short)-12)))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */_Bool) (short)-29152)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [2] [i_2])) | (var_6)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2LL)) ? (-1484629466) : (((/* implicit */int) arr_9 [i_2]))))))))));
    }
}
