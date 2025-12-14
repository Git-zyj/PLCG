/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181338
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2])))))));
                    var_12 = ((/* implicit */signed char) min((var_2), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_2])) ^ (((/* implicit */int) arr_0 [i_0 + 1] [i_2])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) var_6);
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)105))));
    var_15 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)0));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_18 [i_3] [7] [i_4] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_7))) <= ((-(((/* implicit */int) (signed char)(-127 - 1)))))))), ((unsigned short)504)));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)125)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)5] [i_4] [(unsigned short)5])) ? (((/* implicit */unsigned int) 1555953260)) : (var_7)))) % (max((var_8), (((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_4] [i_5] [i_6])))))))))));
                            var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31542)) ? (1736337633U) : (((/* implicit */unsigned int) -2147483633))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */int) (short)-1)) / (((/* implicit */int) (short)-7969)))) : (((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1]))))) : (((unsigned int) (short)-24220))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */unsigned char) (signed char)33);
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 12; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_11 [i_3 + 3])))));
                            /* LoopSeq 3 */
                            for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned int) min((max(((+((-9223372036854775807LL - 1LL)))), (min((((/* implicit */long long int) arr_10 [i_3])), (-297642404424932809LL))))), (var_3)));
                                var_21 = ((/* implicit */signed char) ((var_4) == (max((((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                            }
                            for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) 
                            {
                                var_22 -= ((/* implicit */unsigned short) arr_30 [i_3 + 3] [(_Bool)1] [i_3 + 1] [i_7 + 1] [i_10 + 2]);
                                var_23 = ((/* implicit */short) max(((~((+(((/* implicit */int) (unsigned short)65504)))))), (((/* implicit */int) (unsigned short)511))));
                            }
                            /* vectorizable */
                            for (short i_11 = 0; i_11 < 14; i_11 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned short) var_5);
                                arr_34 [10] [(unsigned short)10] [i_7] [i_8] [(unsigned short)10] |= ((/* implicit */_Bool) (unsigned short)39582);
                            }
                            var_25 = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (long long int i_13 = 1; i_13 < 10; i_13 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                            {
                                var_26 = ((/* implicit */unsigned short) (-(18446744073709551599ULL)));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 16383U)) || (((/* implicit */_Bool) arr_33 [i_3 + 2] [i_3 + 1] [i_14]))))))));
                                arr_42 [i_3] [i_3] [i_13] [i_3] [i_14] [5ULL] = ((/* implicit */unsigned char) (_Bool)0);
                                arr_43 [i_3] [i_4] [i_4] [i_12] [i_13] [i_14] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_10))), ((+(var_3)))));
                            }
                            for (signed char i_15 = 1; i_15 < 12; i_15 += 4) 
                            {
                                var_28 = ((((((/* implicit */int) arr_41 [i_3 + 3] [i_13 + 2] [i_13] [i_15 + 2] [i_15 + 1] [i_3] [i_15 + 1])) * (((/* implicit */int) arr_41 [i_3 - 2] [i_13 + 2] [i_15] [i_15 + 2] [i_15 - 1] [i_3] [i_13 + 2])))) + (((/* implicit */int) ((((/* implicit */int) arr_41 [i_3 - 1] [i_13 + 4] [i_13 + 4] [i_15 + 2] [i_15 + 1] [i_3] [i_15 + 1])) != (((/* implicit */int) (signed char)-47))))));
                                var_29 = ((/* implicit */unsigned char) ((int) (((-(var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_3] [i_4] [i_3] [i_13 + 2] [i_15]))))));
                            }
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((min((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_7 [i_3 + 3]))), (((/* implicit */unsigned long long int) ((long long int) 127U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
