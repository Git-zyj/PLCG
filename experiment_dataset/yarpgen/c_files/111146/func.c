/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111146
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? (8904385023880587912LL) : (((/* implicit */long long int) ((/* implicit */int) min((((short) (short)174)), ((short)188)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min(((~(2005635084804077247LL))), (((/* implicit */long long int) (unsigned short)11221)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) ((unsigned short) (unsigned short)48737));
                        var_20 = ((/* implicit */short) (~(((((/* implicit */int) arr_8 [9] [i_0] [i_2] [6U])) & (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3]))))));
                        var_21 = ((/* implicit */unsigned char) ((((arr_7 [i_0] [i_0] [(unsigned char)18] [i_2] [i_3] [22ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (short)174)) ^ (((/* implicit */int) var_6)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                arr_17 [i_4 - 1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-21084)) ? (((/* implicit */unsigned long long int) arr_2 [i_4 - 2])) : (((unsigned long long int) (unsigned short)11221))));
                var_22 -= ((/* implicit */long long int) ((unsigned short) (signed char)(-127 - 1)));
            }
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) 2240162727U);
                arr_21 [i_4] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6276)) | (((/* implicit */int) (unsigned short)11223))))) ^ (36028797018963967ULL)));
            }
            for (int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_3 [i_4 - 1] [i_4]))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */int) (unsigned short)48743)) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) (signed char)84)))) : (((/* implicit */int) arr_12 [i_8] [6])))))));
                            var_26 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) arr_8 [i_10] [i_10] [i_10] [i_5])))));
                            arr_30 [i_10] [i_9] [i_8] [i_8] [i_5] [(short)9] [(short)9] = ((((/* implicit */_Bool) (short)2373)) ? (((/* implicit */int) (short)5598)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                        }
                    } 
                } 
                arr_31 [i_4] [i_5] [i_8] = ((/* implicit */_Bool) ((int) arr_18 [i_4 - 1] [i_4] [i_4 - 1]));
            }
            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)16))))) : (((/* implicit */int) (signed char)-72))));
        }
        for (short i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                var_28 = ((((((/* implicit */int) (short)193)) ^ (((/* implicit */int) (unsigned short)48676)))) % (((/* implicit */int) ((_Bool) 7243654370529708500ULL))));
                arr_37 [i_4] [i_11] [i_12] = ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)-91)));
            }
            for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_33 [i_4 + 1] [i_13])))))));
                var_30 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3220))) - (3019945883U)));
            }
            for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                var_31 -= (-(((/* implicit */int) (short)188)));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 1; i_15 < 21; i_15 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 4) 
                    {
                        arr_48 [i_4] [i_11] [i_14] [i_11] [i_16 - 1] = ((/* implicit */signed char) (-(((((-1743276588) + (2147483647))) << (((((/* implicit */int) (unsigned short)61784)) - (61784)))))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_16 - 1] [i_15 + 2])) - (((/* implicit */int) ((-1526128528) < (((/* implicit */int) (unsigned short)16817))))))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_15 - 1] [i_14])) ? (((/* implicit */int) arr_16 [i_4 - 2] [i_15 + 1] [i_14])) : (((/* implicit */int) arr_16 [i_4 - 1] [i_15 + 2] [i_14])))))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-187)) && (((/* implicit */_Bool) 4045960123U))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        arr_54 [i_4] [i_11] [i_14] [10] [(unsigned short)17] = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) arr_35 [i_4] [(unsigned char)22] [i_4])) & (var_3))) + (9223372036854775807LL))) << (((((/* implicit */int) ((arr_25 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_15] [i_15] [i_18]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_14] [i_15 + 1] [i_15 + 1])))))) - (1)))));
                        var_35 = ((/* implicit */unsigned char) 1743276587);
                        var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_15)) ? (-7663056517767339848LL) : (arr_2 [i_18])))));
                        var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295LL)) ? (((/* implicit */long long int) -1743276588)) : (7663056517767339847LL)))) ? (((/* implicit */unsigned long long int) (-(-7527003359724091782LL)))) : (13247147686904447795ULL));
                    }
                    for (int i_19 = 0; i_19 < 23; i_19 += 1) 
                    {
                        var_38 = ((/* implicit */int) ((unsigned long long int) -72057594037927936LL));
                        arr_57 [i_4] [i_11] [5] [i_11] [14LL] = ((/* implicit */long long int) (+(((unsigned long long int) arr_16 [i_4] [i_11] [i_15]))));
                        var_39 = ((/* implicit */_Bool) (+(3079395049701897939LL)));
                        var_40 = ((/* implicit */unsigned char) arr_4 [i_4] [i_4] [i_4 + 1] [i_4]);
                    }
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) var_8))));
                }
                arr_58 [i_11] [i_14] [i_4] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)23468))));
            }
            arr_59 [i_4] [i_4] [i_11] = ((/* implicit */_Bool) (-((~(3331875517U)))));
        }
        for (short i_20 = 0; i_20 < 23; i_20 += 3) /* same iter space */
        {
            arr_62 [i_20] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_5 [i_20] [i_20]))))));
            arr_63 [i_20] [i_20] = ((/* implicit */int) arr_5 [i_20] [i_20]);
            var_42 = arr_23 [i_4] [i_4] [i_20];
            var_43 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)61002)) > (((/* implicit */int) (unsigned short)4533)))))) : (-4LL)));
        }
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_52 [i_4 - 2] [i_4] [2] [(unsigned short)0] [(_Bool)1] [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : ((-(arr_51 [i_4] [(_Bool)1] [i_4] [i_4] [i_4])))));
        var_45 = ((/* implicit */long long int) ((3331875522U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13432)))));
    }
    for (unsigned short i_21 = 2; i_21 < 22; i_21 += 3) /* same iter space */
    {
        arr_66 [(unsigned short)9] = ((/* implicit */unsigned int) ((int) ((signed char) (unsigned short)52119)));
        /* LoopSeq 1 */
        for (unsigned int i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            var_46 = ((/* implicit */signed char) ((unsigned int) 2653942053U));
            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((-7663056517767339835LL) > (((long long int) (unsigned short)65535)))))));
        }
        var_48 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_52 [i_21 - 1] [(_Bool)1] [i_21 - 1] [(unsigned char)20] [i_21 - 1] [20])) ? (arr_52 [i_21 - 1] [i_21 - 1] [i_21] [(signed char)0] [i_21 - 2] [16ULL]) : (((/* implicit */int) (unsigned short)13416)))) < (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)4503)) : (arr_52 [i_21] [i_21] [i_21 - 1] [(unsigned short)10] [i_21] [i_21 - 2])))));
    }
    var_49 = ((/* implicit */unsigned char) ((1743276587) >> (((4126764177U) - (4126764162U)))));
}
