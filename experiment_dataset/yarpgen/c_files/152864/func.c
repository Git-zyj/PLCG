/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152864
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
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (+(4294967279U)));
        arr_4 [i_0 - 1] [i_0] = var_1;
        var_20 = ((long long int) arr_2 [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_3] = (signed char)100;
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_3] [(unsigned short)2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(8636820900103427027LL)))) ? (((/* implicit */long long int) ((int) (unsigned short)2754))) : (9223372036854775807LL)));
                        var_21 *= ((/* implicit */unsigned short) arr_9 [i_1] [i_2]);
                        arr_21 [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (2346811858U)))) * (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (arr_8 [i_2 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62767)))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_22 ^= ((/* implicit */unsigned short) (-(arr_18 [i_4 + 1] [i_4 + 1] [i_5] [i_5] [12] [i_5])));
                            arr_24 [i_5] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */long long int) arr_16 [i_3] [1U] [i_2 - 2] [i_2 - 2] [i_3])) : (var_8)));
                            var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_1] = ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [0] [i_1])) ? (var_10) : (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1] [i_1])));
        var_24 = ((/* implicit */unsigned char) arr_12 [19]);
        var_25 = ((/* implicit */long long int) min((var_25), (arr_18 [i_1] [i_1] [i_1] [i_1] [14LL] [i_1])));
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            arr_33 [i_6] = ((/* implicit */unsigned short) (-(((int) max((-1729853251258137680LL), (var_14))))));
            var_26 &= ((/* implicit */_Bool) arr_27 [i_7]);
        }
        arr_34 [(_Bool)1] = ((/* implicit */_Bool) arr_7 [i_6]);
        var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6])) || (((/* implicit */_Bool) var_3)))))) % (var_18)));
    }
}
