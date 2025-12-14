/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111598
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((long long int) var_11)))));
    var_21 += ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_19)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : ((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_23 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))) ^ (((long long int) var_10))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [(unsigned short)13] [i_1])))), (((((/* implicit */int) arr_4 [i_1] [i_1])) + (((/* implicit */int) arr_5 [i_1])))))))))));
        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))))))));
        var_26 = ((/* implicit */int) min((max((var_15), (((/* implicit */unsigned int) arr_4 [i_1] [i_1])))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [i_1])))))));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 4; i_3 < 23; i_3 += 4) 
        {
            var_27 = var_18;
            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_2] [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])))))));
            var_29 = ((/* implicit */int) ((unsigned int) ((signed char) (~(((/* implicit */int) arr_8 [i_2]))))));
        }
        arr_10 [8ULL] = arr_7 [i_2] [i_2];
    }
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_6)), (var_2))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
}
