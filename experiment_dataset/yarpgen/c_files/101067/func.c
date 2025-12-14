/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101067
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))));
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((int) (unsigned short)5)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) 1937499487482493741ULL);
                            arr_16 [i_1] [i_3] [i_2 + 1] [i_1] [i_0 - 1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) var_6)) & (((/* implicit */int) arr_4 [i_0 - 2] [i_2 - 2])))), (max(((~(((/* implicit */int) var_6)))), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_11 [i_0 - 1] [(short)16] [i_1]))))))));
                        }
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_9))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_1] = var_10;
                            var_19 = ((/* implicit */signed char) var_12);
                        }
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            var_20 -= ((/* implicit */unsigned char) min((((((/* implicit */int) (short)-4668)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */int) arr_4 [i_0 - 1] [i_2]))));
                            arr_23 [i_1] = ((/* implicit */unsigned long long int) (~(min((((var_9) / (((/* implicit */int) var_3)))), ((+(var_2)))))));
                            var_21 = ((/* implicit */signed char) arr_0 [i_3]);
                            arr_24 [i_0] [i_1] [i_1] [i_0] [16] = ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_10 [i_0] [i_1]))))))), (var_10)));
                        }
                    }
                    arr_25 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 3; i_7 < 22; i_7 += 1) 
                    {
                        arr_29 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) 16509244586227057859ULL)))));
                        var_22 = ((/* implicit */unsigned char) ((long long int) arr_18 [i_0 - 2] [i_0 + 1] [(unsigned short)20] [(unsigned short)19]));
                    }
                    var_23 = ((/* implicit */short) ((signed char) var_6));
                }
            } 
        } 
    }
    for (long long int i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (long long int i_10 = 3; i_10 < 23; i_10 += 1) 
            {
                {
                    arr_37 [i_10] [i_8] [i_9] [i_10] = ((/* implicit */long long int) arr_36 [i_10] [i_10] [i_10]);
                    arr_38 [i_8] [i_10] [i_10] = ((/* implicit */short) arr_10 [i_8 + 3] [i_10]);
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 22; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((var_5) >= (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_0)), (arr_18 [(short)12] [i_9] [i_11 + 2] [i_12]))))))));
                                arr_47 [i_12] [(short)14] [i_10] [(short)14] [i_8] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_41 [12LL] [i_10 - 3] [12LL]), (arr_41 [(short)8] [i_9] [(signed char)4])))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)24924))) - ((~(arr_26 [i_8] [i_8] [i_9] [(signed char)10] [(signed char)10] [i_9])))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_26 [i_8 + 2] [i_8] [i_8] [(short)3] [15] [i_8]))));
                                arr_48 [i_8] [i_9] [18LL] [i_8] [i_10] = var_8;
                                arr_49 [(short)5] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((unsigned short) (~(max((((/* implicit */int) arr_36 [i_8 - 1] [i_10] [i_12])), (var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */short) (-(arr_0 [i_8 + 3])));
        var_27 = ((/* implicit */_Bool) ((short) (~(((arr_0 [(unsigned char)20]) << (((/* implicit */int) arr_27 [9U] [i_8] [i_8] [i_8] [i_8] [9U])))))));
        var_28 -= ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_46 [13U] [i_8] [i_8 + 2] [13U])))));
    }
    var_29 = ((/* implicit */unsigned char) -1432530010123317050LL);
}
