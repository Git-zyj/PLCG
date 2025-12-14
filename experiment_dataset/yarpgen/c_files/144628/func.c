/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144628
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) 373886798U);
        var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4483102346029051122LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (min((-1583569830914747075LL), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6))))))), (max((max((((/* implicit */unsigned long long int) arr_1 [13] [13])), (4110990689461579624ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) (~(((int) var_9))));
                        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14335753384247972000ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((long long int) 9223372036854775807LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [(signed char)14])))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_14 |= ((/* implicit */long long int) arr_10 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_2 - 1] [i_3] [(signed char)14] [i_3]);
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1 + 1] [i_1])) ? (arr_3 [i_2] [i_1] [i_2 - 2]) : (arr_3 [i_2] [i_1] [i_2 + 1]))))));
                        }
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) ((((unsigned long long int) (signed char)112)) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (unsigned char)215)))))));
                            var_17 |= ((/* implicit */long long int) ((short) -6114687494189725209LL));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1285851459)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) arr_9 [i_0] [i_2]))))) % (((unsigned long long int) arr_11 [i_5] [i_2] [i_2] [i_2] [i_1 - 2] [i_1 - 2] [i_0]))));
                            var_19 = ((/* implicit */unsigned char) arr_6 [i_3] [i_2] [i_1] [(signed char)11]);
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), ((((_Bool)1) ? (14001900113049813383ULL) : (15458909379312915212ULL)))));
                        }
                        var_21 = ((/* implicit */long long int) ((_Bool) ((unsigned char) arr_1 [(signed char)3] [i_2])));
                        var_22 &= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))));
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_23 &= ((/* implicit */short) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))) : (7990126604352942442ULL)))) ? (((unsigned long long int) arr_4 [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_2] [i_2] [(signed char)16] [i_6])), ((unsigned short)63539))))))), (((/* implicit */unsigned long long int) ((unsigned char) (+(arr_0 [i_1])))))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7] [(short)20] [i_2] [i_1 + 1] [i_1] [(short)7]))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((-1703066480), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1])) != (((/* implicit */int) (unsigned char)144)))))))), (((long long int) arr_4 [i_1]))));
                            var_26 |= arr_18 [i_2 - 1] [i_2 + 2] [i_2 - 1];
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) arr_8 [i_0] [6] [i_1 - 1] [6] [i_6] [i_7]))))) ? ((-(arr_3 [i_1] [i_2 - 1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned long long int) -5878118791372011161LL);
                            var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_1] [(short)17] [i_2] [i_6] [i_1] [i_1 - 2] [(unsigned char)12])) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_6] [i_8] [i_1 - 2])) : (((/* implicit */int) var_8)))) > (((/* implicit */int) ((((((/* implicit */_Bool) 373886798U)) && (((/* implicit */_Bool) arr_19 [i_8] [i_2] [i_2] [i_6] [i_8] [i_8])))) || (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(short)5] [i_0])) || (((/* implicit */_Bool) 18446744073709551605ULL)))))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        arr_27 [i_1] [i_1] [i_2] [12] [(unsigned char)13] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_1]))))), (((((/* implicit */_Bool) arr_26 [i_1])) ? (13710531798900850207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_1 - 2] [7LL] [i_9])))))))));
                        arr_28 [i_2 + 2] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) min((var_8), ((short)32767)))) ? (min((((/* implicit */long long int) 3921080497U)), (8907336970336335269LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))), (((((/* implicit */_Bool) ((short) arr_26 [i_1]))) ? (max((((/* implicit */long long int) arr_12 [i_1] [i_1 + 1] [i_9])), (var_7))) : (((((/* implicit */_Bool) var_8)) ? (-7336074971820955938LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))))))));
                        arr_29 [i_1] [i_2] [1LL] [i_1] = ((/* implicit */short) ((signed char) ((short) ((((/* implicit */_Bool) 7236438964131867039LL)) ? (-7332555486802434946LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38708)))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_29 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1531700966)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10] [i_1 + 1] [i_10]))) : (arr_26 [i_10]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */_Bool) ((short) arr_16 [i_0] [13U] [i_2] [i_10]));
                            arr_35 [i_0] [0LL] [i_10] [i_10] [i_10] [i_11] &= ((/* implicit */unsigned int) var_0);
                            var_31 = ((/* implicit */short) ((arr_16 [i_2 + 2] [i_1] [i_2 - 2] [i_1 - 1]) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_2 - 1] [i_1 - 1])) : (((/* implicit */int) arr_16 [i_11] [i_11] [i_2 - 2] [i_1 - 1]))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)8008))))) : (((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) arr_4 [i_1]))))));
                        }
                        for (long long int i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            var_33 -= ((/* implicit */short) ((signed char) arr_34 [i_12 - 1] [i_10] [i_2 + 2]));
                            var_34 = ((/* implicit */unsigned int) arr_32 [i_2 + 2] [i_1 - 1] [i_1] [i_1] [i_1]);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_35 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_2] [i_13]))));
                        var_36 = ((/* implicit */short) arr_25 [i_0] [i_2]);
                    }
                }
            } 
        } 
    }
    for (short i_14 = 2; i_14 < 15; i_14 += 4) /* same iter space */
    {
        var_37 = ((unsigned char) ((((((/* implicit */_Bool) -694857508118644177LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8191)))) / (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
        arr_44 [i_14 - 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_14 - 2] [i_14 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_14 - 1] [i_14 + 1]))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_14 + 1] [i_14 + 1])), (2987834694396636403ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_14 + 1] [i_14 - 1]), (((/* implicit */short) var_6))))))));
    }
    for (short i_15 = 2; i_15 < 15; i_15 += 4) /* same iter space */
    {
        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [19ULL] [i_15 - 1] [i_15] [i_15] [i_15 - 2])) : (((/* implicit */int) arr_4 [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [(unsigned char)20])))) : (8992738869354183851ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_48 [i_15])) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) max((arr_37 [i_15] [i_15] [i_15] [i_15] [i_15]), (((/* implicit */int) arr_8 [i_15] [i_15 - 2] [i_15] [i_15] [i_15 - 1] [i_15]))))) : (min((arr_0 [1ULL]), (arr_40 [i_15]))))) : (max((min((((/* implicit */long long int) arr_33 [i_15] [i_15] [i_15 - 1] [i_15] [i_15])), (arr_22 [i_15] [i_15]))), (((/* implicit */long long int) arr_10 [i_15 - 1] [i_15] [i_15] [i_15] [i_15] [i_15 - 2] [i_15]))))));
        var_39 = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) 1U)), (min((4535574496949592989LL), (((/* implicit */long long int) (signed char)-60)))))));
    }
    for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        arr_51 [i_16] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_3)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */unsigned long long int) 2039879077U)) : (4110990689461579596ULL)))));
        var_40 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) ((arr_21 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) ? (arr_45 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_16] [i_16] [i_16] [i_16]))))))), (arr_45 [i_16])));
    }
    var_41 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))), (((((/* implicit */int) var_9)) | (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_3))))))));
    var_42 = var_9;
    var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (short)12757))))) ? (((/* implicit */long long int) var_1)) : ((+(var_4))))) << (((((var_7) + (2341558103736045461LL))) - (21LL)))));
}
