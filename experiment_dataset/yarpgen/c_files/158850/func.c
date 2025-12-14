/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158850
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_11 -= ((((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 2])) ? (arr_7 [i_2 - 1] [i_2 + 4] [i_2 + 3] [i_2 + 3]) : (arr_7 [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_2 + 3]))) ^ (min((arr_7 [i_2 + 4] [i_2 + 4] [i_2 + 2] [i_2 + 3]), (arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 2]))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_4] = max((((/* implicit */int) min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))))), ((+(((/* implicit */int) (short)-12614)))));
                                arr_13 [i_0] [i_1] [i_2] [(short)3] [i_4 + 2] = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) arr_4 [i_6] [(unsigned char)15]);
                                var_13 += arr_8 [i_6] [i_6] [i_6];
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -396325289)) ? (arr_17 [i_10] [i_10] [i_8] [i_9]) : (arr_17 [i_10] [i_8] [i_8] [(short)2]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)42391))) ? (((/* implicit */int) min((arr_20 [(unsigned char)7] [(unsigned short)21] [i_8] [i_9] [i_10]), (((/* implicit */short) arr_8 [i_0] [(_Bool)1] [i_10]))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_0 [i_0]))))))))));
                                var_15 += ((/* implicit */int) arr_19 [i_9] [6U] [i_9] [6U]);
                                var_16 += ((/* implicit */unsigned int) (unsigned char)120);
                                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_9])), (2886976877675530713ULL)))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_9] [i_10])) : (((/* implicit */int) (unsigned short)24873)))) : (arr_3 [i_0] [i_8])))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_20 [i_10] [i_9] [(short)18] [i_1] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_25 [i_0] [(short)6] [i_8])), (4028423278421469407ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 1; i_11 < 20; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(arr_35 [i_11 - 1] [i_11] [i_11 + 3])))), (max((((((/* implicit */_Bool) arr_35 [i_11] [i_11] [(unsigned char)7])) ? (2886976877675530710ULL) : (((/* implicit */unsigned long long int) -1051913266)))), (arr_38 [i_11 - 1] [i_11 + 3])))));
                                var_19 -= ((/* implicit */unsigned char) arr_40 [i_11] [8LL] [8LL] [i_14] [i_13]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        for (short i_17 = 3; i_17 < 19; i_17 += 3) 
                        {
                            {
                                arr_49 [i_12] [i_11] [15] = ((/* implicit */short) (unsigned short)21746);
                                var_20 = arr_37 [i_13] [i_13] [(unsigned char)14];
                                var_21 = ((/* implicit */unsigned int) ((long long int) -2201657617588929897LL));
                                var_22 = ((unsigned long long int) (~(((((/* implicit */_Bool) arr_32 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1)))));
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_40 [i_11 - 1] [i_16] [i_17] [i_17 + 4] [i_16]), (arr_40 [i_11 - 1] [i_11 - 1] [i_17] [i_17 + 2] [i_13])))), (arr_38 [i_11 + 1] [i_17 + 3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 23; i_19 += 3) 
                        {
                            {
                                arr_56 [i_11] [i_12] [i_12] [i_13] [i_12] [i_19] [i_11] = ((/* implicit */unsigned long long int) arr_40 [i_12] [i_12] [i_13] [17LL] [i_11]);
                                var_24 -= ((/* implicit */unsigned long long int) ((arr_35 [i_11] [i_12] [i_11]) >= (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11] [i_12] [i_13] [i_11 + 3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 2; i_20 < 19; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 2; i_21 < 20; i_21 += 3) 
                        {
                            {
                                var_25 = ((_Bool) arr_46 [i_11]);
                                var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)24873))))), ((signed char)107))))) ^ (max((((/* implicit */unsigned long long int) arr_36 [i_11] [i_20 + 4])), (((arr_53 [i_11] [i_11] [(short)14] [i_11 + 3] [i_11] [i_11 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_11] [i_20] [i_21])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
                    {
                        for (long long int i_23 = 0; i_23 < 23; i_23 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) (+(((/* implicit */int) max((arr_61 [i_11] [i_11 + 2] [i_13] [i_22] [i_11] [i_22]), (arr_61 [i_11 + 1] [i_11 + 2] [i_11] [i_22] [i_11] [i_11]))))));
                                var_28 = (i_11 % 2 == 0) ? (((/* implicit */unsigned short) max((((max((2108362174708552697ULL), (8007766097656301421ULL))) << (((((long long int) arr_66 [(unsigned char)19] [(unsigned char)19] [(unsigned char)19] [i_22] [i_11] [i_23])) - (12265LL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_55 [i_11] [19] [i_13])), (-4511038012678595373LL)))))))))) : (((/* implicit */unsigned short) max((((max((2108362174708552697ULL), (8007766097656301421ULL))) << (((((((long long int) arr_66 [(unsigned char)19] [(unsigned char)19] [(unsigned char)19] [i_22] [i_11] [i_23])) - (12265LL))) + (7067LL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_55 [i_11] [19] [i_13])), (-4511038012678595373LL))))))))));
                                var_29 -= ((((((/* implicit */_Bool) (short)-6922)) || (((/* implicit */_Bool) -1608513284)))) ? (((/* implicit */int) arr_67 [i_11] [18ULL] [i_13] [i_22] [18ULL] [i_23])) : (arr_50 [i_13] [i_12] [i_13] [i_22]));
                                arr_68 [i_11] [i_12] [i_11] [(short)2] [i_23] [i_11] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) (signed char)-108)), (15559767196034020903ULL)))));
                                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_12] [i_23] [i_13] [i_22] [i_12] [i_11 + 2]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_24 = 0; i_24 < 25; i_24 += 2) 
    {
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_26 = 1; i_26 < 23; i_26 += 1) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_31 -= ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */_Bool) (short)11111)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (6055566620155228793LL))), (((/* implicit */long long int) (unsigned char)65)))));
                            var_32 = arr_70 [i_27];
                            var_33 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_77 [i_24]), ((!(((/* implicit */_Bool) arr_69 [i_27])))))))) == (((((/* implicit */_Bool) -6848946741893817727LL)) ? (16806675145096236591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20402)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_28 = 1; i_28 < 24; i_28 += 2) 
                {
                    for (long long int i_29 = 0; i_29 < 25; i_29 += 2) 
                    {
                        {
                            var_34 = max((min((15185605969606631914ULL), (((/* implicit */unsigned long long int) arr_73 [(_Bool)1] [(_Bool)1])))), (((/* implicit */unsigned long long int) ((arr_80 [i_28 - 1] [i_25]) < (((/* implicit */int) arr_70 [i_25 + 1]))))));
                            arr_84 [i_24] [i_25 + 1] [(unsigned char)16] [i_24] [(unsigned short)3] [i_24] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_69 [i_25 + 1]))))), (max((((((/* implicit */_Bool) arr_80 [i_24] [i_29])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_24]))) : (arr_79 [12ULL] [12ULL] [(unsigned short)0] [i_29]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_75 [i_29] [i_29] [2] [(short)1]))))))));
                            var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1])) ? (arr_72 [i_25] [i_25 + 1]) : (((/* implicit */long long int) arr_79 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1]))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_79 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1])), (arr_72 [i_25] [i_25 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_30 = 0; i_30 < 25; i_30 += 3) 
                {
                    for (unsigned long long int i_31 = 2; i_31 < 24; i_31 += 2) 
                    {
                        for (signed char i_32 = 0; i_32 < 25; i_32 += 2) 
                        {
                            {
                                var_36 += ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28664))) >= (1271171725978530775ULL)))))), (((/* implicit */int) arr_89 [i_25] [1] [1] [i_31 + 1] [8] [i_30]))));
                                var_37 -= ((/* implicit */unsigned char) arr_76 [i_24] [(short)14] [i_25] [i_24] [i_24] [i_32]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    for (unsigned long long int i_34 = 0; i_34 < 25; i_34 += 1) 
                    {
                        for (unsigned long long int i_35 = 0; i_35 < 25; i_35 += 1) 
                        {
                            {
                                var_38 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_82 [i_24] [4LL] [i_25] [i_33] [i_33] [i_33]))));
                                var_39 += ((/* implicit */unsigned char) arr_74 [i_24] [i_24] [i_24] [(_Bool)1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_36 = 0; i_36 < 25; i_36 += 1) 
                {
                    for (long long int i_37 = 0; i_37 < 25; i_37 += 4) 
                    {
                        {
                            var_40 = max((((min((((/* implicit */unsigned long long int) (short)18279)), (arr_78 [12ULL] [i_37] [i_36] [i_37]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_106 [i_24] [i_24] [i_24] [17ULL] [6LL])) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (short)-576))))))), (max((((((/* implicit */_Bool) -1130289688)) ? (15559767196034020903ULL) : (16350179717684726623ULL))), (((/* implicit */unsigned long long int) arr_69 [(short)15])))));
                            var_41 -= ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_91 [i_24] [i_25] [i_25] [i_24] [i_37]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
