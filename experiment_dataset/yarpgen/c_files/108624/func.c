/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108624
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
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5505925203080715909LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_14) : (var_4)))) : (max((((/* implicit */unsigned long long int) min(((short)4916), ((short)32767)))), (((((/* implicit */_Bool) (unsigned char)79)) ? (5119891688590549958ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 = ((/* implicit */_Bool) var_16);
        var_22 = ((unsigned long long int) 6771864792728080553LL);
        var_23 = ((unsigned short) 11444434675430853913ULL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            var_24 &= ((/* implicit */signed char) (unsigned short)7);
            arr_8 [i_1] [i_1] = ((max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)252)))) - (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned short)65508)) : (((/* implicit */int) (signed char)89)))))));
            var_25 = ((/* implicit */unsigned char) 1152921229728940032ULL);
        }
        var_26 |= ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_4 [i_1] [i_1] [0]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1] [(unsigned short)4] [6LL])) : (((/* implicit */int) arr_4 [i_1] [i_1] [(short)6]))))));
    }
    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_27 ^= ((/* implicit */signed char) var_0);
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((6771864792728080553LL), (-7480354707274971885LL)))) ? ((-(((/* implicit */int) (signed char)29)))) : (((/* implicit */int) ((2878817548205524413LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 2 */
        for (short i_4 = 4; i_4 < 14; i_4 += 3) 
        {
            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 671671139)))));
            var_29 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_3 + 2])))), (((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) (unsigned short)31959)) : (((/* implicit */int) ((_Bool) var_12)))))));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 14865562334187940208ULL))) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (short)-19909))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */long long int) min((1900242780), (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_18)) ? (9223372036854775807LL) : (6771864792728080553LL)))))))))));
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            var_31 = ((/* implicit */int) max((var_31), ((~(((/* implicit */int) var_19))))));
            arr_17 [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3386466586U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0))));
        }
    }
}
