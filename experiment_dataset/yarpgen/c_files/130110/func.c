/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130110
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
    var_18 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_14))) : (((/* implicit */unsigned long long int) var_2)))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_10)))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551594ULL))) : (((/* implicit */unsigned long long int) var_17))))));
    var_19 = ((((/* implicit */_Bool) -2058579385)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((var_14), (min((((/* implicit */unsigned long long int) var_2)), (var_15))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min(((+(min((((/* implicit */unsigned long long int) var_1)), (var_13))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) : (((var_7) ? (((/* implicit */unsigned long long int) var_2)) : (var_13))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_21 += ((/* implicit */int) ((long long int) arr_3 [i_0]));
        var_22 -= ((/* implicit */long long int) ((unsigned char) arr_0 [(_Bool)1]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (min((((/* implicit */unsigned short) (signed char)-90)), (arr_5 [i_1])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)26325))))) : (7970057275003824936ULL));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (39266525)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)0])) ? (((/* implicit */int) ((unsigned short) arr_4 [i_1]))) : (((/* implicit */int) min(((short)9254), (((/* implicit */short) var_10)))))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_12)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_23 -= ((/* implicit */signed char) min((var_16), (((/* implicit */unsigned long long int) 2058579398))));
                arr_13 [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (var_4) : (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28520)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3054651231U)))) : (max((var_13), (((/* implicit */unsigned long long int) var_8))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_24 = arr_11 [i_6] [21];
                                var_25 = ((/* implicit */signed char) var_15);
                                var_26 = ((/* implicit */unsigned char) var_2);
                                arr_24 [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_3] [i_6])) : (((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */int) (short)31962)) : (((/* implicit */int) (unsigned char)206)))));
                                arr_25 [i_5] [20] [19ULL] [12U] = ((/* implicit */_Bool) arr_8 [i_2 + 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (signed char i_8 = 4; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_31 [i_2] [i_3] [i_2 + 2] [i_7] [i_8] = ((/* implicit */unsigned char) ((int) arr_9 [i_2 + 1]));
                                arr_32 [i_2] [i_2 + 2] [(signed char)2] [i_2 + 2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */short) var_15);
                                var_27 = ((/* implicit */unsigned int) arr_20 [i_2] [i_2] [i_3] [i_4] [i_7] [i_8]);
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_3] [i_4] [i_8]))) <= (arr_17 [i_2 - 1] [i_2])));
                                var_29 -= ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_6))) ? (0ULL) : (((/* implicit */unsigned long long int) ((arr_29 [i_3] [i_3] [i_4] [i_7] [i_3]) ? (2858162174U) : (arr_30 [i_2] [i_2] [i_3] [i_4] [i_7] [i_4] [i_8 - 2]))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) ((unsigned char) arr_12 [i_2] [i_3] [i_4]));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_2] [i_2 + 2] [i_3] [(unsigned char)12] [i_2 + 2] [(unsigned char)12])))))));
                    var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_26 [i_2] [i_2] [i_2] [4U] [i_9])))));
                    var_33 = ((/* implicit */int) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_3] [i_9] [i_2 - 1] [(unsigned char)18])))));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    arr_38 [i_10] [i_2] [i_2] = var_16;
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) ((unsigned short) arr_37 [i_2 - 2] [i_11 + 1] [(_Bool)1] [i_11 - 2]));
                                var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_2 + 2]))));
                            }
                        } 
                    } 
                    var_36 &= ((/* implicit */int) var_5);
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 19; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_37 &= ((/* implicit */unsigned long long int) ((_Bool) arr_50 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2 + 1]));
                                var_38 ^= ((int) (unsigned char)255);
                                var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_2 + 2])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_13] [i_10] [i_3] [i_2]))) : (arr_14 [i_10] [i_10] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_15 = 4; i_15 < 21; i_15 += 3) 
                {
                    var_40 = ((/* implicit */_Bool) ((int) arr_23 [i_2 + 1] [i_2] [i_2 + 2] [i_15] [i_15 - 2] [(short)6] [i_15 - 4]));
                    var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)681)) : (((/* implicit */int) arr_10 [(short)7] [(short)7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) : (var_17)));
                    arr_54 [i_2] [i_2 - 2] [i_2] = ((/* implicit */unsigned long long int) var_17);
                    arr_55 [i_15] = ((/* implicit */short) var_9);
                    var_42 *= (_Bool)0;
                }
                arr_56 [i_2 - 2] [i_2 - 2] = ((/* implicit */signed char) min((min((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]), (((/* implicit */int) arr_29 [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 1])))), (max((2058579384), (((/* implicit */int) arr_43 [i_3] [i_2] [9LL] [i_2 - 2] [i_2 - 1] [16LL]))))));
                var_43 = ((/* implicit */unsigned int) max((max((arr_36 [i_2 + 1] [i_2 - 2] [i_2 - 1]), (var_4))), (min((((/* implicit */unsigned long long int) arr_27 [i_2 + 2] [i_2 - 1] [i_2 + 2])), (arr_36 [i_2 + 1] [i_2 - 2] [i_2 - 1])))));
            }
        } 
    } 
}
