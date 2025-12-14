/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185100
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) (short)-10669);
                    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((unsigned long long int) ((int) 507796968))))));
                }
            } 
        } 
    } 
    var_11 = ((unsigned long long int) 263183611U);
    var_12 = ((/* implicit */int) (~(var_2)));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 3; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            var_13 ^= ((/* implicit */unsigned char) (-(-1036893061)));
                            var_14 = ((/* implicit */int) 8863705531839437946LL);
                            var_15 = ((/* implicit */int) ((unsigned long long int) -1068743192));
                        }
                        for (short i_8 = 3; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            arr_25 [i_3 + 3] [i_4] [i_4] [i_5] [i_3] [i_6] [i_8 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1068743192)))))) : (1282097450097457460ULL)));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (+(-452745832016483756LL))))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                        {
                            arr_28 [10] [i_3] [i_5 + 1] [i_6] [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14067031856364448910ULL)) ? (((/* implicit */long long int) -31661786)) : (8863705531839437944LL)));
                            arr_29 [i_3] [i_4] [i_5 - 1] [i_4] [i_9 - 1] = ((/* implicit */short) (+(((/* implicit */int) (short)32747))));
                            var_17 = (+(((/* implicit */int) (signed char)-34)));
                        }
                        for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((short) (signed char)21)))));
                            var_19 = ((/* implicit */int) min((var_19), ((+(782234589)))));
                        }
                        arr_33 [i_3] [i_4] [i_3] [i_6] [i_5] = ((/* implicit */short) (+(17164646623612094155ULL)));
                        var_20 = ((/* implicit */int) 4831960249652916408ULL);
                    }
                    for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_21 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) -6013265983452343401LL)) ? (((/* implicit */int) ((short) -1068743179))) : (((int) 4407165840741527221LL))))), ((-(2956685130512610781LL)))));
                        arr_36 [i_3] [i_3] [i_3 - 1] = (signed char)127;
                    }
                    var_22 = ((/* implicit */short) ((int) ((int) 337786028)));
                    arr_37 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2128442558U)) ? (-1863753030537622587LL) : (((/* implicit */long long int) 2128442555U))))) ? ((+(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 12623519451810125976ULL)))))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    arr_40 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) -1022749410));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) -1050908504)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (16083367534432922058ULL)));
                }
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) 63);
                        var_25 = ((/* implicit */unsigned int) 7142426786048835578ULL);
                        var_26 -= ((/* implicit */unsigned int) ((int) max((-1802446010), (((/* implicit */int) (unsigned char)176)))));
                        var_27 ^= ((/* implicit */int) 16083367534432922058ULL);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((unsigned int) (short)13662));
                        var_29 = ((/* implicit */signed char) ((long long int) 2147483647));
                        arr_49 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)111));
                        arr_50 [(signed char)12] [i_3] [i_3] = ((/* implicit */int) ((signed char) -5607761083834033915LL));
                    }
                    for (short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        arr_53 [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)152))))), (max((16083367534432922032ULL), (((/* implicit */unsigned long long int) (short)-32756))))));
                        var_30 *= ((/* implicit */unsigned char) ((long long int) ((unsigned int) 2363376539276629595ULL)));
                    }
                    for (int i_17 = 1; i_17 < 15; i_17 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1867735045))));
                            arr_60 [i_3] [i_4] [i_13] [i_13] [i_13] [i_3] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3175476167256090556ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 5607761083834033926LL)) : (16083367534432922032ULL)))));
                        }
                        for (int i_19 = 4; i_19 < 16; i_19 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)3410)) ? (13145407133394357113ULL) : (1675773015590688037ULL))));
                            var_33 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -1582488288)) ? (((/* implicit */unsigned long long int) -1022749410)) : (7496834533304487091ULL))));
                            var_34 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((int) (signed char)60))), (min((((/* implicit */long long int) (signed char)-58)), (5607761083834033945LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 853369622)) ? (-1904187782) : (((/* implicit */int) (unsigned char)250)))))));
                            arr_63 [i_3] [i_4] [i_3] [i_3] [i_19 - 3] = ((/* implicit */int) 10016446717133698284ULL);
                        }
                        var_35 = ((/* implicit */signed char) 2147483647);
                        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1414426212)) ? (((/* implicit */int) (short)13183)) : (-1801914389)))) ? (11588699375431014900ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13184))))))));
                    }
                }
                for (short i_20 = 1; i_20 < 16; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 1; i_21 < 13; i_21 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 3) 
                        {
                            var_37 -= (-(((/* implicit */int) (signed char)51)));
                            var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32756))));
                            arr_71 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1801914387)) ? (-869393232) : (((/* implicit */int) (short)14012))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_23 = 2; i_23 < 16; i_23 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-1801914387), (((/* implicit */int) (signed char)89))))))))));
                            arr_74 [2ULL] [i_3] [i_3 + 3] [i_4] [i_20 + 1] [i_21] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) -2070297665))) ? (((((/* implicit */_Bool) 10303733922838336313ULL)) ? (((/* implicit */unsigned long long int) -946788453)) : (9006924376834048ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1)))))));
                            var_40 ^= -1801914389;
                            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */_Bool) min((72057594037927935ULL), (((/* implicit */unsigned long long int) (unsigned char)6))))) ? (((/* implicit */unsigned long long int) -3237643246604968786LL)) : (((unsigned long long int) 14555467478478508792ULL)))))));
                        }
                        for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 4) 
                        {
                            arr_77 [i_3] [i_21] [i_20 + 1] [i_4] [i_4] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13183)) ? (((/* implicit */int) (short)3354)) : (((/* implicit */int) (unsigned char)255))))), (min((14555467478478508813ULL), (7061990566071442925ULL)))));
                            var_42 = ((/* implicit */long long int) (+((~(450394639)))));
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 4) 
                        {
                            arr_80 [i_3 + 1] [i_25] [i_20] [i_3] [i_25] = ((/* implicit */signed char) (short)0);
                            var_43 = min((((/* implicit */int) (short)-1)), (((((/* implicit */_Bool) 450394649)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14007))))) : (450394639))));
                            arr_81 [i_3 + 3] [i_3 + 3] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((int) ((((/* implicit */_Bool) (signed char)39)) ? (15385685710808022103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5127))))))));
                            arr_82 [i_3] [i_4] [i_20] [i_21] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) (~(3891276595231042798ULL)))) ? (15617217067327398990ULL) : (((/* implicit */unsigned long long int) ((int) 1955942736)))));
                            var_44 &= ((/* implicit */short) 138534740);
                        }
                        arr_83 [i_3 + 1] [i_4] [i_20 - 1] [i_3] = ((((/* implicit */_Bool) (+(0)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3914275610U)) ? (-537923166) : (1483267758))))) : ((-(((/* implicit */int) (short)12288)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_26 = 0; i_26 < 17; i_26 += 4) 
                        {
                            arr_86 [i_3] = ((/* implicit */unsigned int) min((18446744073709551590ULL), (((/* implicit */unsigned long long int) 829801471))));
                            var_45 = ((/* implicit */short) max((var_45), (((short) min((((/* implicit */unsigned int) (+(298247201)))), (((((/* implicit */_Bool) 13617978413861398038ULL)) ? (4154271817U) : (((/* implicit */unsigned int) 0)))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_28 = 0; i_28 < 17; i_28 += 3) /* same iter space */
                        {
                            var_46 = (+((+(-413322761))));
                            arr_93 [i_3] [i_3] [i_27] [i_28] = ((/* implicit */int) (short)14006);
                            arr_94 [i_3] [(short)14] [i_3] [i_27] [i_27] [i_28] = ((/* implicit */unsigned char) (+(4828765659848153578ULL)));
                        }
                        for (int i_29 = 0; i_29 < 17; i_29 += 3) /* same iter space */
                        {
                            arr_99 [i_3 - 1] [i_4] [i_4] [i_27] [i_3] = ((/* implicit */unsigned int) ((int) (signed char)127));
                            arr_100 [i_29] [i_3] [i_20 - 1] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned int) 8473642130636345631LL));
                            arr_101 [i_3] [i_20] [i_3] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) -1776795983)))));
                        }
                        for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 3) 
                        {
                            arr_104 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (2255676939U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21403)))));
                            var_47 |= ((/* implicit */short) ((unsigned int) 4828765659848153560ULL));
                            var_48 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)36)) : (-1730643933)))) ? (((/* implicit */int) ((short) 409335610))) : (((((/* implicit */_Bool) 17378373906706521738ULL)) ? (((/* implicit */int) (short)14001)) : (-2004463225)))));
                            arr_105 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned long long int) -1913269921)) : (16551113307943053177ULL)));
                        }
                        arr_106 [i_3 - 1] [i_4] [i_3] [i_27] = ((/* implicit */long long int) ((short) (short)32767));
                        arr_107 [i_3 + 2] [i_4] [i_3 + 2] [i_20 - 1] [i_3] = ((short) (short)32767);
                    }
                    arr_108 [i_3] [i_3] [i_20] = ((/* implicit */short) (-((-(8073439526106277267ULL)))));
                }
                var_49 = ((/* implicit */short) min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)2)))), (max((((/* implicit */int) min(((short)22917), ((short)17)))), (max((((/* implicit */int) (unsigned char)228)), (1220460615)))))));
            }
        } 
    } 
}
