/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102469
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
    var_17 = ((/* implicit */signed char) (~(var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (unsigned char)238))));
            var_19 ^= ((/* implicit */int) arr_3 [i_0] [i_1]);
        }
        var_20 -= ((/* implicit */unsigned char) arr_2 [i_0] [(unsigned short)6]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    var_21 |= ((/* implicit */unsigned char) arr_10 [i_2] [i_3] [i_4]);
                    arr_15 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) arr_7 [i_2])), (min((max((((/* implicit */long long int) arr_6 [i_2] [i_2])), (-4114043911162246360LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)-20336)) >= (((/* implicit */int) arr_9 [i_2] [i_3])))))))));
                    arr_16 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */short) arr_9 [i_2] [(_Bool)1]);
                }
            } 
        } 
        var_22 = -5082786946765438592LL;
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */signed char) arr_18 [i_5]);
        arr_22 [(short)2] = ((/* implicit */unsigned short) arr_19 [i_5] [i_5]);
        var_23 += ((/* implicit */short) (+(5082786946765438592LL)));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) (short)24032)) - (24032)))))) ? (((/* implicit */int) (signed char)7)) : (max((((/* implicit */int) var_8)), (var_7)))))) | (((min((((/* implicit */unsigned int) var_9)), (var_3))) << ((((+(-8441032190199494464LL))) + (8441032190199494474LL)))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) % (var_4)));
}
