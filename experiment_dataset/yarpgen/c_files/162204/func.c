/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162204
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [4LL] [i_0] = ((/* implicit */unsigned char) var_10);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25118))) ^ (max((((((/* implicit */unsigned long long int) var_10)) / (12832447228857525456ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)25125)))))))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_11 = min((((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 4])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 4]))))));
            var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_7 [i_0] [i_1] = ((/* implicit */int) (unsigned char)51);
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_4 [i_2 - 1] [10ULL])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [18U] [i_0]))));
                            var_15 = ((/* implicit */unsigned int) ((long long int) arr_16 [(unsigned char)5]));
                        }
                    } 
                } 
                var_16 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0] [i_0])))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_6))));
                var_18 += ((/* implicit */unsigned short) var_10);
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (~(188734788078229392ULL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        var_20 = ((var_0) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25106)) ? (121185230) : (-162256970)))));
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9940003320664750590ULL)) ? (7470570887811063529ULL) : (((/* implicit */unsigned long long int) -1555271046))));
                        var_22 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) var_9))) / (var_4)));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_5 [i_0] [i_2]))));
                    }
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((15836735312547324809ULL) <= (((/* implicit */unsigned long long int) -5533566276919285344LL))));
                        var_25 ^= ((/* implicit */short) ((unsigned int) var_5));
                        var_26 |= ((/* implicit */signed char) (-(arr_19 [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 2] [i_2])));
                        var_27 &= ((/* implicit */short) var_4);
                    }
                    var_28 = ((/* implicit */unsigned int) var_5);
                    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_2)))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) 5614296844852026168ULL)) ? (7470570887811063554ULL) : (((/* implicit */unsigned long long int) -4305181303861911112LL)))))));
                }
                for (int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */short) arr_24 [i_3] [i_3 - 3] [i_0] [i_3]);
                    var_32 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_2 + 1])) / (((/* implicit */int) var_7))));
                }
                for (int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))));
                    var_34 |= ((/* implicit */short) var_3);
                }
                for (int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 1) 
                    {
                        var_35 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))) == (10976173185898488087ULL))))));
                        arr_37 [(short)18] [i_2] [i_2] [i_2] [i_2] [13ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_0)));
                        var_36 *= ((/* implicit */short) var_0);
                    }
                    var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_29 [i_11] [i_3] [i_2] [i_0] [18U]))));
                    arr_38 [i_0] [i_2] [i_3] [i_11] = ((/* implicit */unsigned short) ((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) | (arr_14 [i_0] [i_11] [i_11] [i_0] [i_0])));
                    var_38 *= (-(arr_0 [i_3] [i_11]));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                var_39 = ((/* implicit */unsigned char) var_10);
                var_40 = ((/* implicit */_Bool) (-(max((arr_25 [i_2 - 2] [i_2] [i_2 + 2] [i_2 + 2] [(signed char)11]), (arr_25 [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_2] [(unsigned short)11])))));
            }
        }
        var_41 = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) -6168152995973579170LL))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_41 [10ULL] [i_0] [11] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4305181303861911117LL)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (short)-8540))))))), (((/* implicit */long long int) var_9))));
    }
    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            var_42 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_14] [i_15]))));
            arr_49 [i_15] = ((/* implicit */int) ((signed char) (_Bool)1));
        }
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            var_43 *= ((/* implicit */_Bool) min((((arr_32 [i_16] [i_16]) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) / (var_3)))))), (((/* implicit */unsigned long long int) var_3))));
            arr_53 [i_16] [i_14] = ((/* implicit */unsigned short) arr_40 [i_16]);
            var_44 = ((/* implicit */long long int) var_1);
            var_45 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) var_8))))) ? (arr_46 [i_16]) : (arr_52 [i_14] [i_14] [i_14])))), (var_9)));
        }
    }
    /* LoopSeq 2 */
    for (long long int i_17 = 1; i_17 < 19; i_17 += 1) 
    {
        arr_57 [i_17] &= ((/* implicit */unsigned short) var_4);
        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (~(min((arr_55 [6LL] [i_17 - 1]), (((/* implicit */long long int) arr_56 [i_17 - 1])))))))));
        arr_58 [i_17] = ((/* implicit */unsigned long long int) (((~(((unsigned int) (short)-16225)))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_54 [i_17 + 1] [i_17 - 1]), (arr_54 [i_17 + 1] [i_17 - 1])))))));
        arr_59 [i_17] |= ((/* implicit */unsigned long long int) var_10);
    }
    for (unsigned short i_18 = 3; i_18 < 13; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (int i_19 = 2; i_19 < 15; i_19 += 2) 
        {
            for (signed char i_20 = 3; i_20 < 15; i_20 += 1) 
            {
                {
                    var_47 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_18] [i_19] [i_20])) ? (((/* implicit */unsigned long long int) var_6)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned int) arr_30 [i_18] [i_19] [i_18] [i_18] [i_18])), (1753193058U)))))));
                    var_48 ^= max((var_4), (((/* implicit */unsigned long long int) min((arr_9 [i_20] [i_19] [i_18]), (arr_9 [8ULL] [i_19] [8ULL])))));
                    arr_68 [i_18] [i_19] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_20] [i_20] [i_20]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_66 [i_20 + 1] [(unsigned char)8]))) : ((+(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_19] [i_20])))))))));
                    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_18 - 2] [i_20 + 1])) ? (arr_19 [i_20 + 1] [i_20] [i_20 - 1] [i_20] [(unsigned short)17]) : (arr_19 [i_20 + 1] [i_20] [i_20 - 1] [i_20] [i_20])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_30 [i_18] [i_18] [(short)9] [i_18 - 2] [i_18])))) : (max((arr_19 [i_20 - 3] [i_20] [i_20 - 1] [(unsigned short)10] [i_20]), (arr_19 [i_20 + 1] [i_20 + 1] [i_20 - 2] [i_20] [i_20 - 2])))));
                    var_50 = ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_18]))));
                }
            } 
        } 
        var_51 = ((/* implicit */unsigned int) arr_23 [i_18] [i_18] [i_18] [i_18] [6ULL] [i_18]);
        /* LoopSeq 1 */
        for (short i_21 = 2; i_21 < 15; i_21 += 2) 
        {
            var_52 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_36 [i_18 + 1] [i_18 + 1] [i_18] [13LL] [11]) : (max((var_0), (var_0))))));
            var_53 *= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_12 [10LL] [i_18] [i_21])), (arr_71 [i_21 - 1] [i_18 - 1]))), (((/* implicit */unsigned long long int) min((arr_41 [i_18 - 1] [i_21] [i_21] [i_21 - 2]), (((/* implicit */long long int) var_9)))))));
            var_54 = ((/* implicit */unsigned char) ((short) arr_34 [i_21] [i_18] [i_18] [i_18] [i_18 + 1] [i_18]));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_22 = 0; i_22 < 16; i_22 += 3) /* same iter space */
            {
                var_55 = ((/* implicit */int) var_9);
                var_56 = ((/* implicit */unsigned short) var_3);
                var_57 *= ((/* implicit */unsigned int) var_2);
                var_58 += ((/* implicit */unsigned short) var_9);
            }
            /* vectorizable */
            for (unsigned char i_23 = 0; i_23 < 16; i_23 += 3) /* same iter space */
            {
                arr_80 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_21] [i_21] [i_21 + 1] [i_21 - 2] [i_21 + 1] [(_Bool)1])) ? (arr_17 [i_23] [i_18] [i_18 + 2] [18ULL] [i_18 + 2]) : (((/* implicit */unsigned long long int) var_8))));
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    arr_84 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_4 [i_18] [(short)10]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 4) 
                    {
                        arr_87 [i_25] [i_24] [i_21] [i_21] [i_18] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_18] [i_18 + 1])) || (((/* implicit */_Bool) var_7))));
                        var_59 = ((/* implicit */unsigned char) ((var_8) % (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_21 + 1] [i_21 - 2] [i_18] [i_18 + 3] [i_18 + 2])))));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        arr_91 [(signed char)3] [i_26] [i_23] [i_24] [i_26] [i_18] [i_18] = ((/* implicit */long long int) ((-8135840402513867192LL) >= (((/* implicit */long long int) -1972251330))));
                        arr_92 [i_18] [10LL] = ((/* implicit */short) var_1);
                        var_60 = ((/* implicit */unsigned char) (-(12832447228857525423ULL)));
                        var_61 = ((/* implicit */unsigned int) arr_18 [i_26] [i_21]);
                    }
                    var_62 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_69 [i_18] [i_18]))));
                    var_63 = ((((/* implicit */_Bool) 1310689759)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (3394876039U));
                    /* LoopSeq 3 */
                    for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
                    {
                        arr_96 [i_24] [i_18] = ((/* implicit */signed char) (-(var_6)));
                        var_64 = var_0;
                        var_65 *= ((/* implicit */unsigned long long int) ((arr_13 [i_27] [i_23] [i_21 - 2] [i_18 + 3]) == (arr_13 [i_21] [i_21 + 1] [i_21 + 1] [i_18 - 3])));
                    }
                    for (int i_28 = 0; i_28 < 16; i_28 += 3) 
                    {
                        var_66 ^= ((/* implicit */signed char) ((unsigned int) (~(var_0))));
                        var_67 = ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((((/* implicit */_Bool) arr_15 [1] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_18] [i_21] [i_24] [i_28]))) : (arr_1 [i_18] [i_21]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))));
                        arr_100 [i_28] [i_18] [(unsigned short)7] [i_18] [i_18] = ((/* implicit */unsigned short) (~(7470570887811063550ULL)));
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 3) 
                    {
                        var_68 = var_1;
                        var_69 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_18] [i_18] [i_18] [(signed char)10] [(signed char)10]))) : (var_4)))));
                    }
                }
            }
        }
        arr_103 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_93 [i_18] [i_18] [(short)7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_18] [i_18])) ? (var_10) : (((/* implicit */int) var_1))))) : (var_3)))));
    }
}
