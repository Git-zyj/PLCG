/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174567
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
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)22803))));
    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_15)))), (((/* implicit */int) min((((/* implicit */unsigned short) min((var_14), (var_15)))), (var_9))))));
    var_20 -= (unsigned char)38;
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)8] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17592)))))));
                        arr_9 [i_1] [(unsigned short)3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)37193)) ? (((/* implicit */int) ((short) arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */int) arr_8 [i_1] [(_Bool)1] [i_1] [i_1]))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_16)))));
}
