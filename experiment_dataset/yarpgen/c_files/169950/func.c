/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169950
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)8] [i_0] [i_1] |= ((/* implicit */signed char) max((min((((/* implicit */int) (unsigned char)18)), ((-2147483647 - 1)))), (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_1] [i_3] [i_2] [i_1] [i_1]))));
                                arr_14 [i_1] [i_1] = ((/* implicit */int) var_13);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_13 [i_1]);
                            }
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_11 [i_1] [i_1] [(unsigned short)11] [i_3] [i_3])))) <= (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_2] [i_3] [(unsigned char)17])) <= (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_0])))))));
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */int) var_8)) * ((+(((/* implicit */int) (unsigned short)0)))))), ((+(((((/* implicit */int) var_1)) / (((/* implicit */int) arr_4 [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_6] [i_7])) | (((/* implicit */int) arr_17 [(unsigned char)0]))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_18 [i_7])))))))) : (((((/* implicit */_Bool) arr_7 [i_5 - 3] [i_8 + 3])) ? (((/* implicit */int) arr_23 [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_5 - 2] [i_6] [i_8 + 3] [i_5] [i_5]))))));
                                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_27 [i_6] [i_7] [i_8] [(unsigned short)9]))), (arr_4 [i_5 - 2] [i_8 + 2])))) % (((/* implicit */int) max(((unsigned short)40844), (arr_28 [(unsigned short)0] [i_5] [i_6] [(unsigned short)0] [i_8] [i_6]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+((((((~(((/* implicit */int) (unsigned char)10)))) + (2147483647))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)232)))) - (200))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_35 [(unsigned char)18] [(unsigned char)18] [i_7] [i_7] [(unsigned char)12] [i_7] [i_7] |= arr_20 [i_5 - 1] [i_6] [i_6];
                                arr_36 [i_5] [i_5] [i_7] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38986))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)24681)) ? (((/* implicit */int) (unsigned short)27825)) : (((/* implicit */int) (unsigned short)4))))))) && (((/* implicit */_Bool) (unsigned short)0))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((var_10), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_5 + 2])) <= (((/* implicit */int) (unsigned short)40844))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 2; i_12 < 21; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_51 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_16))));
                            arr_52 [i_12] [i_12] [i_15] [i_13] [i_14] [i_12 + 1] = ((((((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) var_14)))) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)38)) <= (((/* implicit */int) var_4))))))) != (((/* implicit */int) arr_38 [i_12 + 2] [i_12 + 2])));
                        }
                    } 
                } 
                var_25 = (unsigned short)27825;
            }
        } 
    } 
}
