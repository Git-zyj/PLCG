/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158715
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (short)1527))));
    var_19 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) var_10);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_8 [(short)11] [6ULL] [i_1] [i_2 + 1] = ((/* implicit */short) (signed char)89);
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            arr_15 [i_4] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17864783771924829210ULL)) ? (673282007) : (((/* implicit */int) (short)32765))))) ? ((+(((/* implicit */int) (signed char)-89)))) : ((+(-49647481))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (signed char)-85))));
                            arr_16 [(unsigned short)3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) var_5);
                            var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) < (120361332U)));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) -2818780002204281799LL)) ? (((/* implicit */int) (signed char)83)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)22614)))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (signed char)-89))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7023928677412821858LL)) || (((/* implicit */_Bool) (short)-20427)))))) >= (2818780002204281799LL));
                        arr_24 [i_6] = ((/* implicit */unsigned short) 3490449566U);
                        arr_25 [i_0] [i_1] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5640616606770025390ULL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_0))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_28 [i_6] [i_6] [i_6] = ((/* implicit */int) (signed char)-111);
                        arr_29 [i_0 - 1] [i_1] [i_1] [i_8] [i_8] [i_6] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (7086569189782669269ULL)))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (signed char)-28))));
                        arr_30 [i_0] [i_1] [i_1] [i_1] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) -2818780002204281811LL);
                        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                    {
                        arr_33 [i_6] [i_6] [7] = ((/* implicit */int) ((17864783771924829210ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61)))));
                        arr_34 [i_0] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 120361324U)) ? (((/* implicit */int) (unsigned short)42921)) : (((/* implicit */int) (signed char)-89))));
                        arr_35 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((2818780002204281799LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-23)))));
                    }
                    for (int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 11360174883926882351ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)126))))));
                        arr_38 [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */_Bool) var_6);
                        var_29 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                        arr_39 [i_0] [i_0 - 1] [i_0 - 1] [i_6] [i_0 - 1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (var_12) : (((/* implicit */int) var_15))))) ? ((~(((/* implicit */int) (unsigned short)22584)))) : ((-(722536050)))));
                        var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)4316))));
                    }
                    for (int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (11360174883926882347ULL) : (((/* implicit */unsigned long long int) var_12))));
                        var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)37620))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11360174883926882359ULL)) ? ((~(((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) (short)-30417))));
                    }
                    for (int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << ((((+(((/* implicit */int) var_8)))) - (340)))));
                        var_35 = ((/* implicit */_Bool) var_6);
                        var_36 = ((/* implicit */unsigned short) (-(9401876307726489350ULL)));
                        arr_45 [2] [i_1] [i_6] [i_5] [i_6 + 1] [2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
                        arr_46 [i_0] [i_6] = ((/* implicit */_Bool) (signed char)-61);
                    }
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (short)20412))));
                }
                for (unsigned char i_13 = 2; i_13 < 15; i_13 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)735)) : (1477270929)))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)8191)))))));
                    var_39 += (-(((/* implicit */int) (_Bool)1)));
                    var_40 = ((((/* implicit */_Bool) 4231652107U)) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)152)));
                }
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    for (unsigned short i_15 = 2; i_15 < 15; i_15 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))));
                            arr_54 [(short)10] [i_1] [13ULL] [8LL] [i_14] [i_15 - 2] [i_15] = ((/* implicit */_Bool) 63315189U);
                        }
                    } 
                } 
                var_42 = ((/* implicit */int) min((var_42), ((-(-722536050)))));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 722536048)) ? (11360174883926882347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(7ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (-(var_1))))));
                var_45 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3154526548U)) / (11360174883926882346ULL)));
            }
            arr_58 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1886986954)) || ((_Bool)1)));
            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (~(-5423518265591880033LL))))));
        }
        for (int i_17 = 4; i_17 < 14; i_17 += 1) 
        {
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5423518265591880033LL)) ? (((/* implicit */int) var_14)) : (335319430)))) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (signed char)-2))))) : ((+(((/* implicit */int) (signed char)-44))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15147)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16347))) : (var_11)))) ? (6936500185999050004LL) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (short)1023)))));
            arr_61 [i_17] [i_0 + 1] [i_17 - 3] = min((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)11684)))))), ((~(var_7))));
            var_48 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 722536048)) ? (-6936500185999050005LL) : (((/* implicit */long long int) -722536042))))));
            arr_62 [i_17] = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)(-32767 - 1)))))));
        }
        for (short i_18 = 2; i_18 < 15; i_18 += 4) 
        {
            var_49 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)3951)) ^ (((/* implicit */int) (unsigned short)53851)))), (0)))), (var_17)));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                for (short i_20 = 2; i_20 < 15; i_20 += 3) 
                {
                    for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) (~((-(-19)))));
                            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (~(-6936500185999050005LL))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_22 = 0; i_22 < 16; i_22 += 3) 
        {
            arr_78 [i_0] [i_22] [i_22] = ((/* implicit */_Bool) 2408075707354762616LL);
            var_52 |= ((/* implicit */unsigned short) (+((+(4231652107U)))));
        }
        arr_79 [4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (-2842414345210486389LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17)) || (((/* implicit */_Bool) -6936500185999050007LL))))))))) ? (((((/* implicit */_Bool) var_2)) ? (5007456401674659353ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15147))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)(-127 - 1))), ((+(722536050))))))));
    }
    for (long long int i_23 = 0; i_23 < 17; i_23 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 1) 
                    {
                        arr_90 [i_23] = -722536051;
                        var_53 = ((/* implicit */_Bool) min((var_53), ((_Bool)1)));
                    }
                    for (int i_27 = 0; i_27 < 17; i_27 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) (-((+((~(8767405094470593580LL))))))))));
                        var_55 = -722536049;
                        var_56 = ((/* implicit */unsigned int) max(((~(((((((/* implicit */int) (short)-5331)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)55076)) - (55075))))))), (((((/* implicit */_Bool) min((10852440065519517549ULL), (((/* implicit */unsigned long long int) -328975014))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (unsigned short)3951)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)246))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_28 = 0; i_28 < 17; i_28 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)15145)) ^ (var_6)))) != (4231652107U)));
                        var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) (short)-15675))));
                        var_59 |= ((/* implicit */int) ((((/* implicit */_Bool) (short)-15667)) ? (((/* implicit */long long int) 4231652105U)) : (-7617728338200845535LL)));
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 4) 
                    {
                        arr_98 [i_23] [i_24] [i_25] [i_25] = ((/* implicit */short) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15669))) : (-7617728338200845535LL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (-1002512183))) : (((((/* implicit */_Bool) (unsigned short)28041)) ? (((/* implicit */int) (short)32102)) : (((/* implicit */int) (short)127)))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))));
                        /* LoopSeq 1 */
                        for (short i_30 = 3; i_30 < 15; i_30 += 3) 
                        {
                            var_60 = ((/* implicit */int) -7617728338200845535LL);
                            var_61 = ((/* implicit */_Bool) (-(var_16)));
                            var_62 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((var_17), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (short)15674)) : (var_6)))) : (max((((/* implicit */unsigned int) var_0)), (2572132596U)))))));
                            arr_101 [i_23] [i_30] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (signed char i_31 = 3; i_31 < 15; i_31 += 3) /* same iter space */
                    {
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(63315191U)))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) max(((unsigned short)22789), (((/* implicit */unsigned short) (short)15664)))))))) ? (((((/* implicit */_Bool) 8760198824183873444ULL)) ? (2572132593U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9)))));
                        var_64 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)4329)) + ((-(((/* implicit */int) (unsigned short)127))))));
                        var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) var_16))));
                        var_66 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) (unsigned short)65513)) : (var_1)))) || (((/* implicit */_Bool) var_2))));
                    }
                    for (signed char i_32 = 3; i_32 < 15; i_32 += 3) /* same iter space */
                    {
                        var_67 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)63426))));
                        var_68 = ((/* implicit */long long int) (+(-207652235)));
                        var_69 = ((/* implicit */_Bool) (signed char)114);
                        /* LoopSeq 1 */
                        for (int i_33 = 0; i_33 < 17; i_33 += 3) 
                        {
                            var_70 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                            var_71 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_3)))) ? ((((_Bool)1) ? (((2572132616U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55626))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15664)))))))) : (((/* implicit */unsigned int) var_7))));
                            var_72 = (+((-(1680427870))));
                        }
                    }
                    var_73 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (var_11)))));
                }
            } 
        } 
        var_74 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-112)))), (((((/* implicit */_Bool) (-(13324552673032717488ULL)))) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))));
    }
    for (short i_34 = 0; i_34 < 17; i_34 += 4) 
    {
        arr_113 [i_34] [i_34] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (min((((/* implicit */long long int) 4294967289U)), (var_17))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) (short)-15645))))));
        var_75 += ((/* implicit */_Bool) (unsigned short)3969);
        arr_114 [i_34] = (unsigned short)20305;
        arr_115 [(_Bool)1] [i_34] = ((/* implicit */long long int) ((12304724178049548521ULL) - (((/* implicit */unsigned long long int) var_7))));
        var_76 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65516))));
    }
    var_77 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967271U)) ? (-2147483626) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((-2LL) >= (-3968884001278164798LL))))))) : (var_11)));
}
