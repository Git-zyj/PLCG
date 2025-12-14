/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169381
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_8 [i_1] [i_2] [i_3] = ((arr_2 [(signed char)18] [i_1]) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_2] [i_2]))))));
                            var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) + (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0])))))))));
                        }
                    } 
                } 
                var_13 += ((/* implicit */signed char) ((max((((/* implicit */long long int) ((unsigned int) arr_0 [i_0]))), (arr_6 [(unsigned char)2] [i_1] [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-11), ((signed char)10)))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_7))));
                            var_15 = ((/* implicit */_Bool) max((((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-11)), (arr_9 [(_Bool)1] [(_Bool)1] [i_5 - 1])))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) > (22ULL)))))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_5 + 1] [i_1])) > (((/* implicit */int) arr_3 [i_5 + 1] [i_0])))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [16LL] [(short)1]))) / (((unsigned int) arr_9 [12LL] [i_1] [i_1]))));
                var_17 -= ((/* implicit */signed char) max((((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) arr_3 [i_1] [i_0])))), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */unsigned int) min((((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_3)))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) * (var_0))) == (((/* implicit */unsigned int) 973306782))))));
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)-71))));
                    arr_23 [i_8] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59459))) > (22ULL)));
                    arr_24 [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_6])) * (((/* implicit */int) arr_12 [(unsigned short)4] [i_6] [i_6] [i_6] [(unsigned short)4])))) + (((/* implicit */int) arr_9 [i_6] [i_6] [(unsigned char)3]))));
                }
                for (signed char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    var_22 += ((/* implicit */long long int) ((((((/* implicit */int) ((13U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [i_6])))))) + (((/* implicit */int) (signed char)-75)))) + ((+(((((/* implicit */int) (unsigned short)26704)) - (1432571394)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                arr_34 [(_Bool)1] [(_Bool)1] [(_Bool)1] [0] [i_10] [i_6] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)172))))));
                                var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_6] [i_7])) ? (((/* implicit */int) arr_27 [i_6] [i_11 + 1])) : (((/* implicit */int) arr_27 [i_6] [i_11 + 1]))))));
                                arr_35 [i_11] [i_10] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)19636))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)4341)), (arr_10 [i_6] [i_7] [18LL])))) ? (((((/* implicit */_Bool) arr_3 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6]))) : (arr_2 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_31 [i_11] [i_10] [i_9] [(signed char)7] [i_7] [(signed char)7])), (1507157616048587419LL))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-19637))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1507157616048587420LL)))) : (9223372036854775807LL))))));
                                var_25 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_6] [6] [14LL] [(signed char)16]))) - (arr_37 [i_14] [i_7] [i_12] [i_12]))) > (((/* implicit */unsigned long long int) var_9))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */unsigned int) arr_39 [i_7] [i_6] [i_12] [8U]);
                    arr_44 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_13 [i_6] [i_6] [(signed char)18])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) arr_41 [4LL] [4LL] [4LL] [i_6]))))));
                    arr_45 [i_6] = ((/* implicit */unsigned int) var_8);
                }
                for (signed char i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                {
                    arr_48 [(_Bool)1] [(short)12] [(short)12] [i_15] &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((-9223372036854775795LL) + (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [i_6])))))) ? (((/* implicit */long long int) 7U)) : (-2221155139041765086LL))));
                    arr_49 [i_15] [i_6] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((int) var_6)), (1884555363)))) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) max((arr_25 [i_6] [i_7] [i_7] [i_15]), (((/* implicit */short) arr_14 [i_6])))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? ((~(((/* implicit */int) arr_13 [i_15] [(unsigned short)6] [i_6])))) : (((int) arr_13 [i_6] [18U] [i_15])))))));
                    arr_50 [i_6] [(unsigned short)4] [i_15] [(short)12] |= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) arr_40 [i_6] [i_7] [0U] [(signed char)9] [i_15])), (var_7))))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)9)))) - (arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                }
            }
        } 
    } 
}
