/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11871
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 -= ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) 3646544981U)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (unsigned short)31)))))) << (((((int) ((signed char) arr_0 [i_0 - 1] [i_0 - 1]))) - (10)))));
        arr_2 [i_0 - 1] [(_Bool)1] |= max((((/* implicit */unsigned short) ((_Bool) (unsigned char)246))), (arr_0 [i_0 - 1] [i_0 - 1]));
        var_19 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)62623))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1 + 1] &= arr_5 [i_1 + 1];
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)145))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            arr_9 [i_1 + 1] [i_2] = ((/* implicit */_Bool) ((short) (_Bool)1));
            var_21 = ((/* implicit */unsigned char) var_11);
        }
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            arr_12 [i_1 + 1] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)110)))));
            var_22 = ((/* implicit */int) ((_Bool) 2209661215U));
            var_23 = ((/* implicit */unsigned char) (unsigned short)60906);
        }
        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_24 = ((/* implicit */_Bool) max((arr_4 [i_1 + 1]), (((/* implicit */int) (unsigned short)45))));
            arr_15 [i_4] [i_4] [i_1 - 1] = ((/* implicit */signed char) ((var_17) ^ (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) var_15)))))));
        }
        arr_16 [i_1 - 1] = ((/* implicit */unsigned int) arr_3 [i_1 + 1]);
    }
    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)113)) ? ((-(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) : ((~(((((/* implicit */int) arr_10 [i_5 - 1] [i_5 + 1])) & (((/* implicit */int) var_4)))))))))));
        arr_19 [i_5 + 1] [i_5 - 1] = ((/* implicit */unsigned short) var_12);
        arr_20 [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-451212848500210898LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2912))) <= (3434362003U)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)31))))));
        arr_21 [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62624)) ? (max((((((/* implicit */_Bool) 2741193854U)) ? (arr_5 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5 + 1] [i_5 + 1]))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1]))) <= (var_13)))))) : ((-(((arr_11 [i_5 + 1] [i_5 - 1]) ? (var_11) : (var_11)))))));
        arr_22 [i_5 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-22104))));
    }
    var_26 = (-((~(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_27 = ((/* implicit */signed char) var_14);
    var_28 = ((/* implicit */unsigned int) var_10);
}
