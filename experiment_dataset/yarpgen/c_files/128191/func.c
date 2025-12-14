/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128191
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 144115119356379136LL)) ? (0ULL) : (18446744073709551615ULL)));
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_3] [i_3] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))) ? (var_5) : (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
                                arr_16 [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((unsigned int) 3ULL))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))));
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 20; i_7 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 20; i_9 += 3) 
                        {
                            var_23 *= ((/* implicit */unsigned int) ((unsigned short) var_6));
                            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_14))) : (((/* implicit */long long int) var_9))));
                        }
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_6))))))));
                        }
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))));
                        var_31 = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 4186181511U)) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) 453045200U)) ? (18446744073709551615ULL) : (0ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_13)))))))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))) : (((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10))))));
        /* LoopNest 2 */
        for (long long int i_13 = 3; i_13 < 20; i_13 += 1) 
        {
            for (unsigned char i_14 = 3; i_14 < 18; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 3; i_15 < 18; i_15 += 3) 
                    {
                        for (long long int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_9)) : (var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))))) : (((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))))))));
                            }
                        } 
                    } 
                    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) : (((unsigned int) var_0)));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7)))) ? (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10))))))));
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (2982981948U) : (3557033327U)));
                }
            } 
        } 
        var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned long long int) -9223372036854775790LL)) : (18446744073709551615ULL)))));
    }
    for (unsigned short i_17 = 4; i_17 < 20; i_17 += 2) 
    {
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38242))) : (4695381981514916113LL)));
        arr_54 [i_17] = ((/* implicit */unsigned int) var_8);
        arr_55 [i_17] [i_17] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1772787224U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 737933991U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27302))) : (1939915877U)))) ? (-3547471177365732426LL) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-7909231527490400544LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))))))) : (((((/* implicit */_Bool) ((unsigned short) -7909231527490400544LL))) ? (((/* implicit */unsigned long long int) 617276062U)) : (18446744073709551615ULL)))));
        var_41 = ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_14) : (var_14)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
        {
            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) var_5))));
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                var_43 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10));
                arr_62 [i_17] [i_17] [i_17] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                arr_63 [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (var_14) : (((long long int) var_7))));
            }
        }
        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) /* same iter space */
        {
            arr_66 [i_17] [i_20] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) var_15))) : (((/* implicit */int) var_1))))) : (var_5)));
            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((unsigned short) var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)))) ? (((((/* implicit */_Bool) 3471148447U)) ? (((/* implicit */long long int) 2361081350U)) : (9223372036854775790LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_1)))))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
    {
        for (long long int i_22 = 0; i_22 < 15; i_22 += 4) 
        {
            {
                var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7)))) ? (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((unsigned short) ((signed char) var_7))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 3) 
    {
        arr_75 [i_23] = ((/* implicit */long long int) var_8);
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */_Bool) 5357368433943848989LL)) ? (2812966872U) : (1482000406U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))))));
    }
    for (long long int i_24 = 0; i_24 < 15; i_24 += 1) 
    {
        arr_79 [i_24] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))));
        arr_80 [14U] &= ((/* implicit */unsigned char) var_5);
        arr_81 [i_24] = ((long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        var_49 = ((/* implicit */unsigned int) var_16);
    }
    for (unsigned int i_25 = 4; i_25 < 12; i_25 += 1) 
    {
        var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)32579)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_14))) : (var_14)))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) -9223372036854775790LL)) ? (-9223372036854775793LL) : (-9223372036854775780LL)))));
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))));
    }
    /* vectorizable */
    for (unsigned int i_26 = 0; i_26 < 11; i_26 += 1) 
    {
        arr_86 [i_26] [i_26] = ((/* implicit */signed char) var_4);
        var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))));
    }
}
