/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147596
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) arr_0 [i_0])));
                    arr_10 [i_0] [4U] [i_1] [4U] |= ((/* implicit */unsigned short) ((_Bool) ((long long int) (unsigned short)65535)));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) ((unsigned char) ((signed char) arr_6 [i_0] [i_1 - 1] [i_0] [i_0])));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((signed char) ((unsigned long long int) arr_5 [i_1]))))));
                            arr_17 [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) var_0)));
                        }
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((short) ((short) (_Bool)0)));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((signed char) arr_8 [(signed char)4] [(signed char)4])));
                            var_19 = ((/* implicit */long long int) ((unsigned char) ((signed char) (signed char)-75)));
                        }
                        for (unsigned int i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) ((short) arr_16 [i_1] [i_1] [i_0] [i_1] [i_0]))))));
                            arr_24 [(unsigned char)5] [i_1] [i_1] [i_0] [3U] = ((/* implicit */unsigned char) ((signed char) ((long long int) arr_6 [i_0] [i_1 + 2] [i_3] [9LL])));
                        }
                        arr_25 [i_0] = ((/* implicit */signed char) ((unsigned int) ((unsigned short) arr_4 [i_0] [i_0])));
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) arr_23 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_0 - 1])));
                        var_22 ^= ((/* implicit */_Bool) ((signed char) ((short) (unsigned char)223)));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) var_1)));
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_9] = ((unsigned short) ((unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            var_23 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) (short)31)));
                            arr_35 [i_0] [i_0] [i_2] [i_2] [(unsigned char)10] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_20 [i_0] [i_0])));
                            arr_36 [i_1 + 2] [i_1 + 2] [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) (_Bool)1)));
                        }
                        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            arr_39 [i_0] [3U] [i_0] [i_0] [i_10 - 1] = ((unsigned int) (short)-31);
                            var_24 += ((unsigned int) ((unsigned char) (short)-24));
                            var_25 = ((/* implicit */int) ((unsigned int) ((unsigned int) var_0)));
                            var_26 ^= ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) (_Bool)1)));
                            var_27 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) var_10)));
                        }
                        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            var_28 += ((/* implicit */long long int) ((unsigned char) ((unsigned int) (short)23)));
                            var_29 &= ((/* implicit */_Bool) ((signed char) ((unsigned short) arr_20 [i_1] [i_1])));
                            arr_42 [i_0] [i_0] [8LL] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((_Bool) (_Bool)1)));
                        }
                        arr_43 [i_1 - 2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) var_2)));
                        var_30 = ((/* implicit */_Bool) ((signed char) ((unsigned int) (signed char)44)));
                        arr_44 [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_30 [i_0] [i_0 - 2] [i_1] [i_0] [i_2] [i_8])));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned int) ((_Bool) ((_Bool) -13LL)));
        var_32 -= ((/* implicit */unsigned int) ((signed char) ((_Bool) var_0)));
    }
    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
    {
        arr_47 [i_12] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((long long int) var_9))));
        var_33 = ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((unsigned int) var_11))));
    }
    var_34 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) ((unsigned long long int) var_14))));
    /* LoopSeq 1 */
    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_14 = 3; i_14 < 9; i_14 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) ((signed char) (signed char)95))));
            var_36 *= ((/* implicit */_Bool) ((short) ((long long int) ((int) var_0))));
            arr_56 [i_13] = ((/* implicit */int) ((unsigned int) ((short) ((unsigned int) arr_37 [i_13] [(signed char)12] [i_14] [i_14] [i_14]))));
        }
        var_37 = ((/* implicit */unsigned short) ((unsigned int) ((int) ((unsigned long long int) (short)-32))));
    }
    var_38 = ((/* implicit */int) ((unsigned short) ((long long int) ((_Bool) var_4))));
}
