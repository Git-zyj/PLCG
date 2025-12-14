/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174780
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((((((((_Bool)1) || (((/* implicit */_Bool) var_11)))) ? (((int) var_8)) : (((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))))))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) var_11)), (5ULL))) - (5ULL)))));
        var_19 ^= ((((/* implicit */_Bool) ((((int) var_3)) & (((((/* implicit */int) (signed char)126)) | (((/* implicit */int) var_18))))))) || (((var_13) || (((/* implicit */_Bool) (~(var_5)))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127))))))))));
        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-126))));
    }
    for (int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (signed char i_3 = 4; i_3 < 12; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) var_5);
                    var_23 |= (~(((int) min((((/* implicit */long long int) var_8)), (var_11)))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (((~(var_9))) <= (((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_16))))) <= (((((/* implicit */_Bool) (signed char)-123)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 9646211484923146239ULL)))) || (((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) var_3))))));
            var_26 = ((((/* implicit */_Bool) var_17)) ? (((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((((/* implicit */int) (short)-30)) + (35))) - (5))))) : (((/* implicit */int) var_13)));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_27 *= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551606ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))))) : (((long long int) 1812082935U)));
                        var_28 = ((/* implicit */int) (((-(var_17))) <= (var_17)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                        {
                            var_29 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (signed char)-104))) ^ ((+(((/* implicit */int) (_Bool)1))))));
                            var_30 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) (signed char)30))))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)9)) <= (((/* implicit */int) (short)0)))))));
                            var_31 += ((/* implicit */unsigned int) ((long long int) ((_Bool) (short)1971)));
                        }
                        arr_19 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(107312231U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (((/* implicit */int) var_2))))))));
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) & (((/* implicit */int) (unsigned char)132))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_17))) : (((((/* implicit */_Bool) var_14)) ? (-691822937384314009LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)122))));
            var_33 = ((((/* implicit */int) (!(((/* implicit */_Bool) -2008967960))))) * ((-(((/* implicit */int) var_4)))));
        }
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) var_8))));
            var_35 = ((/* implicit */unsigned char) ((min((9ULL), ((((_Bool)1) ? (11989033952339003475ULL) : (((/* implicit */unsigned long long int) 107312231U)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_33 [i_1 - 1] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */short) min(((~(((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (469762048)))) ? ((+(2147483647))) : (((/* implicit */int) (_Bool)0))))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))) > (((/* implicit */int) ((signed char) (unsigned char)142))))))));
                            arr_34 [i_1] [i_8] [i_9] [i_10] [i_11] &= ((/* implicit */long long int) (_Bool)1);
                            var_37 = ((/* implicit */short) max((1896721473), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 0)) ? (var_9) : (9223372036854775807LL)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            var_38 += ((/* implicit */int) ((((/* implicit */int) ((5224618619931967532LL) <= (((/* implicit */long long int) 3877859994U))))) < (((/* implicit */int) ((2008967959) <= (2084929200))))));
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)25927)) <= (((((/* implicit */int) var_13)) & (((/* implicit */int) var_15))))));
            arr_37 [i_1 - 1] [5U] = ((/* implicit */int) ((var_1) <= (((((/* implicit */int) (short)-8324)) | (((/* implicit */int) var_18))))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) (_Bool)0))));
                            arr_46 [i_14] [i_14] [i_13] [i_14 + 1] [i_13] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_47 [i_12] [11LL] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */int) var_16)) | (var_5)))));
        }
        arr_48 [i_1 + 1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((long long int) 2147483647)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))) / ((((!(((/* implicit */_Bool) (unsigned char)171)))) ? (((/* implicit */long long int) var_3)) : (((long long int) 1895732434619436553ULL))))));
    }
    for (short i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        arr_51 [i_16] = ((/* implicit */int) min((max((((((/* implicit */_Bool) var_0)) ? (4074016702890085370ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) var_15)))))));
        var_41 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-4)))))) <= (((/* implicit */int) ((((/* implicit */int) ((var_9) < (((/* implicit */long long int) var_0))))) < (((/* implicit */int) min(((signed char)32), (((/* implicit */signed char) var_4))))))))));
        arr_52 [i_16] = (_Bool)1;
        var_42 -= min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))), (((var_0) | (((/* implicit */int) ((unsigned char) var_0))))));
        var_43 = ((/* implicit */unsigned long long int) (!(((3877859994U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_44 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-4))));
        var_45 ^= ((/* implicit */_Bool) (((+(var_9))) & (((/* implicit */long long int) ((/* implicit */int) ((4074016702890085370ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_18 = 3; i_18 < 6; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 1) 
        {
            var_46 *= ((/* implicit */short) (+(((/* implicit */int) ((3877859994U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    {
                        arr_66 [i_18] [i_18] [i_20] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) 417107279U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                        var_47 |= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (3877859988U))) < ((+(417107308U)))));
                        arr_67 [i_21] [i_19] [i_20] [i_18] = ((/* implicit */signed char) var_1);
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3877859988U) : (481131247U)))))))));
                    }
                } 
            } 
        }
        var_49 *= ((/* implicit */long long int) ((_Bool) 1820577895));
    }
    for (long long int i_22 = 1; i_22 < 20; i_22 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_23 = 0; i_23 < 22; i_23 += 1) 
        {
            arr_72 [i_23] = (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) * (((/* implicit */int) ((((/* implicit */long long int) var_1)) <= (-6931853317910974281LL)))))));
            var_50 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) ((_Bool) 2147483620))) : (max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_16))))), (((int) 417107302U))))));
            var_51 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) <= (417107307U)))), (6931853317910974283LL)));
            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)3)))) | (((/* implicit */int) ((signed char) var_15)))))))));
        }
        /* vectorizable */
        for (unsigned char i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_25 = 0; i_25 < 22; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 3; i_26 < 21; i_26 += 4) 
                {
                    for (unsigned long long int i_27 = 2; i_27 < 19; i_27 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (var_5))))) ^ ((+(417107302U)))));
                            arr_86 [i_22] [i_24] [i_25] [i_26] [i_26] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) 609065961U)))));
                        }
                    } 
                } 
            } 
            arr_87 [i_22] = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))));
            var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) var_3))));
        }
        for (int i_28 = 0; i_28 < 22; i_28 += 1) /* same iter space */
        {
            var_55 = 417107308U;
            /* LoopNest 2 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (signed char i_30 = 0; i_30 < 22; i_30 += 1) 
                {
                    {
                        var_56 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) <= (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (417107310U) : (var_8))))));
                        var_57 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) / (15452901731560213098ULL))) <= (((/* implicit */unsigned long long int) ((var_0) << (0))))))) * (((/* implicit */int) ((var_17) <= (((((/* implicit */_Bool) 3877859977U)) ? (6931853317910974292LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
                        var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)9870)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59211)) << (((var_0) - (2015847170)))))) ? (max((((/* implicit */unsigned int) (short)9881)), (417107302U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))))));
                    }
                } 
            } 
            var_59 = ((/* implicit */long long int) max((var_59), (((long long int) (signed char)28))));
            arr_95 [i_28] [i_22] [i_22] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (-3543847098113705462LL) : (((/* implicit */long long int) ((/* implicit */int) (short)9881))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) << (((((/* implicit */int) (unsigned char)172)) - (149))))))));
            arr_96 [i_22] [i_28] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7397701655781264520LL)) ? (((/* implicit */int) max((var_16), (((/* implicit */signed char) var_12))))) : ((+(((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (!(var_4)))) << (((((6931853317910974281LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (6931853317910974266LL)))))));
        }
        for (int i_31 = 0; i_31 < 22; i_31 += 1) /* same iter space */
        {
            arr_99 [i_22] [i_31] = ((/* implicit */int) ((signed char) -6322088179462372811LL));
            arr_100 [i_22] [i_31] [i_31] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1LL) > (min((((/* implicit */long long int) 4294967295U)), (6931853317910974281LL))))))) == ((+(28ULL)))));
            var_60 = ((/* implicit */short) var_5);
            var_61 = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))))) << (((var_14) - (8178780976681451095ULL))));
        }
        arr_101 [i_22] [7LL] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) (signed char)95)) ? (18446744073709551569ULL) : (18446744073709551591ULL))), (((((/* implicit */_Bool) var_2)) ? (18422742936651321826ULL) : (((/* implicit */unsigned long long int) var_10))))))));
    }
    var_62 += ((/* implicit */int) var_10);
    var_63 ^= ((/* implicit */unsigned int) var_14);
}
