/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109614
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned int) 226264532);
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((arr_10 [i_0] [i_4] [i_3] [i_4] [i_1] [i_0] [i_0]) & (arr_3 [i_3] [i_1] [i_0]))));
                                arr_12 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 436216077U)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)255))))), (max((arr_10 [i_2] [(_Bool)1] [i_2] [i_4] [i_4 + 1] [(_Bool)1] [i_1]), (((/* implicit */unsigned int) (unsigned char)104))))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((signed char) max((((((/* implicit */_Bool) 979205900560118425ULL)) ? (((/* implicit */unsigned int) var_16)) : (436216100U))), ((-(2123988810U)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */long long int) var_0);
                    var_21 = arr_4 [i_2];
                    var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) + (2123988806U)))) ? (2170978486U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_12)))))))) ? (min((min((((/* implicit */unsigned int) (unsigned short)16983)), (arr_1 [i_0] [i_1]))), (arr_1 [i_2] [i_2]))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_2 [i_2] [i_1])))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        arr_16 [19] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)8);
                        arr_17 [i_0] [(unsigned short)18] [i_5] = ((/* implicit */short) ((unsigned char) min((((/* implicit */int) ((signed char) arr_2 [i_2] [i_2]))), (max((var_7), (((/* implicit */int) arr_2 [i_2] [i_1])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) (short)-32115);
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_6] [i_2]))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))), (arr_23 [i_8] [i_6] [i_1] [i_1] [i_0]))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 82580490U))))))));
                            var_25 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] [i_1]);
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [i_0] [i_1] [i_1] [i_6] [i_9] = ((/* implicit */short) 2ULL);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)18194))))) ? (var_16) : (((/* implicit */int) (unsigned char)54))));
                            arr_31 [i_0] [i_6] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)18))))) : (((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32704)))));
                            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                        }
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_4), (((/* implicit */unsigned short) arr_14 [i_1] [i_0] [i_0] [i_6])))), (((/* implicit */unsigned short) (short)32692))))) ? (min((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1] [(short)4])), (4ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_27 [i_0] [i_1] [i_1] [i_0] [i_2] [i_6] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((short) 436216109U))), (var_12)))))));
                        arr_33 [i_0] [(unsigned short)5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-18195), (((/* implicit */short) (unsigned char)41)))))) : (arr_23 [i_0] [i_1] [i_2] [i_2] [i_6])));
                        var_28 &= ((/* implicit */_Bool) var_13);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [(unsigned char)13] [i_2] [(unsigned char)8]), (((/* implicit */unsigned int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) arr_25 [i_6] [i_2] [i_1] [i_0] [i_0])) ? (var_8) : (arr_3 [i_1] [i_2] [(signed char)5]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        var_30 += ((/* implicit */short) arr_14 [i_0] [i_10] [i_0] [(unsigned char)7]);
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_28 [i_0] [(unsigned char)5] [i_0] [i_0] [i_0]))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_38 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_29 [i_11] [i_2] [i_2] [i_0] [i_1] [i_0])))))))), (min((min((((/* implicit */unsigned long long int) arr_7 [i_11] [i_11] [i_11] [(short)2])), (17467538173149433188ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (arr_10 [i_2] [i_11] [i_2] [i_1] [i_2] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))));
                        arr_39 [(short)7] [i_1] [i_2] [i_11] = arr_1 [i_1] [(unsigned short)13];
                        arr_40 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_15 [i_0] [i_0])), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4150796540U)), (arr_23 [i_0] [i_0] [i_1] [i_2] [i_11])))) ? (((var_6) << (((var_16) - (423790230))))) : (((/* implicit */int) min((arr_0 [(_Bool)1]), (arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_8);
    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 2170978477U))) || (((/* implicit */_Bool) (~(var_9))))));
    var_34 = ((/* implicit */short) var_13);
}
