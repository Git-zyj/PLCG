/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156676
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
    var_12 = ((/* implicit */unsigned char) (~((~(var_5)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-15963)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (short)-1217)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (var_4)))))) : (0)));
                    arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [(unsigned short)10] [(signed char)1])), (323944968624697611ULL)))))) ? (max((((/* implicit */int) ((_Bool) var_5))), (arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((((/* implicit */int) var_9)) ^ (var_1))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_1);
                    arr_11 [i_0 - 3] [i_0] [i_0 - 3] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_2]))) : (((/* implicit */int) ((_Bool) -18)))))));
                }
            } 
        } 
    } 
}
