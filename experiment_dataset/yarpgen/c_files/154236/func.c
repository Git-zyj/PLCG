/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154236
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)670)) : (((/* implicit */int) (short)670)))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-651)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-672)) == (((/* implicit */int) (short)26631)))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))) : (var_17))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [(_Bool)1] |= ((/* implicit */int) max((((min((35888059530608640ULL), (((/* implicit */unsigned long long int) (short)-657)))) >> ((((~(((/* implicit */int) (short)-654)))) - (597))))), (18446744073709551615ULL)));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (arr_0 [i_0] [(unsigned char)16]) : (arr_0 [i_0] [0U]))))))));
        var_22 = ((unsigned int) (short)26639);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >> (((((((int) 870600065752166600ULL)) | (((/* implicit */int) ((unsigned short) (short)670))))) + (1399393601)))));
                        var_23 = ((/* implicit */int) (~(8745040041087867100ULL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_24 -= ((/* implicit */_Bool) arr_2 [i_4]);
            var_25 = ((/* implicit */long long int) arr_4 [i_0] [i_4] [i_4]);
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        arr_16 [(signed char)6] = ((/* implicit */short) (unsigned short)20833);
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_9))))) ? ((~(((((/* implicit */_Bool) (unsigned short)44703)) ? (18410856014178942976ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) : (arr_8 [i_5] [3U])));
        arr_17 [17LL] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) 4294967295U)) : (3827455446142022387LL))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])), (var_14)))))));
        var_27 = ((/* implicit */_Bool) ((long long int) (-(415133550928512092ULL))));
    }
    for (unsigned short i_6 = 3; i_6 < 17; i_6 += 3) 
    {
        var_28 ^= (((-(9701704032621684515ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))));
        var_29 = ((/* implicit */short) -2147483644);
    }
    var_30 = ((/* implicit */short) var_9);
    var_31 = ((/* implicit */int) (short)661);
}
