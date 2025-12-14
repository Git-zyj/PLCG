/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155603
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
    var_20 = ((unsigned long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) + (((/* implicit */int) var_11))));
        var_21 = ((/* implicit */signed char) var_2);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = var_10;
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_12 [6LL] = ((/* implicit */long long int) arr_5 [i_2]);
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (var_15)))) ? ((-(var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65507), (((/* implicit */unsigned short) var_13)))))))))))));
                    arr_13 [i_3] [21LL] [i_3 + 3] = ((/* implicit */long long int) (((~((+(((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])))))) >= (((((/* implicit */_Bool) var_9)) ? (arr_11 [i_3 - 2] [i_3 + 1] [i_3 - 1]) : (arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 1])))));
                    arr_14 [i_1] [i_1] [(unsigned char)13] [i_3 - 1] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) arr_8 [i_3 + 1] [i_2])));
                }
            } 
        } 
    }
}
