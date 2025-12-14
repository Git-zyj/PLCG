/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153577
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)104)) ? (4611686018427387904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10)))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_1 [(signed char)15]))));
        }
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)106)))) : (((((/* implicit */_Bool) 2684726606U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)24)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        var_22 &= ((/* implicit */signed char) (-(arr_7 [i_2 - 2])));
        var_23 = ((/* implicit */_Bool) (~(((var_19) << (((arr_2 [(_Bool)1]) - (15824814314466402256ULL)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) arr_3 [i_2 + 1]);
        var_24 = ((/* implicit */signed char) var_13);
        var_25 &= ((/* implicit */unsigned long long int) arr_6 [i_2 - 2]);
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_26 = ((((/* implicit */_Bool) 798547070591610362ULL)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (_Bool)0)));
        var_27 = ((/* implicit */unsigned long long int) var_18);
        arr_12 [i_3] = ((/* implicit */unsigned long long int) var_4);
    }
    var_28 = ((/* implicit */signed char) var_10);
    var_29 = (+(var_6));
}
