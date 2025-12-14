/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102679
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (-4582208801376047231LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)95))) : ((~(arr_3 [i_2] [i_2 + 1] [i_2 - 1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) arr_0 [i_0 + 1] [i_1]))))) <= ((-(((/* implicit */int) (signed char)-95))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((arr_7 [i_1] [i_1] [5U] [i_1] [i_1]) - (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((unsigned char) var_14))) : (((((/* implicit */int) (signed char)-95)) + (((/* implicit */int) var_12)))));
                        var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) min((var_17), (var_2)))) >> (((min((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_0 + 1] [i_0 + 1] [1]))) - (47ULL))))));
                    }
                    var_22 = arr_5 [14U] [i_1] [i_2];
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((max(((unsigned short)22002), ((unsigned short)45646))), (((/* implicit */unsigned short) ((signed char) ((unsigned char) (unsigned short)19889))))));
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_8)))))))));
    var_25 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_14))))))) > (((/* implicit */int) var_5))));
    var_26 = ((/* implicit */unsigned short) max((var_26), (min(((unsigned short)19890), ((unsigned short)45646)))));
}
