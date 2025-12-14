/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109906
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
    var_12 = ((/* implicit */long long int) (short)8219);
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (short)8219))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned short) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) ((unsigned long long int) arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((int) ((int) -1819939302)));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_5 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_16 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)8219)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-26840)))));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (signed char)-121))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_18 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-8219)) ? (894503480U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24576))))));
                            arr_18 [10LL] [i_2] [i_2] [i_4] [i_5] = ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (short)-9508))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 894503480U))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_1] [i_3] [i_4] [i_5])) : (((/* implicit */int) (short)24576)))))))));
                            var_20 -= ((((/* implicit */_Bool) 2129032113)) ? (((/* implicit */long long int) 861384200)) : (4332139644629691602LL));
                        }
                    } 
                } 
            }
            for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    arr_26 [i_7] [i_7] [(signed char)14] [i_7] [i_7] = ((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (var_6));
                    arr_27 [i_6] [i_1] [i_1] = ((/* implicit */unsigned char) -759486586);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-117)) ? (arr_8 [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0))))));
                }
                for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_2] [i_2]) : (4373665650589022915LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) arr_10 [i_8] [11]))));
                    arr_32 [i_1] [i_8] [i_2] = ((/* implicit */long long int) (_Bool)1);
                    var_22 = ((/* implicit */unsigned long long int) arr_1 [(signed char)8]);
                }
                for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_23 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -548575979))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        arr_41 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) 2122172207);
                        var_24 = ((/* implicit */int) min((var_24), (arr_39 [i_1])));
                        arr_42 [i_10] [i_9] [i_9] [i_9] [i_6] [i_2] [i_1] |= ((/* implicit */_Bool) arr_28 [i_9]);
                    }
                    arr_43 [i_9] [i_6] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_1] [i_2] [i_6] [i_6] [i_6])) >> (((var_9) + (729048200)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) 4373665650589022926LL)) : (var_8)))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_1]))));
                }
                arr_44 [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)161);
                var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        {
                            arr_52 [i_1] [i_2] [i_11] [i_2] [i_2] [i_12] [i_13] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_11 [i_13] [i_2] [i_2])) == (894503477U)));
                            arr_53 [i_1] [i_1] [i_1] [i_1] [i_13] [i_1] |= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
                var_28 += ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11]))) : (arr_5 [i_1])));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_11])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11] [i_2])))));
                            arr_58 [i_2] [i_11] [i_11] = (unsigned char)173;
                            var_30 = ((/* implicit */_Bool) max((var_30), (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))));
                            var_31 = (!(((/* implicit */_Bool) 3400463836U)));
                        }
                    } 
                } 
            }
            var_32 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_1]))));
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                arr_61 [i_1] [13ULL] = ((unsigned short) -8627131700840952188LL);
                var_33 = ((/* implicit */signed char) 3400463815U);
            }
        }
        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            var_34 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)26)) == (1569079087))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
            arr_64 [i_1] [i_17] [i_17] = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_1] [i_1] [i_17]))));
        }
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) 759486596))));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            arr_71 [i_18] [i_18] = (signed char)122;
            var_36 = ((/* implicit */unsigned int) ((short) arr_12 [i_18] [0LL] [i_18] [i_18]));
        }
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((long long int) (signed char)126)))));
        arr_72 [i_18] = ((/* implicit */unsigned int) (signed char)-103);
    }
}
