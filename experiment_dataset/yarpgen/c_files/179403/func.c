/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179403
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-14065))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)16352)), (6120157145736329176ULL)));
                                var_17 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(6120157145736329176ULL)))) ? (min((12326586927973222431ULL), (((/* implicit */unsigned long long int) (signed char)83)))) : (((/* implicit */unsigned long long int) max((1283979424U), (((/* implicit */unsigned int) 2147483647))))))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned long long int) 3010987871U)) : (12326586927973222431ULL)))))));
                                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (203569435U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((3010987875U), (((/* implicit */unsigned int) (unsigned short)35169)))) : (203569434U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min(((~(203569445U))), ((-(2019485289U)))))));
                                arr_15 [i_0] [(unsigned short)16] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((676963478), (((/* implicit */int) (signed char)83))))) ? (min((((/* implicit */long long int) -698497445)), (-4343780874846064928LL))) : (((((/* implicit */_Bool) (unsigned short)37871)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2052))) : (7172203795532905201LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [9U] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) (_Bool)0)))))))) ? (min((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) -2147483647)) : (203569438U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4009730607904037999LL)) ? (((/* implicit */int) (short)2051)) : (((/* implicit */int) (short)-9807))))))) : ((~(2275482007U)))));
                        var_19 *= ((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)254)))), (min((((((/* implicit */_Bool) (unsigned short)15849)) ? (((/* implicit */int) (short)-9354)) : (((/* implicit */int) (short)1418)))), (((/* implicit */int) (unsigned char)224))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2079)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (8LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (2275481995U))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (unsigned short)49675)) : (((/* implicit */int) (_Bool)0)))) : (-743332531))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2385520887U)) ? (13) : (((/* implicit */int) (signed char)-61))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) 1662692447))));
                            arr_29 [i_0] [i_0] [i_1] [i_6] [(_Bool)1] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)2))));
                        }
                        for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            arr_33 [i_2] [i_9] [i_6] [11LL] [11LL] [i_2] = (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (-1662692447));
                            var_24 = ((/* implicit */unsigned long long int) (short)-2070);
                            arr_34 [i_6] [i_1] [i_2] [i_0] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 927400655U)) ? (((((/* implicit */_Bool) -423850554)) ? (((/* implicit */int) (signed char)-45)) : (2147483646))) : (((/* implicit */int) (unsigned char)148))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_39 [i_0] [i_6] [i_0] [i_6] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-40))));
                            arr_40 [(unsigned char)14] [(unsigned char)14] [i_0] [(signed char)8] [i_10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1662692447)) ? (((((/* implicit */_Bool) 10977239222825922907ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (1885873269U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2049634851)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26330)))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)32837)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            arr_41 [i_0] [(unsigned short)2] [i_2] [i_10] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 14567761242379999066ULL)) ? (((/* implicit */int) (unsigned short)32699)) : (((/* implicit */int) (short)24279))));
                            var_26 |= ((/* implicit */int) 2409094021U);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) (((_Bool)1) ? ((+(2019485288U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-77)))))));
                            var_28 = ((/* implicit */short) 1277024003);
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            arr_46 [i_0] [(signed char)15] [i_6] [6ULL] [i_0] [(unsigned char)18] [i_0] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (2088960) : (1662692466)))));
                            arr_47 [(signed char)12] [i_1] [(signed char)12] [i_6 - 1] [i_6] [i_6] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1995995627)) ? (((/* implicit */unsigned long long int) (+(7816398769717741982LL)))) : ((+(17855087416129706881ULL)))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)50))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (1050329353293233824LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((-(6916006186767909915ULL)))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483629)) ? (6ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)49))) : (17996806323437568LL))))));
                            var_33 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (signed char)-33)))) : (((/* implicit */int) (unsigned short)13859))));
                        }
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (unsigned short)61433)), (-841778275703313947LL))), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) 17855087416129706881ULL)))), ((_Bool)1))))));
                        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)9979)) ? (((/* implicit */int) (signed char)63)) : (-1456783825)))))) ? (max((min((((/* implicit */unsigned long long int) -1359038287895931599LL)), (9991429252279152023ULL))), (((/* implicit */unsigned long long int) max((1188351701656444772LL), (((/* implicit */long long int) (signed char)-42))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))));
                        var_36 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-8035644404686400986LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)7)))))) : (((((/* implicit */_Bool) 3466976863U)) ? (4719072521843816520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11856))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)16106), (((/* implicit */unsigned short) (short)12191))))), (((((/* implicit */_Bool) (short)2289)) ? (((/* implicit */int) (signed char)-40)) : (948427553))))))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)1)), (-4673418242159286126LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17848020596716966829ULL)) ? (-1380689973) : (-598390704)))) ? (((/* implicit */int) (signed char)64)) : (max((((/* implicit */int) (_Bool)1)), (1380689985)))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65532))))), (max((2160004787879803299LL), (((/* implicit */long long int) (signed char)127))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        for (int i_17 = 1; i_17 < 18; i_17 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)59535)), (2023055028)))) ? (((((/* implicit */_Bool) (unsigned short)31040)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5991))) : (-8035644404686400996LL))) : (((((/* implicit */_Bool) (signed char)127)) ? (1710941512292186328LL) : (((/* implicit */long long int) 3162168513U)))))), (((/* implicit */long long int) min((3923016654U), (((((/* implicit */_Bool) 827990452U)) ? (2876079944U) : (((/* implicit */unsigned int) -1380689966)))))))));
                                arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)34470)), (((((/* implicit */_Bool) 8126464ULL)) ? (((/* implicit */int) (unsigned char)49)) : (-611299564)))));
                                var_39 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39416))))) ? (((((/* implicit */_Bool) (unsigned char)196)) ? (86927579420721565ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 65535U))));
                            }
                        } 
                    } 
                }
                var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (~((~(((/* implicit */int) max(((unsigned short)5984), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))))))));
            }
        } 
    } 
    var_41 *= ((/* implicit */unsigned int) (-((+(((/* implicit */int) max(((unsigned short)45718), (((/* implicit */unsigned short) (signed char)64)))))))));
    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44437)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)1))));
}
