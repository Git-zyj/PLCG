/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182594
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)6144)) ? (((/* implicit */int) (short)6124)) : (((/* implicit */int) (short)-6148)))) <= (((((/* implicit */_Bool) (short)6133)) ? (((/* implicit */int) (short)6112)) : (((/* implicit */int) (short)6144))))));
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */int) (short)-6144)) / (((/* implicit */int) (short)6162))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_1]))));
        var_21 = ((/* implicit */unsigned int) ((long long int) (short)6133));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6124)) ? ((~(((/* implicit */int) (short)6117)))) : (((/* implicit */int) max(((short)6117), ((short)6160)))))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)6128), (((/* implicit */short) arr_8 [i_2] [i_2])))))) : (((unsigned long long int) (short)6154))));
            arr_11 [i_2] = min((((/* implicit */long long int) arr_9 [i_2] [i_3])), ((~(var_3))));
        }
        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (short)6124))));
            var_25 = ((/* implicit */unsigned long long int) var_0);
        }
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_2])) + (72))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */int) (short)-6118)) / (((/* implicit */int) (short)-6140))));
            var_28 = ((/* implicit */unsigned char) (short)-6113);
            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-6144)) ? (((/* implicit */int) min(((short)6143), ((short)6140)))) : (((/* implicit */int) (short)-6154)))) >> (((((/* implicit */int) (short)-6120)) + (6129)))));
        }
    }
    var_30 = var_3;
    var_31 = ((/* implicit */unsigned long long int) (+(var_10)));
    var_32 = ((/* implicit */short) (~(((/* implicit */int) (short)-6131))));
    var_33 = ((/* implicit */unsigned char) var_13);
}
