/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163375
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [9U] = ((/* implicit */signed char) max(((+((+(var_8))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7028))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [9LL])))))))));
        var_14 = ((/* implicit */int) (_Bool)0);
        var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1]);
        arr_6 [i_1 + 1] |= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_1 + 1]));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_3 + 2]);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((unsigned char) ((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))));
                        var_17 = ((/* implicit */_Bool) var_2);
                        arr_18 [(_Bool)1] = ((/* implicit */_Bool) arr_17 [i_2] [(unsigned short)9] [(unsigned char)2] [i_2] [5ULL]);
                    }
                } 
            } 
        }
        for (int i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)8247))));
                            var_19 -= ((/* implicit */signed char) arr_30 [i_2] [6ULL] [i_7] [i_7] [8LL] [i_8] [(_Bool)1]);
                            var_20 = ((/* implicit */long long int) ((arr_16 [i_6 + 1] [i_7] [i_9 - 1]) != (((/* implicit */unsigned long long int) (+(var_1))))));
                        }
                    } 
                } 
            } 
            arr_31 [i_6] [i_6] = ((/* implicit */int) ((unsigned long long int) arr_30 [i_6 + 2] [0LL] [i_6] [(short)7] [i_6] [(short)7] [i_6 + 1]));
            arr_32 [i_6] = arr_17 [i_2] [(unsigned char)9] [(unsigned char)9] [i_6 - 2] [i_2];
            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) arr_10 [6LL])) : (((/* implicit */int) var_0))));
        }
        for (signed char i_10 = 2; i_10 < 9; i_10 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3490442082U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)68))))))))));
            arr_35 [(unsigned short)0] [i_10 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2]))));
            arr_36 [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((((arr_7 [i_2]) + (arr_21 [i_10 + 1] [i_10 + 2] [(unsigned char)7]))) - (15395521376456801062ULL)))));
            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1041931645)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))) : (var_13)));
        }
        for (long long int i_11 = 1; i_11 < 11; i_11 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_4 [i_11 + 1] [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                arr_42 [i_11] [i_11 + 1] [8LL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_40 [8] [8] [i_11 + 1]))));
                arr_43 [i_2] [i_11] [i_2] = (-(arr_17 [i_11 - 1] [9LL] [i_11 - 1] [i_11 + 1] [i_11 - 1]));
                arr_44 [i_2] [i_11 + 1] [i_11] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)12));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_2] [(unsigned char)3])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_9)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_11))))));
                var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) -130066681)) ? (((/* implicit */int) (short)8190)) : (((/* implicit */int) (short)7028))));
            }
            var_27 = ((/* implicit */unsigned int) arr_28 [i_2] [3ULL] [(_Bool)1] [i_11 - 1] [i_11 - 1]);
        }
        var_28 = ((/* implicit */short) ((unsigned long long int) var_11));
        arr_45 [4LL] = ((/* implicit */long long int) (((-(var_12))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) << (((/* implicit */int) (signed char)7))))) ? (max((-3578003453422108719LL), (((/* implicit */long long int) min(((unsigned short)8), (((/* implicit */unsigned short) var_5))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
}
