/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176970
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) (unsigned short)1810);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */short) 7249389931134979782LL);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                var_14 = ((/* implicit */short) ((var_5) / (((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))));
                var_15 = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2]);
                arr_8 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_0))));
                var_16 = ((/* implicit */unsigned int) var_6);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_2])) : (((/* implicit */int) var_10))));
            }
            for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                var_18 = ((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_3 - 2] [i_1] [i_3])) | (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_3 - 2] [i_1] [i_3])) >= (((/* implicit */int) arr_5 [i_3 - 3] [i_1] [i_3])))))));
                var_19 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_4)) + (((/* implicit */int) arr_10 [i_3 - 2] [i_3] [i_3 - 2] [i_3 - 1])))), (var_8)));
            }
            for (int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                arr_14 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) (short)25429)) ? (2068642714) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)32768))));
                arr_15 [i_0] = ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) arr_3 [i_4] [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (arr_13 [i_0]))))) : (((/* implicit */long long int) var_5)));
            }
        }
        arr_16 [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_6))))));
        var_20 = ((((/* implicit */_Bool) var_8)) ? (((arr_3 [i_0] [i_0] [i_0]) / (arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (var_5) : (((/* implicit */int) (signed char)15))))) == (3792014233004479520ULL))))));
    }
    for (unsigned char i_5 = 4; i_5 < 23; i_5 += 4) 
    {
        var_21 = max((((((((/* implicit */long long int) var_8)) == (6260736862655547762LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_5] [i_5]))))) : (arr_18 [i_5 - 2]))), (((((/* implicit */_Bool) min(((unsigned char)22), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)34931)), (var_5)))) : (arr_19 [i_5 - 3] [i_5 - 3]))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((0LL), (((/* implicit */long long int) (unsigned char)187)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) : (arr_20 [i_5] [i_5]))))))) ? (((((/* implicit */_Bool) (unsigned short)23362)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))))) : (var_6)));
    }
    var_23 = ((/* implicit */long long int) var_1);
    var_24 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -114112830)) ? (var_3) : (((/* implicit */long long int) 859223864))));
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), ((signed char)-100)));
                            arr_34 [i_6] [i_7] [i_7] [i_8] [i_9] [i_10] [i_10] |= ((/* implicit */long long int) var_10);
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_6] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (short)-5385)))))) : (2924377725194141757LL)));
                            arr_35 [i_8] [i_10] = ((/* implicit */int) arr_18 [i_10]);
                            arr_36 [i_7] [i_7] [i_8] [i_9] [i_9] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_25 [i_6] [i_7] [i_7])) : (((/* implicit */int) (short)-5385))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_39 [i_6] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_22 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            var_28 = ((/* implicit */unsigned char) arr_24 [i_6]);
        }
        for (int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            arr_42 [i_6] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_12] [i_12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
            var_29 -= ((/* implicit */unsigned char) arr_28 [i_6] [i_6] [i_12]);
            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) arr_30 [i_12] [i_12] [i_12]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_28 [i_6] [i_12] [i_12])))) : (var_6)));
            arr_43 [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned char) arr_30 [i_6] [i_6] [i_6]));
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((arr_29 [i_12] [i_12] [i_12]) + (9223372036854775807LL))) << (((((arr_37 [i_12]) + (89563725))) - (13))))))));
        }
        /* LoopSeq 1 */
        for (int i_13 = 1; i_13 < 16; i_13 += 1) 
        {
            var_32 = ((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_13]);
            arr_48 [i_6] [i_13] &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)126)) >> (((((/* implicit */int) var_4)) - (62574)))));
            arr_49 [i_6] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_46 [i_6]))) < (((/* implicit */int) ((((/* implicit */int) (signed char)-33)) <= (((/* implicit */int) var_10)))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_15 = 1; i_15 < 21; i_15 += 4) 
        {
            for (signed char i_16 = 4; i_16 < 19; i_16 += 3) 
            {
                for (signed char i_17 = 2; i_17 < 21; i_17 += 4) 
                {
                    {
                        arr_60 [i_14] = -7902901595748539166LL;
                        /* LoopSeq 2 */
                        for (signed char i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned char) arr_55 [i_17] [i_15] [i_14]);
                            arr_63 [i_14] [i_15] [i_15] [i_16] [i_16] [i_17] [i_18] = ((/* implicit */int) arr_59 [i_18] [i_17] [i_15] [i_14]);
                        }
                        for (signed char i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
                        {
                            arr_66 [i_14] [i_15] [i_16] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_14] [i_15] [i_15 - 1])) ? (((/* implicit */int) arr_55 [i_14] [i_19] [i_15 + 1])) : (((/* implicit */int) arr_55 [i_19] [i_15] [i_15 - 1]))));
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_16 + 2] [i_17 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (var_5)))) : (-6633360410835948000LL))))));
                            var_35 = ((signed char) ((((/* implicit */_Bool) (unsigned short)65175)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)75))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) arr_61 [i_14] [i_17 - 2]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            for (int i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                for (short i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    {
                        arr_75 [i_14] [i_20] [i_21] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_14 - 1])) ? (((/* implicit */int) arr_55 [i_14 - 1] [i_14 - 1] [i_20])) : (((/* implicit */int) arr_17 [i_14 - 1] [i_14 - 1]))));
                        /* LoopSeq 3 */
                        for (long long int i_23 = 0; i_23 < 22; i_23 += 4) 
                        {
                            var_37 *= ((/* implicit */signed char) 1326269534051882455LL);
                            var_38 *= ((/* implicit */signed char) 3243802759U);
                            arr_78 [i_14] [i_14] [i_14] = ((/* implicit */signed char) arr_67 [i_23]);
                            arr_79 [i_14] [i_20] [i_21] [i_21] [i_23] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)60671)) ? (3643559688U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98)))));
                            var_39 = ((/* implicit */short) ((((/* implicit */int) arr_71 [i_14 + 2])) * (((/* implicit */int) arr_71 [i_14 + 2]))));
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */signed char) (+(3192061352294957003LL)));
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_14 + 1])) || (((/* implicit */_Bool) arr_18 [i_14 + 1]))));
                            arr_82 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_14 + 2] [i_14 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_56 [i_24] [i_24]))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_77 [i_14] [i_14] [i_14 - 1] [i_14] [i_14] [i_14]))));
                            arr_86 [i_25] [i_20] [i_21] [i_21] [i_21] [i_22] [i_25] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (arr_58 [i_14 + 1] [i_20] [i_21] [i_22]));
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_61 [i_20] [i_25]) + (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_14])))))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (2LL))) : (arr_18 [i_14 + 1]))))));
                            var_44 = ((/* implicit */signed char) ((arr_83 [i_14] [i_20] [i_14 - 1] [i_22] [i_25]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_26 = 0; i_26 < 22; i_26 += 3) 
        {
            for (unsigned char i_27 = 4; i_27 < 21; i_27 += 1) 
            {
                for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 4) 
                {
                    {
                        var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned short)21856)) : (((/* implicit */int) (unsigned short)36219))))) ? (arr_97 [i_14] [i_14] [i_14 + 2] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16727))));
                        var_46 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) != (((/* implicit */int) arr_84 [i_14] [i_26] [i_27] [i_28] [i_26] [i_28])))) ? (arr_68 [i_14] [i_26]) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) / (((/* implicit */int) arr_67 [i_28])))))));
                        var_47 = ((/* implicit */int) var_12);
                        arr_99 [i_14] [i_27] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)124)) / (var_5)));
                    }
                } 
            } 
        } 
    }
}
