/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16482
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    var_10 = ((/* implicit */short) (unsigned short)22380);
                    var_11 = (-(((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_2)) - (6000))))));
                    var_12 ^= ((/* implicit */unsigned int) max((((((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */short) var_1))))) & (((/* implicit */int) max((((/* implicit */short) var_7)), (arr_0 [i_1])))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)43155))))));
                }
                for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22381))) | (var_6))) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (min((((((/* implicit */int) (unsigned short)22381)) >> (((((/* implicit */int) (unsigned short)22362)) - (22331))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)43155)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3] [i_3] [(_Bool)1])))))));
                    var_14 = ((/* implicit */unsigned short) 1400914282726354745LL);
                }
                var_15 = ((/* implicit */short) (~(((/* implicit */int) max(((short)21327), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4))))))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_7)), (((long long int) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) (unsigned short)43160)))))));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)182)), ((unsigned short)43155)));
                            var_18 = ((/* implicit */unsigned int) ((((((long long int) var_7)) << (((((/* implicit */int) arr_16 [i_4] [i_5] [i_6])) - (57376))))) <= (((/* implicit */long long int) arr_22 [i_4] [i_4] [i_7] [i_8]))));
                            var_19 = ((/* implicit */short) var_9);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)22374), ((unsigned short)22381))))) ^ ((+(1171604697U)))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (1400914282726354739LL)))))) || (((((/* implicit */_Bool) (unsigned short)22381)) && (var_5))))))));
                        }
                    } 
                } 
            } 
            arr_27 [i_4] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_7))))));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    for (unsigned short i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) max(((unsigned short)43156), (((/* implicit */unsigned short) var_4))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43155)))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21)) ? (30796833U) : (((/* implicit */unsigned int) var_3))))) || (((/* implicit */_Bool) arr_34 [i_4] [i_4] [i_4] [i_4] [i_11 - 2])))))) | (((arr_13 [(unsigned char)13] [i_11 + 1]) << (((((unsigned int) var_7)) - (29U)))))));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */short) max((max((((/* implicit */unsigned int) (unsigned short)0)), (((unsigned int) var_8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_24 [i_9] [i_5] [i_4])), (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_0)))))))));
                var_26 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) / (((/* implicit */int) var_5))))));
            }
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_13 = 4; i_13 < 20; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) 1400914282726354765LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1400914282726354726LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                        var_28 = ((/* implicit */long long int) var_3);
                    }
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) var_7);
                        var_30 ^= ((/* implicit */int) ((unsigned char) var_0));
                        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) 7)) == (var_6))))));
                    }
                    var_32 = ((/* implicit */signed char) ((int) (unsigned short)43185));
                    var_33 = ((/* implicit */unsigned char) -1);
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 1; i_16 < 21; i_16 += 4) 
                    {
                        arr_49 [i_12] [i_12] [i_12] [7] [i_13] [i_12] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (short)23334)))));
                        var_34 -= ((/* implicit */int) ((arr_34 [i_4] [(unsigned char)9] [i_12] [i_13] [i_16]) == (arr_34 [i_4] [i_16] [i_12] [i_13] [i_16])));
                    }
                    var_35 = ((/* implicit */short) ((((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))) != (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                }
                for (long long int i_17 = 1; i_17 < 20; i_17 += 4) 
                {
                    var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [(short)20])) : (((/* implicit */int) arr_21 [i_4] [i_5])))), ((-(((/* implicit */int) (unsigned short)22369)))))))));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_17 + 1] [i_17] [i_17 + 1] [i_17] [i_17])) >= (((/* implicit */int) (unsigned short)22403))))) >> (((max((var_3), (((/* implicit */int) (unsigned short)22361)))) - (22330)))));
                }
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_19 = 2; i_19 < 21; i_19 += 1) 
                    {
                        var_38 = 2422616453U;
                        arr_58 [i_4] [i_5] [i_5] [i_5] [i_12] = ((/* implicit */signed char) ((var_5) && (var_8)));
                        var_39 = ((/* implicit */unsigned short) arr_39 [i_4] [i_5] [i_12]);
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) arr_48 [i_4] [i_5] [i_12] [i_18] [i_19 + 1])) ? (arr_48 [i_4] [i_4] [i_12] [i_18] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_41 = ((((/* implicit */_Bool) -1400914282726354765LL)) ? (-559458524) : (((/* implicit */int) (unsigned short)19037)));
                        var_42 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned short)43150), (((/* implicit */unsigned short) var_5))))), (2422616458U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)14401)))))))) : (max((max((((/* implicit */unsigned int) arr_44 [(_Bool)1] [i_5] [i_12] [(signed char)3] [i_20])), (arr_34 [(_Bool)1] [i_5] [i_12] [i_18] [i_20]))), (((/* implicit */unsigned int) var_4)))));
                    }
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))))) - (max((((/* implicit */long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned short)43154))))), (max((((/* implicit */long long int) arr_29 [i_5] [i_5] [i_5])), (var_6)))))));
                        var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((-697276217), (((/* implicit */int) (signed char)-4)))))))));
                    }
                    for (long long int i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        var_45 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)27813)) >> (((((/* implicit */int) var_0)) + (20265)))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54243))) + (452061391U))))));
                        var_46 = ((/* implicit */int) max((((/* implicit */long long int) (+(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_59 [i_12] [i_12]))))))), (min((((/* implicit */long long int) (_Bool)1)), (var_9)))));
                    }
                    var_47 |= ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) ((short) (short)-23334)))))) & (max((min((((/* implicit */long long int) var_3)), (arr_17 [(short)17] [(short)17] [i_12]))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_50 [(unsigned short)6] [(unsigned short)4] [i_5] [(unsigned short)6]))))))));
                }
                for (unsigned int i_23 = 0; i_23 < 22; i_23 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned int) var_8);
                    var_49 = (i_12 % 2 == zero) ? (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_12] [i_12] [i_5] [i_12] [i_23])) >> (((((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_23] [i_12])) - (240)))))), (-1400914282726354753LL)))) : (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_12] [i_12] [i_5] [i_12] [i_23])) >> (((((((/* implicit */int) arr_32 [i_12] [i_12] [i_12] [i_23] [i_12])) - (240))) + (226)))))), (-1400914282726354753LL))));
                }
                /* LoopNest 2 */
                for (signed char i_24 = 1; i_24 < 20; i_24 += 1) 
                {
                    for (signed char i_25 = 3; i_25 < 20; i_25 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((((long long int) var_5)) - (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))) * (2926419305025940020LL))))));
                            arr_73 [i_4] [i_4] [i_12] [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)11293)), (1236677680)));
                            arr_74 [i_4] [i_4] [14U] [1LL] [i_25] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) ((((/* implicit */int) (!(var_8)))) != (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_26 = 1; i_26 < 20; i_26 += 3) 
                {
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54255)) ? (arr_75 [i_12] [i_4] [i_12] [i_26 + 1]) : (((/* implicit */int) arr_60 [i_12] [i_12] [i_26] [i_26 - 1] [i_26 + 1] [i_26 + 2]))));
                    var_52 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_4] [i_5] [i_12] [i_26 - 1])) ? (arr_66 [i_4] [i_4] [i_4] [i_26 + 2]) : (arr_66 [(unsigned short)20] [i_5] [i_12] [i_26 + 1])));
                    var_53 &= ((/* implicit */short) -1400914282726354766LL);
                    var_54 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22361)) || (((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_26 + 2]))));
                }
            }
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            /* LoopNest 3 */
            for (int i_28 = 3; i_28 < 19; i_28 += 3) 
            {
                for (int i_29 = 0; i_29 < 22; i_29 += 2) 
                {
                    for (unsigned char i_30 = 1; i_30 < 21; i_30 += 4) 
                    {
                        {
                            var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) ((var_6) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)43126)) >> (((((/* implicit */int) arr_54 [i_4] [i_27] [i_30])) - (9624)))))))))));
                            var_56 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_29] [i_27] [i_29] [i_27] [i_27])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-17))))) ? (((/* implicit */int) (unsigned short)11292)) : (((/* implicit */int) ((((/* implicit */int) arr_35 [i_29])) <= (((/* implicit */int) (unsigned short)55268)))))))));
                        }
                    } 
                } 
            } 
            var_57 |= ((/* implicit */short) ((max((-7LL), (((/* implicit */long long int) (unsigned short)55268)))) << (((max((var_9), (((/* implicit */long long int) (signed char)0)))) - (2143390669597461983LL)))));
            var_58 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_5)) : ((+(-1))))) != (min((((((/* implicit */int) arr_45 [(short)8] [i_4] [(short)17] [i_27] [i_27] [(short)0] [i_27])) - (((/* implicit */int) var_5)))), (1210779122)))));
        }
        var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-4807597656152065321LL))) >> (((arr_71 [i_4] [(unsigned short)4] [i_4] [i_4] [i_4] [i_4]) - (2329557545U))))))))));
    }
}
