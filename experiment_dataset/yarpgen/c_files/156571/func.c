/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156571
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_18 = (short)1023;
                var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2]))) : (((((/* implicit */_Bool) (short)-1023)) ? (var_0) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))))))));
                var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) != (max((0ULL), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)3] [i_1 + 3]))))));
                var_21 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (unsigned char)135)))));
            }
        } 
    } 
    var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)127)) : ((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) 762066983704432328LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (16042055959233762924ULL))));
    /* LoopSeq 4 */
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_23 = ((/* implicit */short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-1)), ((short)1023)))) ? (((/* implicit */int) ((short) 2147483647))) : (((/* implicit */int) arr_9 [10U] [i_2] [i_2])))))));
            var_24 ^= (~(((((/* implicit */_Bool) arr_9 [i_2] [(_Bool)1] [12ULL])) ? (((/* implicit */int) arr_9 [i_2] [(_Bool)1] [i_3])) : (((/* implicit */int) arr_9 [i_2] [(signed char)0] [i_3])))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_8 [i_2] [i_2] [i_5 - 1]))) * (((max((16042055959233762924ULL), (((/* implicit */unsigned long long int) (short)31240)))) % (2404688114475788690ULL)))));
                        var_25 ^= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_8 [i_6] [16] [i_4]))))))), ((~(((((/* implicit */int) (unsigned char)71)) | ((-2147483647 - 1))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_26 = (i_2 % 2 == zero) ? (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_5 - 1])) << (((((/* implicit */int) arr_7 [i_2] [i_5 - 1])) - (61156))))))))) : (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_5 - 1])) << (((((((((/* implicit */int) arr_7 [i_2] [i_5 - 1])) - (61156))) + (20816))) - (16)))))))));
                            var_27 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2]);
                        }
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_24 [i_8] [i_6] [i_5 - 1] [i_8] [i_8] |= arr_21 [i_2] [i_2] [i_5 - 1] [i_6] [i_5 - 1] [i_8] [i_6];
                            arr_25 [i_2] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-31240))))) ? ((-(((/* implicit */int) arr_18 [9ULL] [i_2] [i_2] [9ULL] [i_5 - 1])))) : (((((((/* implicit */int) arr_9 [i_5 - 1] [i_2] [i_5 - 1])) + (2147483647))) << (((arr_20 [i_5 - 1]) - (2981600525U))))));
                        }
                        for (short i_9 = 1; i_9 < 15; i_9 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 0ULL)) ? (72057594037927935ULL) : (((unsigned long long int) (unsigned char)248)))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)123)) ? (6023623449567625920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023)))))))));
                            var_29 *= ((/* implicit */unsigned char) (~(((unsigned int) (short)1023))));
                            var_30 -= ((/* implicit */unsigned char) arr_14 [i_2] [(_Bool)0] [i_2]);
                        }
                    }
                } 
            } 
            var_31 = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_2])), (arr_16 [(short)18] [(short)18] [i_2] [i_2] [i_2] [i_2]))))) << (((min(((~(((/* implicit */int) (short)-1024)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_23 [1ULL] [i_2] [i_4] [i_4] [i_2])) : (arr_10 [i_4]))))) - (198)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_2])), (arr_16 [(short)18] [(short)18] [i_2] [i_2] [i_2] [i_2]))))) << (((((min(((~(((/* implicit */int) (short)-1024)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_23 [1ULL] [i_2] [i_4] [i_4] [i_2])) : (arr_10 [i_4]))))) - (198))) + (27))))));
        }
        for (unsigned short i_10 = 1; i_10 < 18; i_10 += 4) 
        {
            arr_31 [i_2] = ((/* implicit */short) (+((-(((/* implicit */int) ((signed char) (_Bool)1)))))));
            arr_32 [i_2] [i_10] = var_7;
            var_32 -= ((/* implicit */short) (+(((/* implicit */int) (((-(0U))) != (((/* implicit */unsigned int) ((int) (unsigned short)6791))))))));
        }
        for (int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (short)2048))));
            var_34 = ((/* implicit */short) (~(min(((~(((/* implicit */int) arr_7 [i_2] [i_2])))), (((((/* implicit */int) arr_27 [i_2] [i_2] [i_11] [i_2] [i_11])) / (((/* implicit */int) (unsigned short)4096))))))));
        }
        var_35 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2]))))) % ((+(arr_12 [i_2] [i_2] [i_2])))));
    }
    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((((/* implicit */_Bool) ((int) 12059643162574508872ULL))) ? (((arr_11 [i_12] [i_12]) + (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) arr_10 [i_12])))) != (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_34 [i_12] [i_12])) ? (arr_26 [i_12] [i_12] [i_12] [i_12] [(_Bool)1]) : (((/* implicit */int) arr_14 [i_12] [i_12] [i_12]))))))))))));
        var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_6 [i_12] [i_12]))) == (max((((/* implicit */int) max(((signed char)-62), (((/* implicit */signed char) (_Bool)0))))), (((((/* implicit */_Bool) 13501633911954792977ULL)) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) arr_9 [i_12] [i_12] [i_12]))))))));
    }
    for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        arr_41 [i_13] [i_13] &= ((signed char) max((arr_19 [i_13] [i_13] [i_13] [i_13] [i_13] [(_Bool)1]), (((/* implicit */signed char) ((_Bool) arr_14 [(_Bool)1] [i_13] [i_13])))));
        var_38 = max((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_13] [6ULL] [i_13] [i_13] [(short)2])) * (((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_13] [i_13]))))), (((long long int) (!(((/* implicit */_Bool) var_3))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 16; i_14 += 3) 
        {
            for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                {
                    var_39 &= ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13] [i_14 - 1] [i_13]))) / (((((/* implicit */_Bool) arr_13 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13] [i_13] [i_14 - 1] [i_14 - 1] [i_13]))) : (0U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [(unsigned char)5] [0] [i_14] [i_14 + 1] [i_14] [i_15] [i_15]))))))))));
                    var_40 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) arr_19 [i_13] [i_14] [i_15] [i_14] [i_14] [i_14 - 1])))), (((/* implicit */int) ((short) ((arr_47 [i_13] [i_14] [i_15]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2403)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        for (short i_17 = 3; i_17 < 16; i_17 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */_Bool) min((min(((-(((/* implicit */int) (_Bool)1)))), (((int) arr_8 [(unsigned char)12] [i_14] [i_15])))), (-1653645570)));
                                var_42 |= ((/* implicit */int) arr_22 [i_13] [i_14] [i_14 + 1]);
                                var_43 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) arr_45 [i_13] [i_15] [i_16] [i_17 + 1])), (((short) arr_19 [i_13] [i_14] [i_15] [i_16] [i_14] [i_17]))))) - ((-((~(((/* implicit */int) arr_6 [i_13] [i_14]))))))));
                                var_44 = ((/* implicit */short) arr_13 [i_14]);
                                var_45 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_13] [i_13])) ? (((((/* implicit */_Bool) arr_33 [i_13])) ? (0) : (((/* implicit */int) arr_21 [i_13] [i_13] [i_15] [i_16] [i_13] [i_17 - 2] [i_14])))) : (((/* implicit */int) (unsigned char)250))))), (max((((/* implicit */long long int) (+(arr_38 [i_13] [i_13])))), (var_16)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_18 = 2; i_18 < 9; i_18 += 1) 
    {
        var_46 += ((/* implicit */unsigned int) ((unsigned long long int) 1011951576));
        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1852798779686453718ULL)))) ? (((/* implicit */int) (short)1024)) : (((/* implicit */int) ((signed char) arr_37 [i_18 - 1])))));
        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (short)-1)))))))), (min((min((4294967295U), (((/* implicit */unsigned int) (short)18336)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_48 [(short)1] [(short)1] [(short)1] [i_18] [i_18]))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
        {
            for (short i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                {
                    arr_64 [i_18 - 2] [i_18] [i_18] [2] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_40 [i_18 + 2]))))));
                    arr_65 [(unsigned short)6] [i_18] [i_18] [i_20] = (-((-(((/* implicit */int) arr_42 [i_18 + 1] [i_18 + 1] [i_18])))));
                    var_49 -= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned char)191))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
    {
        for (unsigned short i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            {
                arr_70 [i_22] [i_21] = ((min((arr_67 [i_21] [i_22]), (arr_69 [i_22] [i_21] [i_21]))) + (((/* implicit */int) ((short) arr_69 [i_21] [i_21] [i_21]))));
                var_50 = ((/* implicit */unsigned char) max(((-(arr_67 [i_21] [i_22]))), (((/* implicit */int) ((signed char) ((signed char) var_3))))));
            }
        } 
    } 
}
