/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148694
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)3)) ? (-1LL) : (((((/* implicit */_Bool) 10302066349293219138ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : ((-9223372036854775807LL - 1LL))))));
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)102)))))) % (((/* implicit */int) ((12668699817444978751ULL) != (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1] [i_0]) / (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))))));
            var_15 = ((/* implicit */_Bool) max((4673735210136750542ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)9] [(short)9] [i_0])) ? (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1])) : (min((((/* implicit */long long int) 0)), ((-9223372036854775807LL - 1LL)))))))));
            var_16 = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)29638), ((unsigned short)35897)))) << ((((((-(arr_4 [i_0] [i_1 - 1] [i_1 - 1]))) + (6555466949190694326LL))) - (16LL)))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
            var_17 = ((/* implicit */short) var_10);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -10LL)) ? (((/* implicit */int) (unsigned short)15532)) : (-544790970))) | (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (min((((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_4] [i_3 - 1] [i_0] [i_3])), (-544790972))))))));
                        var_19 = ((/* implicit */unsigned char) arr_5 [i_0]);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_2 [i_3 - 1] [i_3] [(short)1])) - (((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) ((int) var_10))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 4; i_6 < 22; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) (-(((unsigned int) ((unsigned short) (-9223372036854775807LL - 1LL))))));
                            var_22 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (arr_4 [i_0] [i_3] [i_8]) : (((/* implicit */long long int) -544790972))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_6 - 1] [i_3 - 1])) : (((/* implicit */int) arr_0 [i_6 - 3] [i_3 - 1])))), (((/* implicit */int) arr_0 [i_6 + 1] [i_3 - 1]))));
                var_25 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) var_7)), (arr_20 [i_3 - 1] [i_3] [i_3 - 1] [i_6 - 1] [i_6 - 2]))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) 2147483644);
                            var_27 = ((/* implicit */_Bool) (~(7835630965865332811ULL)));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) 964982078U))));
                            arr_28 [i_3] [i_6] [i_6] [i_3] = ((/* implicit */int) ((_Bool) arr_25 [i_0] [i_3 - 1] [i_6 - 3] [i_3] [i_3]));
                        }
                    } 
                } 
            }
            for (long long int i_11 = 4; i_11 < 22; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7835630965865332841ULL)) ? ((~(((/* implicit */int) arr_17 [i_13] [i_12] [i_11 - 1] [i_0])))) : ((~(((/* implicit */int) arr_33 [i_0] [i_3] [17LL] [i_3 - 1]))))));
                            var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_3])), (((((/* implicit */_Bool) arr_33 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_33 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (signed char)-18))))));
                            var_31 = ((/* implicit */unsigned long long int) var_2);
                            arr_36 [i_3] [i_3 - 1] [i_3 - 1] [(unsigned short)2] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_11] [i_12]))))) : (min((((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (var_2)))));
                            var_32 = ((/* implicit */unsigned long long int) arr_15 [i_3 - 1] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 2; i_14 < 22; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        {
                            var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_14 - 1]), (arr_5 [i_14 - 2])))) ? (((/* implicit */unsigned long long int) arr_5 [i_14 - 1])) : (var_5)));
                            var_34 = ((/* implicit */int) ((((unsigned long long int) ((signed char) arr_1 [i_14]))) << ((((~(((/* implicit */int) arr_16 [i_11 - 2] [i_11])))) + (36330)))));
                        }
                    } 
                } 
                arr_42 [i_0] [20] [i_11 - 2] |= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)29638))))), (((((/* implicit */_Bool) -4196325051462718898LL)) ? (var_5) : (10611113107844218777ULL))))), (((/* implicit */unsigned long long int) arr_33 [i_0] [i_3] [i_11 - 3] [i_11]))));
            }
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_18 = 0; i_18 < 23; i_18 += 3) 
                        {
                            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) var_2))));
                            arr_51 [i_3] [i_17] [i_16] [i_3] [i_3] [i_3] [i_3] = var_1;
                            var_36 ^= ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) arr_33 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])), (arr_31 [i_3 - 1] [(unsigned short)12] [i_3 - 1])))));
                        }
                        for (signed char i_19 = 4; i_19 < 21; i_19 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned char) ((((_Bool) ((int) (signed char)-8))) ? (min(((~((-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) 1350648569)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) : (-4196325051462718898LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                            arr_54 [i_0] [i_0] [3U] [i_0] [i_3] = ((/* implicit */_Bool) (short)32767);
                        }
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((arr_46 [(unsigned char)20] [i_16] [i_17]), (arr_46 [(signed char)8] [i_3 - 1] [i_16])))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_19 [i_0] [i_0] [i_0] [(unsigned short)16] [i_17] [i_0]))))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [(_Bool)1] [i_3] [19U] [i_3] [i_3])) || (((/* implicit */_Bool) (~(((/* implicit */int) min((arr_34 [(signed char)18] [20U] [(unsigned char)18] [i_17] [(unsigned char)18]), ((_Bool)1)))))))));
                        arr_55 [i_3] [8U] [i_16] [8U] [(short)6] = (unsigned short)65535;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    for (int i_22 = 2; i_22 < 20; i_22 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_61 [i_3] [22] [i_22 + 2] [i_22 + 3] [i_22]))))));
                            var_41 = ((/* implicit */unsigned char) ((unsigned int) (~(((var_4) >> (((((/* implicit */int) (short)32758)) - (32750))))))));
                            var_42 = ((/* implicit */long long int) min(((signed char)-7), ((signed char)61)));
                        }
                    } 
                } 
            } 
        }
        arr_66 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_29 [0LL])) / (((/* implicit */int) (short)32754)))), (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [(_Bool)1]))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */int) arr_26 [8ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (-544790970))))) : (((/* implicit */int) (unsigned short)22024))));
    }
    for (int i_23 = 1; i_23 < 20; i_23 += 2) 
    {
        arr_70 [i_23] = var_8;
        var_43 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) > (min((arr_68 [i_23]), (var_2)))))) % (((int) -3558998184738264299LL))));
        var_44 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min(((signed char)-8), (((/* implicit */signed char) (_Bool)0))))) ? (arr_68 [i_23 + 3]) : (((int) (short)32758)))));
        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))));
    }
    var_46 = ((var_7) & (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)21)))))));
}
