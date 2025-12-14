/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161958
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((2548083389132532854LL) % (((/* implicit */long long int) (((_Bool)0) ? (503421144U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                var_21 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_2 [i_2]))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_0] [9LL])) >= (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) -471301493)) && (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [(signed char)8]))))) >> (((((/* implicit */int) arr_2 [i_0 + 3])) - (92)))));
                            arr_13 [i_0] [(_Bool)1] [(_Bool)1] [9U] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                var_23 *= ((/* implicit */signed char) ((((137430564864LL) > (((/* implicit */long long int) -471301501)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            }
            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 10329927058305422769ULL)))))));
            arr_14 [(short)8] [(_Bool)1] [(_Bool)1] |= ((/* implicit */signed char) (((((+(-343123970925772763LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
            var_25 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1]))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_26 *= ((signed char) 2481264551U);
            var_27 |= ((((/* implicit */long long int) arr_9 [i_0 + 1] [i_0 + 2])) ^ (8625524295191164535LL));
        }
        for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            arr_19 [i_0] [(signed char)8] = ((/* implicit */_Bool) (signed char)-82);
            var_28 = ((/* implicit */signed char) (((_Bool)1) ? (770879259U) : (((((/* implicit */_Bool) 1562318019)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (65535U)))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)51))))) : (((unsigned int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((8625524295191164559LL) >> (((arr_16 [i_0]) - (3056232080408570052ULL)))))) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_6 + 1] [i_0 + 1])) : (((unsigned int) (short)12555))));
                    arr_24 [i_0 + 3] [i_0 + 3] [i_7] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (852974138U))) >> ((((~(((/* implicit */int) (signed char)26)))) + (29)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        arr_27 [(unsigned char)0] [i_6] [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 471301493)) ? (((/* implicit */long long int) 3626041806U)) : (8625524295191164535LL)));
                        arr_28 [i_0] [i_8] [i_0] [i_6 + 1] [i_0] = ((((/* implicit */int) arr_0 [i_0])) + ((+(-471301494))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 55657253U))) ? (((((/* implicit */_Bool) 137430564885LL)) ? (((/* implicit */long long int) arr_15 [i_0 + 3] [4U])) : (-4820702944636265772LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_6 - 2] [i_7] [i_0 - 1] [8U] [i_8] [i_6 - 2])))));
                    }
                }
            }
            var_32 *= ((/* implicit */unsigned char) 917504U);
            var_33 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
        }
        arr_29 [i_0] [(signed char)9] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0 + 3])) > (((/* implicit */int) (signed char)64))));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_32 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5549738580426373711ULL))));
            var_34 = ((int) (short)-3873);
        }
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (short i_13 = 4; i_13 < 9; i_13 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752))) != (8956041660949706669ULL)));
                        var_36 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 17443933545993683450ULL))));
                        var_37 &= ((/* implicit */unsigned long long int) (+(-4820702944636265772LL)));
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7728840935428906905LL)) ? (((/* implicit */int) (signed char)-30)) : (((((/* implicit */_Bool) (signed char)30)) ? (arr_5 [i_0] [i_0] [1ULL] [i_13]) : (((/* implicit */int) arr_30 [i_12] [i_12])))))))));
                    }
                } 
            } 
            var_39 = (!(((/* implicit */_Bool) 3441993157U)));
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) | (-8727647233446217354LL))) : (((/* implicit */long long int) -1424310832))));
        }
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            for (signed char i_15 = 4; i_15 < 6; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    {
                        arr_53 [i_0] = ((/* implicit */unsigned int) ((_Bool) (short)-3864));
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)3881)))) : (13800245935585371185ULL))))));
                        arr_54 [i_15] [i_0] [i_15 + 4] [(_Bool)1] = ((/* implicit */short) (_Bool)1);
                        var_42 = ((/* implicit */_Bool) -360025425);
                        var_43 = ((/* implicit */long long int) (~(((310955061U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */short) var_12);
    var_45 = ((/* implicit */unsigned short) 221089877U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 14; i_17 += 2) 
    {
        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)8961)) ? (((/* implicit */unsigned long long int) -6523196766338482716LL)) : (13882061896310960757ULL)));
        arr_58 [(signed char)4] [i_17] = ((/* implicit */short) (((!(arr_56 [7U]))) ? (((((/* implicit */_Bool) -8727647233446217354LL)) ? (-3761724589246591153LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_57 [i_17] [i_17])) * (((/* implicit */int) arr_57 [i_17] [i_17])))))));
    }
    for (short i_18 = 0; i_18 < 13; i_18 += 4) 
    {
        var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (signed char)-85)))))) * (((/* implicit */int) (signed char)84))));
        /* LoopSeq 1 */
        for (signed char i_19 = 3; i_19 < 11; i_19 += 4) 
        {
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 11; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    {
                        var_48 = ((/* implicit */signed char) (+(((long long int) ((2898618287U) >> (((((/* implicit */int) (unsigned short)50219)) - (50191))))))));
                        arr_68 [i_19] [i_19] [7U] [i_21] [i_19] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)56)), (4564682177398590864ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            var_49 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(417275478)))), (max((-8727647233446217354LL), ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (9223372036854775807LL)))))));
        }
        /* LoopNest 3 */
        for (short i_22 = 1; i_22 < 11; i_22 += 1) 
        {
            for (signed char i_23 = 1; i_23 < 10; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        arr_77 [i_18] [i_22] [i_23 + 3] [i_24] = ((/* implicit */unsigned int) 12682734430510639536ULL);
                        var_50 = ((/* implicit */int) (((-(((/* implicit */int) arr_66 [i_23 + 1] [9U] [i_23] [i_22])))) >= (((((/* implicit */_Bool) 5496393223902646413LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)16))))));
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) % (min((8661460U), (((/* implicit */unsigned int) (signed char)11))))))) ? (((unsigned int) (+(((/* implicit */int) (signed char)-12))))) : ((+(min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_25 = 3; i_25 < 21; i_25 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_26 = 0; i_26 < 24; i_26 += 4) 
        {
            var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3882)) && (((/* implicit */_Bool) ((6756878632702373762ULL) * (((/* implicit */unsigned long long int) -3578545324361612778LL)))))));
            var_53 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 211234590U))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_82 [i_26])))))));
            var_54 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_79 [i_25])))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (8727647233446217354LL)))) == (((/* implicit */int) (_Bool)0)))))));
            var_55 = ((/* implicit */int) ((4294967286U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-3234)))));
            arr_85 [i_25] = ((/* implicit */signed char) (_Bool)1);
        }
        for (short i_27 = 0; i_27 < 24; i_27 += 4) 
        {
            var_56 = ((((/* implicit */_Bool) ((signed char) max(((short)-2117), (((/* implicit */short) (_Bool)1)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)37)), (((((/* implicit */_Bool) 1646782095U)) ? (468329931U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (min((((/* implicit */long long int) arr_80 [(_Bool)1])), (((5496393223902646409LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            var_57 = ((/* implicit */unsigned int) (+(((min((-3170886514447619570LL), (((/* implicit */long long int) (_Bool)1)))) | (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
            var_58 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3218))) * (11735822170896465839ULL)));
        }
        /* LoopNest 3 */
        for (signed char i_28 = 0; i_28 < 24; i_28 += 4) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (int i_30 = 2; i_30 < 21; i_30 += 1) 
                {
                    {
                        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_82 [i_25 + 2]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6710921902813085778ULL)) ? (arr_86 [i_28]) : (((/* implicit */long long int) 1182777651U))))) ? (((/* implicit */unsigned int) arr_87 [i_25] [i_25 - 3])) : (min((1060782661U), (((/* implicit */unsigned int) (short)32767)))))))))));
                        var_60 = ((/* implicit */long long int) 3234184635U);
                    }
                } 
            } 
        } 
        var_61 = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
        arr_95 [i_25] = (_Bool)1;
        var_62 = ((/* implicit */signed char) ((int) (((+(6710921902813085750ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
    var_63 = ((/* implicit */signed char) ((short) (short)-3690));
}
