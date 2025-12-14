/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109588
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) -439755402)) && (((/* implicit */_Bool) arr_1 [i_0]))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_1 [i_0 - 2]))));
            arr_4 [i_0 - 1] = ((/* implicit */short) (+(((/* implicit */int) (short)32560))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (_Bool)1))))) : (((int) arr_1 [i_2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (2956105059U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))) ? (((/* implicit */int) min(((unsigned short)44354), (((/* implicit */unsigned short) arr_3 [i_2]))))) : (((/* implicit */int) arr_1 [i_2 - 1]))))));
        arr_7 [i_2 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)119))))) ? (((/* implicit */int) max((var_1), (var_8)))) : ((-(var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3743985533U));
        var_24 = arr_0 [i_2] [i_2];
        var_25 = (+((((+(((/* implicit */int) var_16)))) >> (((((/* implicit */int) arr_2 [i_2 - 2])) - (30356))))));
    }
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_3 + 1]))))));
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */unsigned short) (short)-9341)), (arr_9 [(_Bool)1])))) ^ (((((/* implicit */int) (signed char)-55)) / (((/* implicit */int) arr_1 [i_3])))))) >= (((/* implicit */int) var_8))));
    }
    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_27 *= max((((/* implicit */unsigned int) 46445520)), (((((/* implicit */_Bool) (~(1535246400U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1558753697) == (((/* implicit */int) (short)12078)))))) : (((arr_14 [i_4] [i_4]) ? (2956105036U) : (1027022428U))))));
            var_28 = var_2;
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) arr_0 [i_4] [i_5]);
                arr_19 [(unsigned short)7] [i_5] [i_5] = arr_9 [i_4 - 2];
            }
            /* vectorizable */
            for (short i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16662)) ? (((/* implicit */int) arr_13 [i_7 + 3])) : (((/* implicit */int) arr_13 [i_7 + 3])))))));
                var_31 = ((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? ((~(((/* implicit */int) arr_1 [i_4])))) : ((-(((/* implicit */int) var_1)))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        var_32 = ((((/* implicit */int) arr_9 [i_4 - 2])) ^ (((/* implicit */int) arr_9 [i_4 - 1])));
                        arr_29 [i_5] [i_7] [i_7] [i_5] [i_4] = ((/* implicit */unsigned short) ((arr_28 [i_4 - 1] [i_4 + 1]) ^ (arr_28 [i_4 - 1] [i_4 - 2])));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)-20588))) ? (var_7) : ((-(((/* implicit */int) var_2))))));
                        var_34 -= ((((/* implicit */int) arr_5 [i_4 - 2])) | (((/* implicit */int) arr_5 [i_4 - 2])));
                    }
                    for (unsigned int i_10 = 3; i_10 < 11; i_10 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned int) (((-(var_7))) | ((-(((/* implicit */int) arr_13 [i_5]))))));
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (((+(((/* implicit */int) var_12)))) - (((/* implicit */int) arr_13 [i_5])))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */int) (short)32342)) >= (((/* implicit */int) arr_23 [i_7 + 3] [i_10 + 1] [i_4 - 1] [i_4 - 1]))));
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_4 - 1] [i_7 + 1])) ? (arr_27 [i_4 - 1] [i_7 + 2]) : (((/* implicit */int) arr_13 [i_4 - 2])))))));
                    }
                    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((var_10) ? (((/* implicit */int) (unsigned short)44765)) : (((/* implicit */int) arr_31 [i_4 + 1] [i_5] [i_4 + 1] [i_7] [i_8] [i_11] [i_11 - 1])))) - (44765)))));
                        var_40 = ((/* implicit */int) var_4);
                        arr_36 [i_4] [i_5] [i_11] [8U] = (short)18177;
                    }
                    var_41 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_4)))) + (((/* implicit */int) ((_Bool) var_19)))));
                }
            }
            arr_37 [(short)6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) min((94282116U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [(unsigned short)1] [i_5])), (arr_18 [i_4] [i_4] [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_17 [i_4] [i_12])) : (((var_10) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((((/* implicit */int) (short)-9259)) + (2147483647))) >> (((arr_30 [i_4] [i_12] [i_4] [i_4] [i_4] [i_12]) - (1779083857))))))))))));
            arr_41 [(unsigned short)2] [i_12] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >= (((/* implicit */int) (unsigned short)64468)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2]))))) : (max((arr_8 [i_4 - 2]), (arr_8 [i_4 + 1])))));
            arr_42 [i_4] [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_4 - 1])), (((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (arr_26 [i_4] [i_4] [i_4] [i_12] [i_12] [(short)7])))) ? ((~(6U))) : (((/* implicit */unsigned int) (+(var_19))))))));
        }
        arr_43 [i_4] [(short)3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]))))) ? (((/* implicit */int) (unsigned short)64468)) : (((/* implicit */int) ((unsigned short) var_13)))))) ? (((((/* implicit */_Bool) arr_20 [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 1])) ? (((/* implicit */int) arr_20 [i_4] [i_4 - 2] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_20 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32560)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_4]))))) ? (arr_26 [i_4] [4U] [i_4] [4] [i_4] [i_4]) : (((var_5) ^ (((/* implicit */int) var_10)))))));
        var_43 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) (short)-20604)), ((unsigned short)65535))), (((unsigned short) arr_25 [i_4] [i_4] [i_4] [i_4]))))), (49125228U)));
    }
    /* LoopSeq 1 */
    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            arr_48 [i_13] [i_14] [i_14] &= ((/* implicit */short) arr_47 [i_13]);
            arr_49 [i_13] [i_13] [i_14] = ((/* implicit */short) arr_44 [i_14]);
            /* LoopSeq 4 */
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)10930)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_52 [i_15] [i_14] [i_14] [i_13])) : (((/* implicit */int) var_1))))));
                var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) var_11))));
                arr_53 [i_13] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_13])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_14] [i_13])) || (var_10)))) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17)))), (((/* implicit */int) min((arr_44 [i_13]), (((/* implicit */unsigned short) arr_47 [i_13])))))))));
            }
            /* vectorizable */
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_13])) ? (((((/* implicit */int) arr_47 [i_14])) % (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_46 [i_14] [i_16]))));
                var_47 -= ((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_16])) << (((((/* implicit */int) arr_44 [(unsigned short)18])) - (28739)))));
            }
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                var_48 = ((/* implicit */short) arr_47 [(unsigned short)19]);
                arr_60 [i_13] [i_14] [(unsigned short)9] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_58 [9U] [(_Bool)1] [i_17]), (((/* implicit */short) (_Bool)0))))) + ((-(((/* implicit */int) arr_58 [i_13] [i_14] [i_17]))))));
                var_49 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) (short)-16422)) + (((/* implicit */int) (signed char)111)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                arr_61 [i_14] = ((/* implicit */signed char) ((((/* implicit */int) arr_55 [i_13] [i_14] [i_17])) >= (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_50 [i_13] [i_14])) : (((/* implicit */int) var_4)))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_2)))) - (40047)))))));
            }
            /* vectorizable */
            for (unsigned short i_18 = 2; i_18 < 22; i_18 += 4) 
            {
                var_50 ^= ((/* implicit */unsigned int) arr_45 [i_18 - 1]);
                arr_64 [i_18 + 1] = ((/* implicit */short) (~(((/* implicit */int) arr_58 [i_18 - 2] [i_18 - 2] [i_18 - 2]))));
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    var_51 = (+(((/* implicit */int) (short)-5995)));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        var_52 = ((/* implicit */short) (-(((unsigned int) 1027022428U))));
                        var_53 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (49125237U))) ? (((/* implicit */int) arr_67 [i_20])) : ((~(((/* implicit */int) arr_45 [i_13]))))));
                        var_54 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-6646)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-28984)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 2; i_21 < 20; i_21 += 1) 
                    {
                        arr_74 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_13]))));
                        var_55 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1967779108)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_19] [i_13])) * (((/* implicit */int) (short)6213))))) : (441102244U)));
                        var_56 = ((/* implicit */short) ((((var_7) + (2147483647))) >> (((/* implicit */int) (!(var_3))))));
                    }
                }
                var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) ((unsigned short) (short)28962)))));
                arr_75 [i_13] [i_18 - 2] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_18 + 1] [i_18 - 2] [i_18 - 2])) && (((/* implicit */_Bool) var_7))));
            }
            var_58 ^= ((/* implicit */unsigned int) arr_57 [i_13] [i_14] [2U]);
            var_59 -= ((/* implicit */unsigned short) max((var_5), (((/* implicit */int) max((arr_51 [i_13] [i_13] [i_13]), (arr_68 [i_13] [(unsigned short)17] [i_13]))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_22 = 1; i_22 < 22; i_22 += 1) 
        {
            var_60 = (-(((((/* implicit */_Bool) (unsigned short)49496)) ? (-1558753698) : (((/* implicit */int) (unsigned short)5470)))));
            var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) ((short) ((int) (unsigned short)57344))))));
        }
    }
}
