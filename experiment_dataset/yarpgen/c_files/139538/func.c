/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139538
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
    var_18 = ((/* implicit */long long int) var_9);
    var_19 = ((/* implicit */long long int) (unsigned short)2427);
    var_20 = ((/* implicit */short) ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(arr_2 [i_0] [(unsigned short)6] [i_3]))))));
                        var_23 += ((/* implicit */unsigned long long int) (!((_Bool)0)));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((max((arr_7 [i_1 - 3] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 3]), (arr_7 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 1] [(_Bool)1] [i_1 - 3]))), (((min((arr_7 [i_0] [i_3] [i_2] [i_1] [i_0] [23U]), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_3])))) * (max((arr_7 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [4U]), (((/* implicit */unsigned int) var_5)))))))))));
                        arr_8 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (((+(((/* implicit */int) var_17)))) < (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                    var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)250)) ? (min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (!((_Bool)0)))))) : (((/* implicit */int) arr_3 [i_0] [16U]))));
                }
            } 
        } 
    } 
    var_26 = var_10;
}
