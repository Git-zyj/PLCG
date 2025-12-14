/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164302
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) (((!(((/* implicit */_Bool) (short)32767)))) ? (((((/* implicit */_Bool) var_19)) ? (var_3) : (((/* implicit */int) var_19)))) : (((var_6) / (var_3))))));
    var_21 = ((/* implicit */unsigned int) var_2);
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (short)32767))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? ((-(arr_3 [i_0] [(signed char)4] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34747)))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))) ? ((-(var_17))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) ((unsigned char) arr_5 [i_0] [i_1])));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((((var_13) ^ (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)2] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))));
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_6 [i_0] [i_0]))))));
    }
}
