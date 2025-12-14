/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105457
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [20ULL] [20ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (var_16))))));
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8ULL] [(unsigned char)9])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 1]))))) : (((unsigned long long int) ((unsigned char) (unsigned short)65535)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (((long long int) min((((/* implicit */unsigned long long int) var_11)), (var_8))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) min((4033309393U), (((/* implicit */unsigned int) min((((arr_0 [i_0]) ? (((/* implicit */int) arr_8 [i_2] [i_0])) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_0)))))));
                        arr_12 [i_0] [i_1] [(signed char)14] [(unsigned short)1] [(signed char)14] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                            arr_15 [i_0] [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((+(arr_13 [i_0 + 1] [i_1])))));
                            var_22 += ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_14 [19] [19] [i_2] [i_3] [i_0 + 1])))));
                        }
                        arr_16 [20LL] [i_1] [(short)11] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_0)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    }
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_19 [i_0] = ((/* implicit */short) var_16);
            arr_20 [(signed char)17] [i_0] = ((/* implicit */signed char) var_7);
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 4; i_8 < 20; i_8 += 2) 
                {
                    {
                        arr_29 [i_6] [i_6] = ((/* implicit */unsigned int) (((~(arr_26 [i_0 + 1] [(short)17] [i_7 - 1] [i_8 - 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_30 [(unsigned short)8] [i_6] [(unsigned char)6] [(unsigned char)15] [(_Bool)1] [i_8 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
            arr_31 [i_6] [i_0] [i_0] = ((/* implicit */signed char) var_3);
        }
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_23 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) var_0)))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (_Bool)1))));
            var_25 = ((/* implicit */short) ((((((/* implicit */int) min(((short)17076), ((short)-25175)))) + (2147483647))) >> (((((/* implicit */int) arr_17 [4ULL] [i_9] [i_9])) + (12720)))));
            var_26 = ((/* implicit */signed char) arr_28 [i_0] [(short)8] [i_0] [i_0]);
            arr_34 [i_9] = ((/* implicit */unsigned short) var_19);
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned char) (-(var_18)))))));
            arr_37 [i_0] [(short)20] = ((/* implicit */_Bool) var_8);
            arr_38 [i_0] = ((/* implicit */int) ((unsigned char) 8804800157343499340ULL));
            arr_39 [i_10] [17ULL] [7] = ((/* implicit */short) 4033309414U);
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) max((var_28), ((+((+(var_10)))))));
                var_29 = ((/* implicit */unsigned short) var_16);
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (+(((/* implicit */int) arr_9 [(unsigned char)16] [(unsigned char)5] [(unsigned char)5] [(unsigned char)15])))))));
                arr_42 [(short)14] [i_10] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            }
        }
        arr_43 [i_0] [(unsigned char)15] = ((/* implicit */unsigned int) arr_5 [i_0] [8ULL] [i_0]);
    }
    for (int i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        arr_46 [i_12] [7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_12] [(short)18])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-25195)) || (((/* implicit */_Bool) (unsigned char)127)))))))), (max(((-(var_17))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) ((unsigned int) (+((+(var_13))))));
                        arr_55 [(unsigned char)7] [i_14] [21] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17065))) * (var_17))))));
                    }
                } 
            } 
        } 
    }
    var_32 = var_18;
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((unsigned short)59922), (((/* implicit */unsigned short) (_Bool)1)))))));
                arr_60 [i_16] [i_17] [i_17] = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) arr_56 [i_17])) + (arr_58 [i_16] [i_17] [i_17])))));
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        {
                            var_34 &= ((/* implicit */signed char) var_9);
                            arr_66 [i_16] [i_17] [i_18] [i_16] |= ((/* implicit */long long int) (+(min((arr_62 [i_19]), (arr_62 [i_18])))));
                            arr_67 [i_17] [(unsigned short)15] [i_18] [i_17] [i_16] = ((/* implicit */short) ((unsigned short) (-(arr_56 [i_16]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
