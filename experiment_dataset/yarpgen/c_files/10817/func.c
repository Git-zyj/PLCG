/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10817
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) ((int) 9223372036854775787LL));
        var_13 = ((/* implicit */int) max((var_3), (((/* implicit */signed char) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_0))), ((unsigned short)65528)))), (var_7)));
        arr_3 [i_0] = ((/* implicit */long long int) ((min((((unsigned int) arr_1 [0LL])), (((/* implicit */unsigned int) ((short) var_1))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((max((2147483647), (2147483647))) / (-2147483647)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -2147483617))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((signed char) (_Bool)1));
                                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */short) -2147483647);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_1 [i_1]);
                                arr_25 [i_1] [i_1] [(unsigned short)3] [i_1] [14U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4544056348508305437ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-52)) + (var_7)))) : (arr_12 [i_2 + 2] [i_2 + 3] [i_2 + 3] [i_2 - 2])));
                                var_17 = ((/* implicit */unsigned short) arr_23 [i_7] [i_6] [i_2 - 1] [i_2 - 1] [i_1]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)40432)) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) & (((/* implicit */long long int) ((arr_10 [i_1]) >> (((arr_0 [i_3]) + (8223347427352786221LL))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) (signed char)127);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) 2147483627);
        /* LoopSeq 1 */
        for (unsigned int i_9 = 2; i_9 < 24; i_9 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                var_21 = ((/* implicit */signed char) var_5);
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)-48))));
                            var_23 = ((/* implicit */_Bool) var_8);
                            var_24 ^= ((/* implicit */unsigned short) ((549755813888LL) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_35 [i_8] [(short)13]))))));
                        }
                    } 
                } 
                arr_37 [i_10] [i_10] [i_9] [i_8] = ((arr_13 [i_8] [i_9 + 1] [i_8] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) var_2))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_36 [i_10] [i_9]))) / (((/* implicit */int) (signed char)-1))));
            }
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) arr_32 [i_9 + 1] [i_9 - 1]))) + (2147483647))) >> (((max((((/* implicit */unsigned int) var_11)), (arr_32 [i_9 + 1] [i_9 - 1]))) - (4101115772U))))))));
            arr_38 [i_9] = ((/* implicit */signed char) max((-2147483635), (((/* implicit */int) (unsigned short)47803))));
            var_27 = ((/* implicit */_Bool) 2147483647);
        }
        var_28 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [9ULL])) >= (var_11)))) % (((/* implicit */int) ((signed char) var_11)))));
    }
    for (signed char i_13 = 1; i_13 < 15; i_13 += 3) 
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((758366406) & (((/* implicit */int) (signed char)-93))))))) ? (((((/* implicit */int) (signed char)110)) | (((((/* implicit */int) (short)-29166)) - (((/* implicit */int) (unsigned short)22247)))))) : ((+(((((/* implicit */int) (signed char)-22)) & (var_0)))))));
        var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)199)) || (((((arr_31 [2] [i_13 - 1] [i_13 + 1]) << (((((/* implicit */int) (unsigned char)44)) - (18))))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_5)))))))));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)48)), ((unsigned char)8)))) ? (((17534537391916610928ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1183731176)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (var_7))))));
    }
    var_32 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6019))) - (var_10))))), (((/* implicit */unsigned long long int) var_9))));
}
