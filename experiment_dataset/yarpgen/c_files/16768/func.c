/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16768
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_3))));
        var_17 += ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 909057197U))));
            var_19 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((((int) 4294901760ULL)) + (65552))) - (16)))));
        }
        arr_6 [1LL] [1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)124))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26263)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)124))))) - (arr_10 [(signed char)0] [i_4]))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_2] [i_3] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) ^ (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    arr_18 [i_2] [i_5 - 1] [i_5 - 1] = ((/* implicit */short) var_10);
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        arr_26 [i_2] [i_3 + 1] [i_4 + 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((4294967295U) - (arr_19 [i_6] [i_3] [i_4] [i_3]))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (arr_22 [i_7 + 1] [i_7 + 3] [i_6] [i_4] [i_2] [i_2]))))));
                        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) -278025451225323344LL)) ? (((/* implicit */int) (unsigned short)62828)) : (((/* implicit */int) (short)13))))));
                    }
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29689)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((arr_16 [i_2] [i_2] [i_6] [i_8]) & (var_4))) : (((/* implicit */unsigned long long int) 1152921504606846720LL))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_4] [i_2]))) % (1152921504606846704LL)));
                        arr_29 [i_2] [0U] [i_3 + 2] [i_4 + 1] [i_6] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_3 + 2] [i_4 - 1] [i_4] [i_2]))));
                    }
                    for (unsigned short i_9 = 2; i_9 < 24; i_9 += 2) 
                    {
                        var_24 -= (+(arr_13 [i_3 + 1] [i_4 - 1]));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((long long int) (_Bool)1)) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 947285490U)))))))))));
                    }
                    for (unsigned int i_10 = 4; i_10 < 23; i_10 += 1) 
                    {
                        arr_35 [i_2] [i_3] [i_3] [(unsigned short)15] [i_3] = ((/* implicit */unsigned short) ((((unsigned int) 0U)) << (((((/* implicit */int) arr_7 [i_3 - 2])) - (54333)))));
                        arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 412732181U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1140548169900879282LL)))));
                    }
                    arr_37 [i_2] [i_2] [(unsigned char)6] = (!(((/* implicit */_Bool) ((arr_12 [i_6 - 1]) << (((((var_13) + (599149591))) - (6)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        arr_40 [i_3] [i_3 + 2] [4U] [i_6] [i_3 + 2] &= ((/* implicit */long long int) ((var_13) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_11] [i_11] [i_11] [i_3] [i_11])))))));
                        arr_41 [i_3 - 2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) arr_33 [i_2] [i_2] [(_Bool)1] [i_3] [i_3] [i_3] [i_2]));
                    }
                    var_26 = ((/* implicit */_Bool) ((arr_34 [i_3 - 1] [i_4 + 1] [i_4] [i_2] [i_6 - 1] [i_3 - 1]) & (arr_34 [i_3 - 1] [i_4 - 1] [2] [i_2] [i_6 - 1] [13U])));
                }
                var_27 = ((/* implicit */unsigned int) min((var_27), ((~(arr_10 [i_2] [i_3 - 2])))));
            }
            for (unsigned int i_12 = 1; i_12 < 24; i_12 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_11))) && ((!(((/* implicit */_Bool) (short)18161)))))))));
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) 9223372036854775807LL))));
                arr_44 [i_2] [i_2] [i_3 - 2] [i_12] = ((arr_24 [i_3 + 1] [i_12 - 1] [i_12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
            }
            var_30 = ((/* implicit */int) var_7);
            /* LoopSeq 2 */
            for (unsigned int i_13 = 1; i_13 < 24; i_13 += 3) 
            {
                var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(var_7))))));
                arr_47 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((1140548169900879259LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_50 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (+(((var_8) / (((/* implicit */int) arr_7 [i_2]))))));
                arr_51 [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_14])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) % (2908803429U))) : (3385910086U)));
            }
        }
        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            arr_56 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_55 [i_2])), (arr_30 [i_2] [(signed char)6] [i_15] [i_15] [0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2] [i_2]))) - (arr_19 [i_2] [i_15] [i_15] [i_15]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_15] [i_2] [i_2] [i_2])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_16 = 3; i_16 < 24; i_16 += 4) 
            {
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_2] [i_16 - 3] [i_15])))))));
                arr_60 [i_2] [(short)11] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_2])) ? (arr_52 [i_2]) : (var_4)));
            }
            for (int i_17 = 0; i_17 < 25; i_17 += 1) 
            {
                var_33 -= ((/* implicit */unsigned int) arr_55 [i_17]);
                arr_63 [i_2] = ((/* implicit */unsigned long long int) ((arr_42 [i_15] [i_17]) - (((/* implicit */long long int) arr_21 [i_2] [i_2]))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_18 = 2; i_18 < 24; i_18 += 2) 
            {
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (524287U) : (arr_14 [i_15] [(_Bool)1] [i_15] [i_2])));
                var_35 &= ((/* implicit */long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_14))));
                var_36 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_43 [i_18 - 1] [i_18 - 1] [i_15]))));
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_18 - 1] [i_18 - 1])) ? (2147483624) : (((/* implicit */int) var_6)))))));
            }
            for (signed char i_19 = 1; i_19 < 23; i_19 += 1) 
            {
                var_38 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-29689)) ? (((arr_10 [i_2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_15)) : (var_13)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
                var_39 &= ((((/* implicit */_Bool) (+(((/* implicit */int) (short)29688))))) ? (arr_15 [i_2] [i_2] [i_15] [i_19 - 1]) : (((((/* implicit */_Bool) arr_15 [i_2] [i_15] [i_15] [i_19])) ? (arr_64 [i_19 + 1] [i_15] [i_2]) : (var_8))));
                var_40 = ((/* implicit */unsigned int) ((unsigned short) 731360134252666834ULL));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    var_41 = ((/* implicit */int) (unsigned char)243);
                    var_42 *= ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) arr_33 [i_15] [i_15] [i_19 + 1] [i_19 + 2] [14LL] [i_19 - 1] [i_20])) : (((/* implicit */int) arr_33 [i_15] [14U] [i_19 + 2] [i_19] [i_20] [4] [i_20]))));
                }
                /* vectorizable */
                for (unsigned int i_21 = 1; i_21 < 24; i_21 += 4) 
                {
                    var_43 -= ((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_19 + 2] [i_21] [i_21] [i_21]);
                    var_44 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_57 [i_2] [i_2] [i_21 - 1]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_22 = 1; i_22 < 23; i_22 += 4) /* same iter space */
                    {
                        arr_79 [i_2] [i_15] [i_19 - 1] [i_21 + 1] [i_22] [i_15] = ((/* implicit */int) ((((/* implicit */long long int) ((int) var_9))) | (8503940292080653432LL)));
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_21 - 1] [i_21] [i_21] [i_15] [i_21 + 1] [i_21])) ? (arr_61 [i_21 - 1] [i_21] [i_21 - 1] [i_15]) : (arr_61 [i_21 + 1] [i_21 + 1] [i_21] [i_15]))))));
                    }
                    for (unsigned long long int i_23 = 1; i_23 < 23; i_23 += 4) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_21])) ? (arr_52 [i_15]) : (((/* implicit */unsigned long long int) arr_59 [i_15] [i_19] [i_2] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_2] [i_2] [(short)5] [(short)5] [i_2] [i_2] [i_2]))) : (arr_16 [i_19 + 2] [i_15] [i_23 + 2] [i_21 - 1]))))));
                        var_47 = ((/* implicit */short) (_Bool)1);
                        var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_2] [i_2] [i_2] [(short)22] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1)))))));
                        arr_84 [i_2] [i_15] [i_19 - 1] [i_21 - 1] [i_23] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (arr_61 [24U] [i_19 - 1] [(unsigned short)16] [i_2])));
                    }
                    for (unsigned long long int i_24 = 1; i_24 < 23; i_24 += 4) /* same iter space */
                    {
                        var_49 -= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) - (-726717233)));
                        arr_87 [i_2] = ((/* implicit */int) (short)-29274);
                    }
                    for (unsigned char i_25 = 0; i_25 < 25; i_25 += 1) 
                    {
                        arr_91 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_73 [4] [i_15] [i_2] [i_2] [i_15] [i_2]);
                        arr_92 [i_2] [i_15] [i_19] = ((/* implicit */unsigned char) arr_86 [i_21] [i_21]);
                    }
                }
            }
            /* vectorizable */
            for (unsigned int i_26 = 1; i_26 < 21; i_26 += 2) 
            {
                var_50 = ((/* implicit */short) ((((/* implicit */int) arr_83 [i_2])) <= (((/* implicit */int) var_6))));
                var_51 ^= ((/* implicit */short) ((((/* implicit */long long int) var_8)) > (((long long int) var_15))));
                arr_96 [i_2] [i_2] = ((unsigned short) (short)(-32767 - 1));
                arr_97 [i_2] [i_2] [(_Bool)1] = ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((262144U) >= (((/* implicit */unsigned int) arr_59 [i_2] [i_15] [i_2] [i_2])))))) : ((~(2327298139U))));
                var_52 ^= (~(((/* implicit */int) ((_Bool) (_Bool)1))));
            }
            var_53 += ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */int) arr_45 [i_2] [i_2])) > (((/* implicit */int) var_1))))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_71 [i_2] [i_2] [i_2] [i_15])) : (((/* implicit */int) var_3))))))));
        }
        arr_98 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-29274)) ^ (((/* implicit */int) (_Bool)1))));
        arr_99 [(signed char)18] &= (unsigned char)106;
    }
    var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) ((signed char) min((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))))));
    var_55 = ((/* implicit */unsigned short) (short)-29699);
    var_56 = ((/* implicit */unsigned long long int) var_14);
}
