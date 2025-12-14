/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174039
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
    var_20 *= ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) (+(2930474822U)));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) var_12)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned short) 987629344))) : (-832855468)));
                            var_23 = ((/* implicit */unsigned short) (~(arr_9 [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((int) var_11));
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_15 [i_5] [i_5] [i_5] = ((min((((/* implicit */int) min(((short)28015), (((/* implicit */short) var_17))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_5])) : (((/* implicit */int) var_19)))))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_0])), (arr_4 [i_0])))) - (192))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_25 *= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) max((var_6), (((/* implicit */short) (unsigned char)255))))), (arr_2 [i_0] [i_5]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54511)))));
                            arr_24 [i_7] [i_8] = (+(((((/* implicit */_Bool) min((arr_10 [i_7]), (((/* implicit */unsigned short) (signed char)25))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_7 + 1]))) : (((var_15) + (((/* implicit */unsigned int) ((/* implicit */int) (short)28008))))))));
                        }
                        arr_25 [i_7] [i_6] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) 832855452);
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((min((((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_5]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3978322211U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)28015))))))) << (((((/* implicit */int) arr_20 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])) - (43750))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (var_7))) <= ((-2147483647 - 1)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        arr_35 [i_11 - 1] = ((/* implicit */unsigned short) max((((((((/* implicit */int) arr_19 [i_9] [i_0])) >= (((/* implicit */int) arr_30 [i_10] [i_10] [i_10] [i_10])))) ? (max((((/* implicit */unsigned int) var_2)), (var_15))) : (((2361707559U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_6 [i_11 + 1] [i_10] [i_10] [i_11])))))));
                        arr_36 [i_0] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1933259731U)) || (((/* implicit */_Bool) arr_7 [i_11 + 4]))))) : (((((/* implicit */_Bool) arr_7 [i_11 + 2])) ? (((/* implicit */int) (short)10756)) : (((/* implicit */int) (unsigned char)163))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_11))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0] [i_9] [i_13] [i_12] [i_13] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_33 [i_13] [i_10] [i_9] [i_0]), (var_7))))))) : ((+(((((/* implicit */int) var_17)) - (((/* implicit */int) arr_19 [i_12] [i_10]))))))));
                            var_29 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_27 [i_10] [i_9]) >= (((/* implicit */long long int) min((var_18), (var_18))))))) <= (((((/* implicit */int) (unsigned char)2)) | (((/* implicit */int) ((short) (unsigned char)255)))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_12] [i_9] [i_14] [i_12] [i_14])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)65531))))) ? (min((((((/* implicit */_Bool) arr_32 [i_0] [i_9] [i_10] [i_12] [i_14])) ? (var_8) : (((/* implicit */unsigned int) 536870400)))), (((((/* implicit */_Bool) (unsigned short)5)) ? (2996148255U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)1)))) | (((/* implicit */int) arr_4 [i_9])))))));
                            var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_14] [i_12] [i_10] [i_0]))));
                            arr_45 [i_12] [i_0] [i_9] = ((unsigned short) -536870401);
                        }
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                        {
                            var_32 = 2147483647;
                            arr_48 [i_0] [i_12] [i_10] [i_12] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_5 [i_0])))) + (((((/* implicit */int) (signed char)-39)) / (((/* implicit */int) arr_42 [i_0] [i_10]))))))) ? ((-(min((var_18), (var_12))))) : (((((/* implicit */_Bool) (short)-10756)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (unsigned short)0))))));
                            var_33 = ((/* implicit */short) (-(2147483647)));
                            arr_49 [i_15] [i_12] [i_12] [i_0] = max((((((/* implicit */_Bool) 536870400)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_15] [i_15] [i_12] [i_10] [i_9] [i_9] [i_0])))), (((/* implicit */int) arr_21 [i_0] [i_0] [i_9] [i_9] [i_10] [i_12] [i_15])));
                        }
                        var_34 = ((/* implicit */unsigned short) 2147483647);
                        var_35 = ((/* implicit */unsigned short) 965279278);
                    }
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        arr_53 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0])) / (((/* implicit */int) (unsigned short)47077))))) ? (max((max((2703608063U), (((/* implicit */unsigned int) var_19)))), (((/* implicit */unsigned int) (_Bool)0)))) : (max((((((/* implicit */_Bool) 2361707559U)) ? (1298819041U) : (((/* implicit */unsigned int) -947217163)))), (((/* implicit */unsigned int) var_12))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)3084)) : (arr_33 [i_0] [i_9] [i_10] [i_17])));
                            arr_56 [i_17] [i_16] [i_10] [i_9] [i_17] = ((/* implicit */unsigned short) var_5);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_0] [i_9] [i_10] [i_16] [i_17])) ? (((/* implicit */int) arr_44 [i_17] [i_16] [i_10] [i_9] [i_0])) : (var_18)));
                        }
                    }
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_52 [i_0] [i_0] [i_9] [i_10]) + (arr_8 [i_0] [i_9] [i_10] [i_10]))), (((/* implicit */int) (signed char)-36))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), ((short)10186))))) : (max((((((/* implicit */unsigned int) arr_33 [i_9] [i_9] [i_9] [i_9])) ^ (var_8))), (((/* implicit */unsigned int) var_3)))))))));
                    arr_57 [i_10] [i_9] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_37 [i_0] [i_9])) ? (((/* implicit */int) (short)10756)) : (((/* implicit */int) var_16)))), (((/* implicit */int) arr_37 [i_9] [i_10]))));
                }
            } 
        } 
    }
}
