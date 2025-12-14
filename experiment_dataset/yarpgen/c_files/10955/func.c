/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10955
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) var_0)), (20ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((unsigned int) 3148574201U)), (((/* implicit */unsigned int) var_0))))));
    var_20 = ((/* implicit */short) (((((-(var_6))) + ((-(((/* implicit */int) var_13)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */int) (signed char)-92)), ((+(((/* implicit */int) (signed char)-74))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            var_22 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-92)), (((((/* implicit */int) var_16)) % ((~(((/* implicit */int) (unsigned short)24062))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [13ULL] [i_2] [i_1 + 1])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2] [i_1 - 2]))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(((/* implicit */int) (signed char)85)))))));
                var_24 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) | (arr_6 [i_0] [16ULL] [i_0] [i_0]))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (arr_9 [i_0] [i_1] [i_3] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [11U] [i_1])))))))))))));
                var_26 = ((/* implicit */unsigned int) arr_3 [i_3] [i_1 - 1] [i_1 + 1]);
                var_27 = ((/* implicit */short) ((long long int) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_3])))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_12 [i_0] [6LL] [(short)5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1490132078U)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_18)), (18446744073709551615ULL)))))));
                var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_4 [i_1 - 2] [i_1 + 1]) & (arr_4 [i_1 + 1] [i_1 - 2]))))));
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_4])) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)-91)))))) + (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) ((short) var_15)))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (arr_3 [i_4] [i_4] [i_4])));
            }
        }
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_14 [i_5]))));
        var_31 = ((/* implicit */int) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5])) ? (4044178219411645082LL) : (((/* implicit */long long int) ((4294967288U) % (arr_9 [i_5] [i_5] [i_5] [i_5]))))))));
        var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_14 [i_5]) : (arr_14 [i_5])))));
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5])) ? (arr_9 [i_5] [i_5] [i_5] [i_5]) : (arr_9 [i_5] [i_5] [i_5] [i_5])))), (((arr_16 [i_5] [i_5]) + (((/* implicit */long long int) arr_9 [i_5] [i_5] [i_5] [i_5])))))))));
        var_34 -= ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_5]))) ^ (arr_14 [i_5])))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */unsigned short) arr_17 [i_6]);
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
        {
            arr_23 [i_6] = (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) | (-456339078276398760LL))));
            arr_24 [i_6] [i_7] [i_7 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) % ((+(9007199254740976ULL)))));
        }
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_9 = 3; i_9 < 16; i_9 += 3) 
            {
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_9 - 2] [i_8] [i_8 + 1] [i_6])) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))) ^ (arr_14 [i_6])))));
                var_36 = ((arr_27 [i_9 - 2] [i_8] [i_9 - 2] [i_9]) || (((/* implicit */_Bool) (short)-28146)));
                var_37 = ((arr_15 [i_6]) % (arr_15 [i_9 - 2]));
                /* LoopSeq 3 */
                for (short i_10 = 1; i_10 < 15; i_10 += 1) 
                {
                    var_38 = ((/* implicit */long long int) arr_30 [i_6] [i_8]);
                    var_39 = ((/* implicit */_Bool) arr_4 [2] [2]);
                    arr_34 [i_8] [(unsigned char)10] [i_9 - 3] [i_9 - 1] [i_8] = ((/* implicit */unsigned char) arr_22 [i_9 - 2] [i_8]);
                    var_40 &= ((/* implicit */unsigned long long int) ((int) arr_5 [i_10 + 1] [i_9 - 2] [i_8] [i_6]));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_41 = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)3))))));
                    var_42 = ((/* implicit */long long int) ((unsigned long long int) arr_33 [i_6] [i_8] [i_9 - 2] [(unsigned char)13] [i_8 + 1] [i_8]));
                    var_43 += ((/* implicit */_Bool) ((arr_28 [i_6] [i_8 + 1] [i_9] [i_11]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_28 [i_11] [i_9] [i_8] [i_6]))));
                    arr_37 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((arr_3 [i_9 - 2] [i_8] [i_6]) ? (((/* implicit */int) arr_3 [i_9 - 1] [i_9] [i_9])) : (((/* implicit */int) arr_3 [i_9 - 3] [i_9 + 1] [i_8]))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        var_44 += ((/* implicit */long long int) (signed char)3);
                        var_45 = ((/* implicit */unsigned long long int) var_2);
                        var_46 = (((+(arr_6 [i_6] [i_8] [i_12] [i_8]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))) : (10ULL)));
                    }
                    arr_46 [i_8] [i_8 + 1] [i_8] [i_8 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [i_8 + 1] [i_8] [i_9 - 2] [i_9]))));
                    var_48 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)64512)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) arr_36 [i_8 + 1] [i_9 - 2]))));
                }
            }
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                arr_50 [i_6] [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_30 [i_8 + 1] [i_8]))));
                var_49 ^= ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) var_2))));
                var_50 ^= ((/* implicit */_Bool) arr_35 [(_Bool)1] [(_Bool)1] [i_8]);
            }
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (~((-(arr_9 [i_6] [i_6] [i_6] [i_6]))))))));
                /* LoopSeq 3 */
                for (unsigned int i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    arr_56 [i_8] [i_8] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_8 + 1])) ? (((/* implicit */int) arr_47 [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_10 [i_8 + 1] [i_8] [i_8 + 1]))));
                    var_52 ^= ((/* implicit */_Bool) (short)32765);
                    var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_16] [i_8] [i_15] [i_8 + 1])) ? (((/* implicit */int) arr_5 [i_6] [15ULL] [i_15] [i_8 + 1])) : (((/* implicit */int) arr_5 [i_6] [i_8 + 1] [i_16] [i_8 + 1]))));
                }
                for (long long int i_17 = 1; i_17 < 16; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((unsigned int) arr_61 [i_6] [i_18 - 1])))));
                        var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_6] [i_6] [i_15] [i_18 - 1])))))));
                        var_56 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (signed char)12)) | (((/* implicit */int) var_14)))));
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_57 ^= ((/* implicit */short) (_Bool)1);
                        var_58 = ((/* implicit */short) -1142020444);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_59 *= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6] [i_15])) ^ (((/* implicit */int) (unsigned char)192))))));
                        arr_70 [i_8] = ((/* implicit */short) ((-4769189365835036754LL) & (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_8] [i_8 + 1] [i_17 + 1])))));
                        arr_71 [i_8] [i_17] [i_15] [i_8] [i_8] [i_6] [i_8] = (!(((/* implicit */_Bool) arr_15 [i_8 + 1])));
                    }
                    for (unsigned char i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        var_60 += ((/* implicit */signed char) arr_26 [i_8]);
                        var_61 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (456339078276398760LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_8] [i_8 + 1] [i_8])))));
                        var_62 = ((/* implicit */long long int) ((arr_9 [i_8 + 1] [i_8 + 1] [i_17] [i_17 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10744)))));
                        var_63 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [17LL] [i_15])) | (((/* implicit */int) arr_72 [i_6] [i_8 + 1]))));
                        var_64 = ((/* implicit */long long int) arr_27 [i_17 + 1] [i_8] [i_17 - 1] [i_17 + 1]);
                    }
                }
                for (short i_22 = 2; i_22 < 13; i_22 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 4) 
                    {
                        arr_82 [i_23] [i_22] [i_8] [i_15] [i_8] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-108));
                        arr_83 [i_23] [i_8] [i_15] [i_8] [i_6] = arr_63 [i_6] [i_8 + 1] [i_15] [i_15];
                    }
                    for (int i_24 = 1; i_24 < 14; i_24 += 1) 
                    {
                        var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_73 [i_22 + 1] [i_22 + 1] [(_Bool)1] [i_22 + 1] [i_22] [i_22] [i_22 - 2])) ? (arr_84 [i_24 + 2] [i_22 + 2] [i_15] [i_8] [i_24]) : (arr_84 [i_24 - 1] [i_22 - 2] [i_15] [i_8] [i_24])));
                        var_66 = ((/* implicit */unsigned short) (~(((int) (unsigned short)46937))));
                        var_67 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)18113))));
                    }
                    for (unsigned long long int i_25 = 2; i_25 < 15; i_25 += 1) 
                    {
                        var_68 = ((/* implicit */unsigned short) max((var_68), (((/* implicit */unsigned short) (~(arr_43 [i_6] [i_6] [i_6] [i_25 + 1] [i_25] [i_8 + 1] [i_15]))))));
                        arr_91 [i_8] [i_8] = ((/* implicit */_Bool) arr_9 [i_25 - 1] [i_22 - 1] [i_15] [i_6]);
                    }
                    var_69 = ((/* implicit */int) ((((/* implicit */_Bool) arr_74 [i_8 + 1] [i_8] [i_22 - 2] [i_22] [11LL] [(short)12])) ? (arr_74 [i_8 + 1] [i_8] [i_22 - 2] [i_22] [i_22] [i_22]) : (arr_74 [i_8 + 1] [i_8] [i_22 - 2] [(signed char)4] [i_22] [i_8])));
                    var_70 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_58 [i_6] [10U] [i_8 + 1] [i_22 + 3] [(unsigned char)6]))));
                    arr_92 [i_22] [i_8] [i_8] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_8] [i_15] [i_15]))));
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_71 = ((/* implicit */_Bool) min((var_71), (((/* implicit */_Bool) (-(arr_81 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))));
                arr_97 [i_8] [i_6] [i_8] [i_8] = ((/* implicit */short) ((arr_68 [i_8] [i_8] [i_8 + 1] [i_6] [i_6]) + (arr_68 [i_8] [(_Bool)0] [i_8 + 1] [i_8] [i_8 + 1])));
            }
            arr_98 [i_8] [i_8] [i_6] = ((((/* implicit */_Bool) ((short) 4822656129225657269ULL))) || (((/* implicit */_Bool) 13624087944483894347ULL)));
            var_72 += ((/* implicit */unsigned long long int) ((unsigned int) ((arr_62 [i_6] [i_6] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28145))))));
        }
    }
    var_73 = ((/* implicit */unsigned char) var_12);
}
