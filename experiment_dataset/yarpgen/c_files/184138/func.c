/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184138
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 *= ((/* implicit */unsigned char) var_6);
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_2])) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))))));
                var_16 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */unsigned int) var_2)) : (var_11)))));
            }
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((arr_2 [i_0] [i_1]) == (arr_2 [(short)9] [i_1]))))));
            arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_1]))));
        }
        for (int i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            arr_14 [i_0] = ((/* implicit */int) ((short) arr_7 [i_0] [i_3 - 1] [i_3 + 1]));
            arr_15 [(unsigned char)7] [i_3] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1986672286)) ? (-4886223917307646419LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8415))))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            var_18 += ((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_3 + 1]) * (4294901760U)));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!((_Bool)0)));
                var_19 = ((/* implicit */unsigned int) ((long long int) var_10));
                arr_20 [(short)6] [(short)6] = ((/* implicit */unsigned char) ((_Bool) ((arr_0 [i_4] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                var_20 = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)16455)));
            }
            arr_21 [2LL] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_3 + 2] [0ULL] [0ULL] [i_0]);
        }
        var_21 = ((/* implicit */short) min((var_21), (((short) ((((/* implicit */int) arr_3 [4ULL] [(unsigned char)14] [i_0])) < (-1))))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)77));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_26 [0LL] = ((/* implicit */short) ((int) 3237032499U));
            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_5]))));
        }
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            arr_32 [(signed char)5] [i_8] = ((/* implicit */short) ((unsigned int) ((arr_16 [i_7] [i_8] [i_8] [i_8]) / (arr_16 [i_7] [i_7] [i_8] [3]))));
            arr_33 [(unsigned char)8] [i_7] [(unsigned char)8] = max((((((/* implicit */_Bool) arr_0 [i_8] [i_7])) ? (((((/* implicit */int) arr_11 [(short)9] [i_8] [i_8])) | (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) -574482313)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((signed char) (signed char)62))))));
            arr_34 [i_7] = ((/* implicit */int) ((((/* implicit */long long int) max((var_2), (arr_9 [i_8] [i_7] [i_7] [i_7])))) - (((((((/* implicit */_Bool) (short)-13619)) ? (((/* implicit */long long int) -1)) : (1729382256910270464LL))) | (((/* implicit */long long int) 3268244705U))))));
        }
        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_24 -= ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_12 [i_7] [i_7] [i_7])), (arr_35 [i_9] [2U])))) ? (((/* implicit */long long int) arr_30 [(unsigned short)0] [(unsigned short)0])) : (((((/* implicit */long long int) arr_27 [(unsigned short)1])) ^ (-5563711844692828026LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_7] [i_7])) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (signed char)51))))))))));
            arr_37 [i_9] = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_7]))) != (18446744073709551615ULL))));
        }
        arr_38 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_5)) + (((/* implicit */int) var_8))))))) * (var_11)));
    }
    var_25 = ((/* implicit */long long int) ((max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) 1131134775)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))) != (((/* implicit */int) var_6))));
    var_26 = ((/* implicit */int) ((unsigned int) max((0U), (((/* implicit */unsigned int) (short)-1)))));
}
