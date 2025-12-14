/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14123
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) var_9))))));
            arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4111)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)4100)))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1889473571U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)4096)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_21 = ((((_Bool) 0)) ? (((/* implicit */int) (short)-10471)) : (((/* implicit */int) var_14)));
            arr_11 [i_2] = ((((/* implicit */_Bool) var_14)) ? (((int) var_1)) : (((/* implicit */int) (short)12288)));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_3) : ((+(var_1)))));
            arr_12 [14] [14] [14] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) 1572919485)));
            arr_13 [i_0] [i_2] [4ULL] = ((/* implicit */short) (-(-46084202)));
        }
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) var_4))))))));
            arr_18 [i_3] = ((short) ((unsigned char) (short)-4117));
        }
        var_24 = ((/* implicit */int) ((signed char) var_8));
    }
    var_25 = ((/* implicit */short) ((((max((((/* implicit */int) (unsigned char)2)), (1175167225))) >> (((((/* implicit */int) var_13)) * (((/* implicit */int) (_Bool)0)))))) < (min((((/* implicit */int) ((unsigned char) 50331648))), (((var_10) >> (((((/* implicit */int) var_19)) + (106)))))))));
    var_26 = ((/* implicit */short) var_2);
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_15)))) & (((int) (+(613016858259173134ULL)))))))));
}
