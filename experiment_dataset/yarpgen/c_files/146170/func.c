/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146170
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(short)6] [i_2] [i_2] [i_0 + 2] = ((/* implicit */unsigned int) ((var_10) << (((arr_2 [i_0] [(unsigned char)10]) - (3712255471980426834ULL)))));
                    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1]))));
                }
            } 
        } 
        var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1499344028))));
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1499344028) + (((/* implicit */int) (short)-16482))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0 - 2])))) + (((((/* implicit */unsigned long long int) 5405224236773829949LL)) - (10226972761493576498ULL)))))));
        var_20 -= ((/* implicit */_Bool) var_5);
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_21 |= ((/* implicit */int) ((long long int) arr_9 [i_3 + 1] [i_3 + 1]));
        var_22 = ((/* implicit */long long int) ((arr_8 [i_3 - 1]) ^ (arr_8 [i_3 + 3])));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) / (((/* implicit */int) var_1))))))) ? (var_3) : (min((var_5), (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_24 &= ((unsigned char) var_4);
        var_25 |= ((/* implicit */signed char) var_14);
        arr_14 [i_4] &= ((/* implicit */unsigned short) arr_11 [(unsigned short)14] [i_4]);
    }
}
