/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103468
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((int) arr_1 [i_0 - 1]))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_1 [i_0 - 2])) | (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 + 1])), ((unsigned short)64723))))));
        var_20 = ((short) ((long long int) (_Bool)1));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_21 -= ((/* implicit */unsigned char) ((((arr_6 [i_2] [i_2]) << (((((/* implicit */int) arr_1 [i_1])) - (72))))) & (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_5)), (var_16))))))));
            arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) (short)3763)), (((arr_3 [(unsigned char)7]) / (arr_3 [i_1])))));
            var_22 = ((/* implicit */signed char) ((long long int) arr_5 [i_2]));
            arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_4 [i_1])))))) : (((((/* implicit */_Bool) ((arr_6 [i_2] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_2])), (arr_0 [i_1])))) : (((((/* implicit */int) arr_7 [i_1] [i_2] [i_2])) | (((/* implicit */int) arr_4 [i_1]))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) | (var_2)));
            arr_16 [i_1] |= ((/* implicit */short) (~(var_19)));
        }
        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (4294967295U)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) - (2301339409586323456LL))) : (((/* implicit */long long int) var_14))))) ? (min((-7487379273568070622LL), (((/* implicit */long long int) min((arr_11 [i_7] [i_4] [i_1]), (var_7)))))) : (((((((/* implicit */_Bool) -1187641018)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7]))))) | (((long long int) var_17))))));
                            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -9223372036854775789LL)) ? (((/* implicit */int) (unsigned short)19710)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (_Bool)0))))) : (((int) (unsigned short)45825))))));
                        }
                    } 
                } 
            } 
            arr_28 [i_1] = ((/* implicit */long long int) arr_8 [i_1]);
        }
        arr_29 [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (unsigned char)105)), (var_0)))));
    }
    var_25 += ((/* implicit */int) ((unsigned short) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_13)) <= (var_19)))))));
    var_26 &= ((/* implicit */long long int) ((((/* implicit */int) (short)3760)) | (((/* implicit */int) var_1))));
}
