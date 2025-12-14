/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148137
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
    var_18 = ((unsigned int) var_0);
    var_19 = ((/* implicit */short) var_16);
    var_20 *= ((/* implicit */unsigned char) min((var_7), (((/* implicit */int) ((short) var_14)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) var_10);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_22 *= (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [(unsigned char)4])));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [(unsigned char)13] [(unsigned char)13] [(unsigned char)13] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))));
                            arr_12 [i_0] [i_1] [(signed char)3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0] [i_0] [(unsigned char)1] [i_0])))) * (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_0)))));
                            var_23 = ((/* implicit */unsigned int) var_5);
                            var_24 += ((/* implicit */unsigned char) ((arr_10 [i_3 + 1] [i_3] [i_3] [i_3] [i_3]) | (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)-51)) | (((/* implicit */int) (_Bool)1)))));
                arr_16 [i_0] = ((/* implicit */long long int) ((unsigned char) var_6));
                var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_16) ? (var_6) : (((/* implicit */unsigned long long int) var_7))))) ? (var_13) : (((/* implicit */int) var_17))));
            }
        }
        var_26 = arr_2 [i_0] [i_0] [i_0];
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_21 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_14)))));
            var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    {
                        var_28 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31534)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33980)))))) ? (((/* implicit */int) var_11)) : (((var_1) ? (var_13) : (((/* implicit */int) arr_24 [i_6] [(_Bool)1] [(unsigned short)6]))))));
                        var_29 = ((/* implicit */short) arr_20 [i_6]);
                        var_30 *= ((/* implicit */unsigned char) ((unsigned short) var_2));
                    }
                } 
            } 
            arr_29 [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (short)16813)) | (((/* implicit */int) (unsigned short)34002))));
        }
        var_31 = ((/* implicit */unsigned int) arr_18 [i_6]);
    }
}
