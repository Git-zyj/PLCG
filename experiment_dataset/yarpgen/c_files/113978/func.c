/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113978
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
    var_15 += var_0;
    var_16 = var_10;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_3] [i_1] [10ULL] [(_Bool)1] = ((/* implicit */int) ((short) ((unsigned char) (_Bool)1)));
                        arr_13 [(unsigned char)12] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) (short)22389)));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((int) var_12)));
        var_17 += ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) var_9)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((short) arr_10 [i_4])));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((int) var_13)));
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) (signed char)-92))))));
                var_21 -= ((/* implicit */unsigned int) ((int) ((unsigned long long int) var_14)));
            }
            for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                var_22 = ((/* implicit */short) ((signed char) ((_Bool) arr_18 [i_7 + 1] [i_7 - 1] [i_7 - 1])));
                var_23 = ((/* implicit */short) ((unsigned char) ((unsigned long long int) arr_17 [i_4] [i_7 - 1] [i_7])));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (short i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((int) ((unsigned int) var_1)));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned long long int) ((int) var_14))))));
                            var_26 = ((/* implicit */unsigned long long int) ((int) ((signed char) var_5)));
                        }
                    } 
                } 
                arr_30 [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) ((short) arr_9 [14ULL] [14ULL] [i_5]))));
            }
            for (unsigned char i_10 = 3; i_10 < 19; i_10 += 1) 
            {
                var_27 = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) (short)-22402)));
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        {
                            arr_39 [i_4] [(_Bool)1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) (short)0)));
                            arr_40 [i_4] [i_4] [i_5] [i_5] [(_Bool)1] [i_11] [i_12] = ((/* implicit */_Bool) ((short) ((short) 13ULL)));
                        }
                    } 
                } 
                arr_41 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */signed char) ((_Bool) ((signed char) arr_29 [2ULL] [i_10 + 1] [i_10 - 2] [i_4] [2ULL])));
                arr_42 [i_4] [i_4] [i_10 - 2] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) arr_8 [i_10 + 2])));
            }
            for (unsigned long long int i_13 = 4; i_13 < 20; i_13 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) ((_Bool) var_6))));
                var_29 = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) arr_29 [(_Bool)1] [(_Bool)1] [i_13 - 3] [i_13 - 3] [i_13 + 2])));
            }
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    {
                        arr_51 [i_4] [(_Bool)1] [(signed char)18] [(signed char)18] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((int) ((_Bool) (_Bool)1)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) ((short) 1626260295)))))));
                            arr_56 [i_15] [i_5] [16ULL] [i_5] [i_5] = ((/* implicit */int) ((_Bool) ((unsigned long long int) var_0)));
                        }
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            arr_60 [i_15] [(signed char)17] [i_15] [i_15] = ((/* implicit */unsigned char) ((short) arr_32 [i_4] [i_5]));
                            arr_61 [i_5] [i_15] = ((/* implicit */signed char) ((unsigned long long int) var_0));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((int) arr_10 [i_4])))));
                        }
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) var_12)));
        var_33 = ((/* implicit */_Bool) ((signed char) ((short) ((unsigned long long int) var_3))));
        var_34 += ((/* implicit */signed char) ((unsigned char) ((short) 33292288ULL)));
    }
}
