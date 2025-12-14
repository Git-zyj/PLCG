/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151885
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
    var_19 = ((/* implicit */unsigned short) var_5);
    var_20 = ((((var_14) * (((/* implicit */unsigned long long int) var_17)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9271))));
    var_21 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_0 [i_0 + 1]))));
                        arr_9 [i_0] [i_2] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9)))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)29062))) <= (var_6))))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_3]))) : (var_14)))) ? (((/* implicit */int) ((signed char) var_4))) : ((+(((/* implicit */int) (_Bool)1))))))));
                    }
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)9294)) | (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9287)))) : (((((/* implicit */int) arr_2 [i_0 - 2] [i_1 + 1])) + (((/* implicit */int) var_9))))));
                    var_24 = ((/* implicit */unsigned char) max(((signed char)35), (((/* implicit */signed char) (_Bool)1))));
                }
            } 
        } 
    } 
}
