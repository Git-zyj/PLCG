/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175623
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
    var_20 -= ((long long int) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)19724)) > (((/* implicit */int) (unsigned short)27614))))) : (((/* implicit */int) var_17))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((unsigned long long int) var_9));
            var_22 = (-(((/* implicit */int) (signed char)106)));
            var_23 ^= (signed char)-106;
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_3 [(signed char)2] [i_1])))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0]))) : (((/* implicit */int) (signed char)-89)))))));
            /* LoopSeq 3 */
            for (int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_13)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16920548119464418819ULL)))))))))));
                arr_8 [6U] [i_2] [i_1] [6U] |= ((/* implicit */unsigned short) ((arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 - 2]) + (arr_6 [i_2 + 3] [i_2 + 1] [i_2 - 2] [i_2 + 3])));
                var_26 = ((/* implicit */unsigned int) ((int) arr_2 [i_1 - 3] [i_2 + 1]));
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    var_27 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1899575500U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52905))) : (18446744073709551615ULL)));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [2LL] [(signed char)0] [3ULL] [i_0] [i_2 - 1] [(unsigned char)2] [i_2])) ? (((/* implicit */unsigned long long int) var_3)) : (14528491508860018210ULL)));
                        var_30 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)1347)) | (777678754)))));
                    }
                }
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    arr_15 [i_1] [i_1] = ((/* implicit */_Bool) ((short) 3005573738U));
                    var_31 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1]))) - (var_2)))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) -375231733)) : (var_13)))));
                }
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    var_32 += ((/* implicit */unsigned long long int) (~(367799317)));
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3LL] [(unsigned short)9])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2])))))) && (((((/* implicit */_Bool) arr_4 [i_6] [i_7])) || ((_Bool)0)))));
                        arr_23 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (unsigned short)37922))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        arr_26 [i_0] [i_1] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1]))) + (((((/* implicit */_Bool) -3184388871269983681LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4385))) : (arr_24 [(signed char)5])))));
                        var_34 = (~(-950236251));
                        var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 3] [i_2 + 1] [i_2 + 3] [7U]))));
                        arr_27 [i_0] [i_1 - 3] [i_1] [10] [10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 1] [(unsigned short)8] [(unsigned short)8] [i_8] [(unsigned short)8] [i_8] [(unsigned short)8]))) >= (3184388871269983668LL)));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_36 = ((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned short)19725)) - (19710))));
                        var_37 |= ((/* implicit */unsigned int) ((short) ((unsigned short) 1526195954245132779ULL)));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (unsigned char)255))));
                        var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_6])) < (((/* implicit */int) (short)32767))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1 - 1] [i_2 - 2])) ? (((/* implicit */int) arr_18 [i_2] [0LL] [(unsigned short)0] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2 + 2] [(_Bool)1]))));
                    }
                }
            }
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                var_41 = (~(arr_0 [i_1 - 1] [i_1 - 3]));
                var_42 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_1 - 3] [i_1])) ? (var_4) : (((/* implicit */long long int) var_6))));
            }
            for (int i_11 = 3; i_11 < 10; i_11 += 3) 
            {
                var_43 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_25 [3ULL] [8U] [(short)0] [i_11] [i_1 - 3] [(signed char)8] [i_1 - 3])))));
                arr_36 [i_1] = ((/* implicit */long long int) ((int) (unsigned short)61718));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (0)))) ? (((((/* implicit */_Bool) 1926880896U)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_12])) : (((/* implicit */int) (short)32767)))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
            arr_41 [8U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_12])) && (((/* implicit */_Bool) arr_17 [i_12]))));
            var_45 = ((/* implicit */int) ((((/* implicit */unsigned int) 0)) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (218208481U)))));
            /* LoopSeq 3 */
            for (int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                var_46 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [4ULL] [i_12] [3])) ? (375231741) : (arr_22 [(unsigned short)9])))) && (((/* implicit */_Bool) -4748578270023389252LL)));
                var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1)))));
                var_48 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2044)) | (((((/* implicit */_Bool) 3005573738U)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned char)6))))));
                var_49 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? ((-(((/* implicit */int) (unsigned short)19702)))) : (((/* implicit */int) ((short) (_Bool)1))));
                var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))));
            }
            for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_51 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -4748578270023389230LL)) && (((/* implicit */_Bool) -1473037429)))) || (((/* implicit */_Bool) ((signed char) arr_39 [(short)0] [(short)0])))));
                var_52 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                var_53 = ((/* implicit */unsigned short) ((-375231750) / (((/* implicit */int) arr_16 [i_0] [i_14]))));
            }
            for (long long int i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                arr_50 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) -988707256)) ? (((int) var_2)) : (((/* implicit */int) ((short) (unsigned short)12551)))));
                var_54 = arr_11 [i_0] [i_0] [(unsigned short)1] [i_0] [i_15] [i_15] [i_0];
            }
            arr_51 [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_39 [i_0] [i_12]);
        }
        var_55 ^= ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28160))) * (355593265U)))) < (min((((/* implicit */unsigned long long int) 375231734)), (13863278702035232400ULL))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_47 [i_0])), (var_13)))) : (var_9));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            arr_55 [i_16] [i_16] = ((/* implicit */long long int) ((short) 4748578270023389252LL));
            var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) (((!(((/* implicit */_Bool) -8639531921336112138LL)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) var_1)))))))))));
        }
        var_57 = max(((-(((((/* implicit */_Bool) 7565121554270524360ULL)) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 15443211033375487776ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_53 [3U] [(signed char)3] [(short)2]))))), (4748578270023389251LL))));
        var_58 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0])) ? (arr_22 [i_0]) : (arr_22 [i_0])))) | (((((/* implicit */unsigned int) (~(-367799299)))) | (min((((/* implicit */unsigned int) -55215905)), (1630949931U)))))));
    }
    for (int i_17 = 2; i_17 < 21; i_17 += 1) 
    {
        var_59 = ((/* implicit */unsigned long long int) 1932904653U);
        var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) var_15))));
    }
    for (int i_18 = 0; i_18 < 14; i_18 += 3) 
    {
        var_61 = ((/* implicit */int) ((unsigned char) ((int) ((var_13) >= (((/* implicit */long long int) 936622399U))))));
        /* LoopSeq 4 */
        for (unsigned int i_19 = 1; i_19 < 12; i_19 += 4) 
        {
            var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) var_6))));
            var_63 = ((/* implicit */long long int) (((((-(((/* implicit */int) (signed char)0)))) >> (((((((/* implicit */int) var_16)) << (((1024471111U) - (1024471095U))))) - (886374400))))) != (((/* implicit */int) var_7))));
        }
        /* vectorizable */
        for (short i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            var_64 = ((/* implicit */unsigned long long int) min((var_64), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16090)))))));
            var_65 = (unsigned short)1;
            var_66 = ((/* implicit */unsigned short) max((var_66), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)45042)))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_18]))) + (var_2))))))));
        }
        for (int i_21 = 0; i_21 < 14; i_21 += 3) 
        {
            var_67 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) var_5)));
            var_68 = ((/* implicit */signed char) var_8);
            var_69 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)0)), (375231733)))), (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-15102)))))))));
            var_70 = ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-13)) && (((/* implicit */_Bool) arr_64 [i_21] [9] [(unsigned char)8])))))))) < (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) - (-4748578270023389248LL))) / (max((1029884439179776912LL), (((/* implicit */long long int) (short)-15102)))))));
            arr_69 [i_21] [i_21] [(signed char)0] = ((/* implicit */signed char) (-((-(((/* implicit */int) ((-4214827253802252214LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-19103))))))))));
        }
        for (unsigned int i_22 = 0; i_22 < 14; i_22 += 2) 
        {
            var_71 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) max((0), (((/* implicit */int) var_19)))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)0)), (227917771U)))) >= (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_64 [i_18] [i_18] [i_22]))))))));
            arr_72 [3U] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 1029884439179776912LL))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((9007199252643840LL) != (((/* implicit */long long int) ((/* implicit */int) (short)32763))))))))), (((((/* implicit */unsigned long long int) (~(1110602946)))) % (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
        }
    }
    var_72 = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)13)) && (((/* implicit */_Bool) var_18))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)21783)) : (((/* implicit */int) var_7))))));
    var_73 = ((/* implicit */unsigned int) var_18);
    var_74 = ((/* implicit */signed char) var_15);
}
