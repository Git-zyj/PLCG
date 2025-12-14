/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165597
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -229121595)) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) 2147483647)) ? ((-(var_10))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [8] [i_0])))))))));
        var_19 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5016927450674483517LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
        var_20 = ((/* implicit */unsigned short) ((((8618631137548053019ULL) == (((9788220716785002294ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)286)) + (((/* implicit */int) (signed char)72))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [13U])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)14101))))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-7)) | (((/* implicit */int) var_2))))) ^ (max((632540676U), (((/* implicit */unsigned int) (short)-14102)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14102)) ? (2063443258U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25)))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) : (8658523356924549335ULL)));
            }
            var_23 = ((/* implicit */unsigned short) 17969250898704841901ULL);
        }
        /* vectorizable */
        for (unsigned short i_3 = 4; i_3 < 12; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) arr_1 [14U]);
            var_25 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_3 - 1]))));
        }
        for (short i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)0)), ((~(max((arr_7 [i_0] [(_Bool)1] [i_0] [i_4]), (((/* implicit */long long int) (unsigned short)8022))))))));
            var_27 = ((/* implicit */int) (short)-2853);
        }
        var_28 |= ((/* implicit */unsigned char) (_Bool)0);
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
    {
        var_29 ^= (((~(arr_10 [i_5] [(signed char)2] [(_Bool)1]))) | (arr_10 [12] [i_5] [(short)2]));
        var_30 |= ((/* implicit */signed char) max((17969250898704841912ULL), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (signed char)-90)), (var_0))) - (((((/* implicit */_Bool) 8658523356924549322ULL)) ? (var_0) : (((/* implicit */int) (short)-2853)))))))));
        arr_15 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)14101)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_14 [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5])))))) ? (((/* implicit */int) max((((/* implicit */short) var_5)), ((short)32580)))) : ((+(((/* implicit */int) (unsigned short)55775))))))) : (((arr_12 [i_5] [i_5] [i_5]) + (arr_12 [i_5] [i_5] [i_5])))));
    }
    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 1) 
    {
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) arr_17 [i_6 + 2]))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (arr_18 [i_6]))))))) >= (((/* implicit */int) arr_17 [i_6 + 2]))));
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_18 [i_6])) ? (var_8) : (((/* implicit */int) (signed char)73)))), ((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_18 [i_6 - 1])) ? (arr_18 [i_6 + 1]) : (arr_18 [i_6 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    }
    var_34 = ((/* implicit */unsigned char) (+(((3066397143U) | (((/* implicit */unsigned int) var_11))))));
    var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-14102)) / (8388608)))) : ((((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) var_11)) ? (545816573U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_3))))))))));
}
