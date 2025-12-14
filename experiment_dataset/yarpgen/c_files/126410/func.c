/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126410
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (((((/* implicit */int) (unsigned char)224)) ^ (((/* implicit */int) arr_2 [i_0])))))) ^ (((/* implicit */int) (unsigned char)27))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_3] [i_3]))));
                        arr_11 [i_0] [8LL] [i_1] [i_1] |= ((/* implicit */signed char) (-(max((arr_6 [i_1] [i_1] [i_1] [i_3 - 1]), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (unsigned char)32);
                            arr_15 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_0] [i_1] = ((long long int) ((((/* implicit */_Bool) (unsigned char)49)) ? (arr_7 [i_0] [i_0] [i_2]) : (((/* implicit */int) arr_5 [i_1] [i_2] [i_2] [i_0]))));
                            var_20 = ((/* implicit */unsigned char) arr_1 [i_0]);
                        }
                    }
                    arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned int) min((max((((/* implicit */int) (unsigned short)13717)), (1806479253))), (((/* implicit */int) arr_3 [i_0] [i_0])))));
                }
                for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (int i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_1 + 3] [i_0] [i_6] = (-(((((/* implicit */_Bool) ((long long int) arr_23 [i_0] [i_1] [1LL] [i_0] [i_1]))) ? (((unsigned int) (short)32767)) : (((/* implicit */unsigned int) ((arr_19 [i_0] [i_0] [i_0]) / (((/* implicit */int) var_14))))))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 1421613677U);
                                arr_26 [i_0] [i_0] [i_0] [i_6] [i_7] [(signed char)19] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_1 - 2] [i_0] [i_7 - 1])) && (((/* implicit */_Bool) arr_19 [i_1 - 1] [i_0] [i_7 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_0] [i_7 - 1])) && (((/* implicit */_Bool) arr_19 [i_1 - 2] [i_0] [i_7 + 1])))))) : (7406239404031386840LL)));
                                arr_27 [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned short) (signed char)126);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_5]);
                }
                for (long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    arr_31 [13LL] [i_0] [i_0] [i_8] = (((+(((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_8] [i_0])))))) + (((int) (+(((/* implicit */int) (unsigned char)49))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 22; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (signed char)126);
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 32640))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_18 [i_1] [i_1]))))))));
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) -6)) + (1421613678U)))))) ? (((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 1] [i_11] [i_11])) : (((/* implicit */int) (short)-11424))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_12 = 2; i_12 < 22; i_12 += 3) 
                        {
                            arr_44 [i_8] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */signed char) (+(-197700972)));
                            arr_45 [i_0] [i_1] [i_0] [8] [i_12] = ((/* implicit */long long int) arr_40 [i_0] [i_1] [(_Bool)1] [i_11]);
                            arr_46 [6] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_41 [6LL] [i_12 - 1] [i_8 + 1] [i_11] [i_1 + 2] [6LL] [i_11]));
                        }
                        for (short i_13 = 2; i_13 < 21; i_13 += 1) 
                        {
                            var_26 = (-(((/* implicit */int) (short)32640)));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 2530119446U))) ? (((/* implicit */long long int) ((int) -8747991076020741502LL))) : (((((long long int) arr_9 [i_0])) / (((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_8] [i_8])) ? (arr_20 [i_0] [i_0] [i_8] [i_11] [i_13] [(unsigned short)0]) : (-4865335057095628166LL)))))));
                        }
                    }
                    arr_49 [2] [i_1] [i_0] = (i_0 % 2 == 0) ? (((((arr_6 [i_0] [i_1] [i_8] [i_8 + 1]) >> (((arr_22 [i_0] [i_1 + 3] [i_8] [i_8] [i_0]) - (14386888912866680141ULL))))) >> (((arr_6 [i_0] [i_1 - 1] [i_8] [i_8 + 1]) - (3490355864904652461LL))))) : (((((((arr_6 [i_0] [i_1] [i_8] [i_8 + 1]) + (9223372036854775807LL))) >> (((((arr_22 [i_0] [i_1 + 3] [i_8] [i_8] [i_0]) - (14386888912866680141ULL))) - (9068871177242298378ULL))))) >> (((((arr_6 [i_0] [i_1 - 1] [i_8] [i_8 + 1]) - (3490355864904652461LL))) + (6292035516866508129LL)))));
                }
                arr_50 [i_0] [(signed char)17] [i_1] = ((/* implicit */short) ((((long long int) ((((/* implicit */int) (short)-14845)) | (-2048554853)))) / (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0])))));
                /* LoopSeq 1 */
                for (signed char i_14 = 2; i_14 < 22; i_14 += 1) 
                {
                    arr_53 [i_1] [i_14 - 1] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_14] [i_0] [i_1]))) & (max((((((var_6) + (9223372036854775807LL))) << (((arr_22 [i_14] [i_14] [i_14 - 2] [i_1 - 2] [i_1]) - (14386888912866680177ULL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [9] [2ULL] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (-197700972))))))));
                    var_28 = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (short)-11431)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_14])))) / (((/* implicit */int) (unsigned short)35708)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        for (int i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            {
                var_29 = ((/* implicit */int) arr_57 [i_15]);
                arr_58 [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -4865335057095628165LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -4865335057095628153LL)))) : (((((/* implicit */long long int) ((/* implicit */int) (short)7819))) + (4865335057095628166LL))))) / ((-(((-6614904625360924888LL) / (((/* implicit */long long int) -1498610667))))))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        {
                            var_30 |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (+(6614904625360924901LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */long long int) ((/* implicit */int) arr_65 [i_15] [(unsigned char)18] [10LL] [i_17] [i_17]))) * (arr_59 [i_15]))))));
                            arr_67 [i_15] [i_15] [i_17] [i_18] [i_16] = ((/* implicit */long long int) arr_56 [i_16]);
                            var_31 = ((/* implicit */unsigned int) (-(-6614904625360924903LL)));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned long long int) arr_64 [i_16]);
            }
        } 
    } 
}
