/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151618
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
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    var_17 = var_11;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_0 [(signed char)0])) : (((/* implicit */int) arr_0 [(unsigned char)0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) arr_0 [i_0]));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (signed char)-117);
                    var_20 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (signed char)-105)), ((short)23164)))) + (arr_4 [(signed char)5] [i_1])))), ((+(((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))) : (56U)))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_21 = ((((((/* implicit */_Bool) (+(9953034355701026622ULL)))) ? (((/* implicit */int) (signed char)-48)) : ((~(((/* implicit */int) (signed char)-105)))))) + (((/* implicit */int) ((short) 17654921456212387359ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_4 - 1] [i_4]))))), (min((arr_12 [i_4 - 1]), (((/* implicit */unsigned int) (signed char)7))))));
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_23 = ((/* implicit */signed char) (-((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-36))))))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((((/* implicit */int) (short)32749)) - (((/* implicit */int) (short)-28981)))), (((/* implicit */int) min((((short) 17654921456212387359ULL)), (((/* implicit */short) (!(((/* implicit */_Bool) (short)19620)))))))))))));
                var_25 = ((/* implicit */signed char) (+(-1517026421)));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)-112))))))) || (((/* implicit */_Bool) max(((+(3896478877U))), (((/* implicit */unsigned int) var_11)))))));
                arr_18 [i_3] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)108))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) : (arr_14 [i_4])))) : (((unsigned long long int) 9223372036854775807LL)))), ((((_Bool)1) ? (15977774526619945174ULL) : (arr_17 [i_4] [i_4 - 1])))));
            }
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) 
                    {
                        arr_27 [i_3] [i_4] [i_6] [i_7 + 3] &= ((/* implicit */unsigned int) ((unsigned char) max((((((/* implicit */_Bool) (unsigned short)2983)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (398488419U))), (((unsigned int) (short)11159)))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_21 [i_3] [i_7]))));
                    }
                    for (signed char i_9 = 1; i_9 < 24; i_9 += 4) 
                    {
                        arr_32 [i_3] [i_3] [i_4] [(unsigned char)0] [i_3] = ((/* implicit */signed char) ((unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (18446744073709551609ULL))))));
                        arr_33 [i_6] [i_3] |= ((/* implicit */unsigned short) min((min((max((1100996305179481780ULL), (((/* implicit */unsigned long long int) (signed char)-108)))), (((/* implicit */unsigned long long int) (~(arr_30 [i_9] [i_3] [12LL] [i_4] [i_4] [i_3] [i_3])))))), (max((10863548163771498997ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 20ULL)))))))));
                    }
                    for (signed char i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_12)))) << (((((/* implicit */int) ((signed char) (unsigned char)226))) + (41)))));
                        arr_38 [i_3] [i_6] [i_6] &= ((/* implicit */short) ((max((max((((/* implicit */unsigned long long int) (unsigned char)157)), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((3896478871U) + (((/* implicit */unsigned int) -728003738)))))))));
                    }
                    var_29 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) arr_13 [i_3] [i_4 + 1] [i_7])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)27324)))), (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)115)))))))));
                    var_30 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_35 [(short)12] [i_3] [i_7 + 1] [i_7 - 1]), (((/* implicit */int) (short)31)))))));
                    arr_39 [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) min((arr_15 [i_4] [i_4] [i_7]), (max((((/* implicit */unsigned int) max(((short)-4447), (((/* implicit */short) (unsigned char)82))))), (((unsigned int) 3896700921U))))));
                }
                for (unsigned char i_11 = 1; i_11 < 22; i_11 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (13526907021798734526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)17))))) : ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))) ? (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) min((arr_28 [i_3] [i_4] [i_6] [i_4] [i_4 - 1]), (((/* implicit */short) (unsigned char)95))))) : (((arr_34 [i_3] [i_4 - 1] [i_3] [i_11] [i_4 + 1] [i_11] [i_3]) & (-294727406))))) : (((((/* implicit */int) (short)-20882)) | (((/* implicit */int) arr_41 [i_6] [i_11 - 1] [22LL] [i_3] [i_11 + 2])))))))));
                    arr_43 [11U] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_11] [i_4] [i_11 + 2] [i_11]))))), (((long long int) (unsigned short)64734))));
                }
                for (unsigned char i_12 = 1; i_12 < 22; i_12 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) 3896700911U)) < (13526907021798734542ULL))))));
                    /* LoopSeq 1 */
                    for (int i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        arr_48 [i_3] [i_3] [21] [i_4] [(unsigned short)3] [i_4] [i_4] = (-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)801)))));
                        var_33 = ((/* implicit */int) ((unsigned int) var_15));
                    }
                }
                for (unsigned char i_14 = 1; i_14 < 22; i_14 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)33))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)801))))), (((unsigned long long int) (short)26171))))));
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)33)))) ? (((/* implicit */int) ((short) 1048576U))) : (((/* implicit */int) (unsigned char)31))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)16638)))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_16 [i_4] [i_4]))) | (((/* implicit */int) min(((unsigned char)254), (((/* implicit */unsigned char) var_9))))))))));
                }
                /* LoopNest 2 */
                for (short i_15 = 1; i_15 < 24; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_4 - 1] [0ULL] [i_4] [i_6] [i_6] [i_15 - 1] [13LL])) ? (8045253389092426697ULL) : (((/* implicit */unsigned long long int) arr_34 [i_4 + 1] [i_4 + 1] [i_4] [(unsigned char)7] [i_15] [i_15 - 1] [i_15 - 1]))))) ? (((((/* implicit */_Bool) 2147483647)) ? (arr_34 [i_4 + 1] [i_4] [i_4] [19] [i_6] [i_15 + 1] [i_15 + 1]) : (((/* implicit */int) (unsigned short)23103)))) : (((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) var_12)) : (-2063854591)))));
                            var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) max(((signed char)30), (arr_21 [i_4] [i_15 + 1]))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */signed char) ((min((arr_15 [i_4 - 1] [i_4] [i_4 - 1]), (((/* implicit */unsigned int) min((-2063854599), (((/* implicit */int) (signed char)-31))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_34 [i_3] [i_4 - 1] [i_4] [i_4 - 1] [i_6] [i_6] [i_6]) - (arr_13 [i_3] [0LL] [i_6]))))))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_59 [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (unsigned char)190))))) || ((_Bool)1))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 1; i_18 < 24; i_18 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_19 = 1; i_19 < 22; i_19 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) (-(((((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)28129)))) % (-2063854584)))));
                        var_40 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_19 [i_18 - 1] [i_4] [i_19 + 2] [i_18 - 1])) % (((/* implicit */int) (unsigned char)245)))), ((((+(((/* implicit */int) (unsigned char)188)))) / (((/* implicit */int) max(((unsigned short)18870), (((/* implicit */unsigned short) (signed char)59)))))))));
                        arr_64 [(short)16] [i_4] [i_4] [(signed char)24] [i_18 + 1] [i_19 + 1] = ((/* implicit */signed char) arr_51 [i_3] [i_3] [1U] [(_Bool)1]);
                        arr_65 [i_4] [i_18 - 1] [i_17] [i_17] [i_17] [i_4 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(1648341476)))), ((-(15152864758114309226ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)115), ((signed char)-53))))) : (min((max((((/* implicit */unsigned int) (unsigned short)53707)), (2735916533U))), (((/* implicit */unsigned int) ((short) (_Bool)1)))))));
                    }
                    for (short i_20 = 4; i_20 < 22; i_20 += 3) 
                    {
                        var_41 -= ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), (var_5))))) < (-5420474232112354046LL));
                        var_42 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((arr_53 [i_3] [18] [i_4 + 1] [i_4 + 1] [(unsigned short)21] [12LL] [18U]) >> (((((/* implicit */int) (unsigned char)255)) - (203))))), (((/* implicit */unsigned long long int) ((long long int) -1648341499))))))));
                        arr_69 [i_3] [i_4] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-7876143196982388132LL) <= (((/* implicit */long long int) (-2147483647 - 1))))))) : ((~(1527448276617590212ULL)))))) ? (((long long int) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) (short)-8511)) : (((/* implicit */int) (unsigned char)186))))) : (((/* implicit */long long int) var_15))));
                        var_43 = ((/* implicit */short) (unsigned short)59794);
                        var_44 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6948))) : (-7876143196982388115LL))))))), (max((max((((/* implicit */unsigned long long int) (unsigned char)9)), (arr_22 [i_3] [3] [i_3] [i_4] [i_3]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)189)))))))));
                    }
                    for (long long int i_21 = 1; i_21 < 22; i_21 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) var_9))));
                        var_46 = ((/* implicit */int) var_7);
                        var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_47 [i_17] [i_4])) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) var_2)))))))));
                    }
                    for (long long int i_22 = 1; i_22 < 22; i_22 += 1) /* same iter space */
                    {
                        var_48 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) (signed char)52)))))) ? (max((7876143196982388148LL), (((/* implicit */long long int) (signed char)30)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1217737512))))));
                        arr_76 [i_22] [i_4] [(signed char)6] [i_22] [i_22 + 3] [i_22 + 3] [i_18] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_40 [i_22 + 3] [i_22 + 3])) : (((/* implicit */int) (short)(-32767 - 1))))) != (((/* implicit */int) (signed char)103))));
                    }
                    arr_77 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned char) (signed char)45)), (arr_31 [16LL] [(unsigned short)6] [i_4] [i_4 - 1] [16LL]))));
                }
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    for (long long int i_24 = 0; i_24 < 25; i_24 += 3) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) (unsigned char)20))));
                            var_50 = ((signed char) ((signed char) arr_68 [i_3] [(signed char)23] [i_17] [i_4 - 1] [i_24]));
                        }
                    } 
                } 
            }
            for (unsigned char i_25 = 2; i_25 < 23; i_25 += 1) 
            {
                arr_87 [i_3] [i_4] [i_25 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (signed char)77)), (4133368189266669490ULL)))))) ? (((/* implicit */int) ((signed char) arr_78 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_25 - 1]))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))) <= (((/* implicit */int) (short)32765)))))));
                var_51 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((short)-26158), (((/* implicit */short) (signed char)-53))))), (((((/* implicit */long long int) ((/* implicit */int) arr_68 [(signed char)4] [20] [i_25 - 1] [i_25 - 2] [i_25]))) | (-7876143196982388150LL)))))), ((+(max((var_4), (((/* implicit */unsigned long long int) var_7))))))));
            }
            var_52 = ((/* implicit */long long int) (signed char)-67);
        }
        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_74 [(_Bool)1] [i_3] [i_3] [i_3]))) ? ((((_Bool)1) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (5186408717377430199LL) : (7876143196982388141LL))))) : (((/* implicit */long long int) min((-934137286), (-1334659679))))));
        var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_74 [(short)12] [i_3] [i_3] [i_3])))) ? (((((/* implicit */int) (unsigned char)201)) / (arr_74 [i_3] [(short)8] [i_3] [i_3]))) : ((~(arr_74 [i_3] [(signed char)15] [i_3] [i_3])))));
        var_55 = ((/* implicit */short) (+(((/* implicit */int) ((short) ((_Bool) (unsigned short)34040))))));
    }
}
