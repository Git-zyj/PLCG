/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169158
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_4))))), ((-(-831537053))))), (((/* implicit */int) ((signed char) ((_Bool) (_Bool)1))))));
        var_11 &= ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) 15925919603001520709ULL)) || (((/* implicit */_Bool) (+(576460752303423488LL))))))), (max((((/* implicit */int) max((((/* implicit */short) var_0)), (var_2)))), (min((-779240017), (((/* implicit */int) (signed char)85))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_4 [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_4)))) : (((((/* implicit */int) (short)8152)) / (((/* implicit */int) var_1))))))), (max((max((((/* implicit */unsigned int) -427264161)), (2895575205U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
        arr_9 [i_1 + 2] = var_7;
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_12 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1 - 2] [i_1 + 1] [i_2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)9))) <= (7930556483086965850LL))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61337)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13390))) : (0U)))), (max((var_3), (var_7))))));
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-76))))) ? (16231738138931437829ULL) : ((-(3944366830533168490ULL)))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_16 [i_1 + 1] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 293415978U)) ? (((/* implicit */unsigned long long int) 1543740527)) : (var_6)))) ? (((((/* implicit */_Bool) -691431723)) ? (((/* implicit */int) (short)1894)) : (((/* implicit */int) arr_7 [i_1 - 2])))) : (((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (((/* implicit */int) (unsigned short)64030)) : (((/* implicit */int) arr_7 [i_1 + 2]))))));
            var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (2055040175U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) << (((arr_6 [i_1 + 1] [i_1 + 1]) + (1343639120))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                var_15 -= ((/* implicit */signed char) 2215314265U);
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_16 = ((/* implicit */long long int) (-(1224659964U)));
                    var_17 = (+(((/* implicit */int) arr_24 [i_1] [i_1 + 1] [i_4] [i_5 - 1])));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        arr_30 [i_4] [i_5] [i_7] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_18 [i_1] [i_4] [i_7])) ? (356964095800319857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))));
                        var_18 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_5 [i_6])))));
                    }
                }
                for (short i_8 = 4; i_8 < 22; i_8 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3277005898023917630LL)) & (178106218625387127ULL)));
                    arr_33 [i_1] [i_4] [i_5 + 2] [i_8] = (-((-(((/* implicit */int) var_5)))));
                }
                for (short i_9 = 4; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    arr_37 [i_1] [i_9] [i_5] [i_9] = var_4;
                    var_20 = ((/* implicit */short) ((_Bool) 15443520958221767731ULL));
                }
                for (short i_10 = 4; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    arr_42 [i_1] [i_1] [i_4] [i_4] [i_5] [i_10] = ((/* implicit */signed char) arr_11 [i_5 - 1] [i_10] [i_10 - 1]);
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_8))));
                }
                var_22 |= ((/* implicit */_Bool) 1414436487);
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        arr_48 [i_12] [i_4] [i_5] [i_11] [i_12 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(20LL)))) ? ((+(15070239508638387601ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_23 = ((/* implicit */signed char) ((short) arr_28 [i_5 - 1] [i_12] [i_12 + 3] [i_12] [i_12 + 1] [i_12] [i_12]));
                        var_24 = ((/* implicit */unsigned short) (~(12522417340553421469ULL)));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1 + 1] [i_5] [i_5 + 2] [i_12 + 3] [i_12]))) / (4064674474U))))));
                    }
                    for (signed char i_13 = 3; i_13 < 21; i_13 += 3) 
                    {
                        arr_51 [i_1] = ((/* implicit */int) ((693140603U) < (4294967295U)));
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((2310311096572468270LL) | (2499374820292108178LL))))));
                        var_27 = ((/* implicit */unsigned short) (-(653773552)));
                        var_28 |= ((/* implicit */signed char) (~(4294967289U)));
                    }
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (274877906912LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 3ULL))))) : (((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 4; i_14 < 23; i_14 += 2) 
                    {
                        arr_54 [i_1] [i_5] [i_11] = ((/* implicit */int) 196882431844238157ULL);
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)25)))))));
                        arr_55 [i_1] [i_1] [i_1] [i_4] [i_5 + 2] [i_11] [i_14] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51653))) ^ (-1591554357139056091LL)))));
                        var_31 = ((/* implicit */int) ((6166806500992241096LL) >> (0U)));
                    }
                    arr_56 [i_1] [i_4] [i_4] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) 10029043741816175947ULL))));
                }
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)44))));
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((unsigned int) var_0)))));
                }
            }
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))) : (var_7)));
            var_35 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((long long int) -779206141)));
        }
        for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_36 = (signed char)-117;
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1292597306)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) : (2982890720U)));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_26 [i_1 + 2] [i_1 + 2] [(unsigned short)8] [i_1] [i_1] [(_Bool)1] [i_16]), (arr_26 [i_1] [i_1 + 2] [i_1] [i_16] [i_16] [i_16] [i_16]))));
            var_39 = ((/* implicit */_Bool) 1480482351);
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_20 = 1; i_20 < 24; i_20 += 2) 
            {
                var_40 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25583))) : (1096060628U)))));
                var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((signed char) (+(-9022889871752936085LL)))))));
                arr_73 [i_1] [i_16] [i_20] = ((/* implicit */unsigned char) (signed char)12);
            }
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                arr_76 [i_1] [i_16] [i_21] = ((/* implicit */short) min((((((/* implicit */_Bool) 20ULL)) ? (var_7) : (((/* implicit */unsigned long long int) arr_47 [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_16] [i_21] [i_21] [i_21])))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_16] [i_21]) : (((/* implicit */int) (unsigned short)64512))))))));
                var_42 ^= ((/* implicit */signed char) ((unsigned long long int) (short)15844));
            }
        }
        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_18 [i_1] [i_1 - 2] [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-96)), (1969867991)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_1] [i_1]))) * (18446744073709551612ULL))))), ((-(((unsigned long long int) 11535565825648307337ULL)))))))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_79 [i_22] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (1806747627953681459LL)))) ? (((/* implicit */long long int) (((_Bool)1) ? (521595534) : (((/* implicit */int) (unsigned short)65388))))) : (((((/* implicit */long long int) 4059021044U)) / (5153497409359272467LL))))), (((/* implicit */long long int) max(((+(768U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_26 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) : (((/* implicit */int) (unsigned char)114))))))))));
        var_44 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_10))) >= (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_64 [i_22] [i_22] [i_22])))))))) & (min((var_6), (var_7)))));
        var_45 = ((/* implicit */_Bool) ((unsigned short) var_3));
    }
    /* vectorizable */
    for (signed char i_23 = 2; i_23 < 9; i_23 += 2) 
    {
        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_74 [i_23 - 1])) ? (((/* implicit */int) ((14541898285633494016ULL) < (((/* implicit */unsigned long long int) 3776347024U))))) : (((/* implicit */int) (_Bool)1)))))));
        var_47 = (-(((/* implicit */int) (unsigned char)1)));
        var_48 |= ((/* implicit */signed char) (-(17875702518323169996ULL)));
        arr_84 [i_23] = ((/* implicit */long long int) var_10);
    }
    var_49 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 21; i_24 += 1) 
    {
        for (unsigned int i_25 = 3; i_25 < 19; i_25 += 1) 
        {
            {
                arr_90 [i_24] [i_24] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_88 [i_24] [i_24]))))) ? (2147483647) : (-30957620)))) + ((-(((3148679061204358841LL) - (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                arr_91 [i_24] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((1465540784), (((/* implicit */int) (unsigned short)24482)))))));
            }
        } 
    } 
    var_50 *= ((/* implicit */unsigned short) var_8);
}
