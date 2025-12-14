/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168424
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [9U] [17U] = ((/* implicit */short) ((((max((((/* implicit */unsigned int) var_1)), (526252858U))) > (((/* implicit */unsigned int) max((((/* implicit */int) (short)-31269)), (1312238627)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) ((signed char) var_12))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
        var_16 = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) /* same iter space */
        {
            arr_9 [i_0] [i_1 - 2] [i_0] = ((/* implicit */long long int) (short)-31263);
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-73))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_17 = ((short) ((int) arr_7 [i_2 - 3]));
            var_18 = ((/* implicit */long long int) var_2);
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) ((short) var_13))) || (((((/* implicit */_Bool) (unsigned char)130)) && (((/* implicit */_Bool) 15252151564913589810ULL))))))), ((((!(((/* implicit */_Bool) (short)-31263)))) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 2])) : (max((-1345064951), (((/* implicit */int) var_2))))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_16 [(short)0] [(short)0] [(short)0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65534))));
                arr_17 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) max((arr_14 [i_2 - 2] [i_2 - 2] [(short)5]), ((!(((/* implicit */_Bool) (unsigned char)114))))));
                var_19 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_3] [i_0] [i_0])) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 2]))) <= (arr_12 [i_2 + 4]))))));
                var_20 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_0] [(short)12] [i_3])), ((unsigned char)216)))))));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 14; i_4 += 4) 
            {
                var_21 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4 + 3] [i_4] [i_4])) << (((/* implicit */int) arr_15 [i_4 + 3] [i_4] [i_4 - 1]))));
                var_22 *= ((/* implicit */unsigned char) ((signed char) var_8));
                arr_21 [i_0] = ((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_2 - 3] [i_2])) && (((/* implicit */_Bool) var_7)));
            }
            for (int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned char)11] [i_2 - 2] [i_2 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_2] [i_2 + 2] [i_2 - 4]))))) ? (((((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 1] [i_2 - 1])) | (((/* implicit */int) arr_15 [i_2 + 1] [i_2 - 2] [i_2 - 1])))) : (((int) arr_15 [i_2] [i_2 + 3] [i_2 - 3]))));
                arr_25 [i_5] = ((/* implicit */unsigned short) ((signed char) ((((int) arr_7 [(_Bool)1])) + (((/* implicit */int) ((signed char) var_12))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_32 [i_5] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(unsigned short)4]))))) ? (((((/* implicit */int) arr_31 [i_7] [i_7] [i_7])) + (var_12))) : ((-(((/* implicit */int) var_14)))))), (((/* implicit */int) arr_14 [i_7] [i_5] [i_0]))));
                            arr_33 [i_5] [i_5] [i_5] [i_6] [i_7 + 2] = ((/* implicit */signed char) min((max((((/* implicit */int) (short)31118)), (-1))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_15 [i_2 - 1] [i_5] [i_5]), (((/* implicit */unsigned char) (_Bool)1))))))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */int) ((18446744073709551602ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 4] [i_7 - 2] [i_7 - 2])))))) ^ (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_14))))))));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */unsigned long long int) (+(((long long int) ((unsigned short) 1036944380U)))));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_36 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4181715001U)) >= (((unsigned long long int) (unsigned char)250))));
            var_26 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) >= (arr_22 [i_8] [i_8] [i_0] [i_0]))) ? (((/* implicit */int) min(((signed char)64), (((signed char) arr_8 [(unsigned short)0] [(unsigned short)0] [i_8]))))) : (((((/* implicit */int) max(((unsigned short)20800), (((/* implicit */unsigned short) arr_11 [i_0]))))) >> (((((/* implicit */int) ((unsigned short) var_4))) - (13387)))))));
        }
    }
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_27 *= ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) (short)-31263)))));
                    arr_46 [i_11] [i_11] [i_11] [8U] = ((/* implicit */unsigned short) var_9);
                    arr_47 [i_11] [i_11] [i_11] [i_9] = (unsigned short)45941;
                }
            } 
        } 
        arr_48 [i_9] = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
    }
    for (signed char i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_57 [i_14] [i_13] [0ULL])))) : (var_10)))) ? (((((/* implicit */int) (unsigned char)192)) | (((/* implicit */int) (short)-31267)))) : (((((/* implicit */int) arr_52 [i_12] [i_13])) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_53 [i_12] [18ULL]))) - (4417470426806437553ULL)))))));
                arr_60 [i_12] [10ULL] [i_13] [i_14] = ((/* implicit */unsigned short) ((((min((((/* implicit */int) arr_54 [i_14] [i_13])), (340310208))) + ((~(arr_55 [i_12] [2]))))) >= (var_12)));
                arr_61 [i_12] [i_13] [i_14] [i_12 + 1] = ((/* implicit */int) (unsigned short)26131);
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_69 [i_12 - 1] [i_13] [i_14] [i_15] [i_16] [i_12 - 1] = ((/* implicit */unsigned short) min(((~(arr_66 [i_12 - 1]))), (arr_66 [i_12 - 1])));
                            var_29 = ((/* implicit */short) max((((/* implicit */int) arr_67 [i_12 - 1] [i_12 + 1] [i_12 + 1])), ((~(((/* implicit */int) arr_67 [i_12 + 1] [i_12 - 1] [i_12 + 1]))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5648)) && (((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 4; i_17 < 21; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    {
                        arr_74 [i_12] [i_17] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_63 [i_17 - 3] [i_17 - 1] [i_17 - 2] [i_17 - 3]), (((/* implicit */int) var_3)))))));
                        arr_75 [i_12] [i_18] = ((/* implicit */unsigned int) arr_55 [i_12] [i_12]);
                        arr_76 [i_18] [i_13] [i_13] [i_12] = ((/* implicit */int) (+(4294967285U)));
                        arr_77 [i_12] [i_12] [7] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_12] [i_12] [i_17] [i_18] [i_18]))))) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60))) > (598293230U)))) << (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_7))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 568883377U)) && (arr_68 [i_12] [(unsigned short)15] [(signed char)8] [i_13] [i_17 - 2] [i_18])))), ((unsigned short)18927))))));
                    }
                } 
            } 
        }
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            var_32 = ((/* implicit */_Bool) ((max((4294967281U), (((/* implicit */unsigned int) max((var_4), (arr_57 [i_12] [i_19 + 1] [i_19 + 1])))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)18921)))) > (((((/* implicit */unsigned long long int) var_15)) ^ (arr_70 [i_12 - 1] [i_19 + 1] [(short)6])))))))));
            arr_80 [i_12] [i_19] [i_19] = ((/* implicit */_Bool) max((((short) var_6)), (((/* implicit */short) ((_Bool) (((_Bool)1) && (((/* implicit */_Bool) (short)31266))))))));
            arr_81 [i_19] [i_19 + 1] [i_19] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_12] [i_19 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)18937))) : (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20806))) : (var_10)))))));
        }
        /* LoopSeq 3 */
        for (long long int i_20 = 4; i_20 < 19; i_20 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) 145708366);
            var_34 ^= ((/* implicit */unsigned short) (_Bool)1);
        }
        for (long long int i_21 = 4; i_21 < 19; i_21 += 1) /* same iter space */
        {
            var_35 += ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (short)30417))))) <= ((+(((/* implicit */int) (short)19372)))))));
            var_36 = ((/* implicit */signed char) var_3);
            var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((min((var_8), (((/* implicit */unsigned short) (signed char)1)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (2441550484759121043ULL)))))))));
            var_38 = ((/* implicit */short) max((((/* implicit */int) (signed char)62)), (max((((/* implicit */int) ((((/* implicit */int) (unsigned short)50369)) > (((/* implicit */int) (short)-19373))))), (((int) (unsigned short)18927))))));
        }
        /* vectorizable */
        for (long long int i_22 = 4; i_22 < 19; i_22 += 1) /* same iter space */
        {
            arr_90 [i_22] [i_12] [i_12 - 1] = ((/* implicit */signed char) ((arr_70 [i_12 - 1] [i_12 - 1] [i_12 + 1]) ^ (arr_70 [i_12 + 1] [i_12] [i_12 - 1])));
            /* LoopNest 2 */
            for (short i_23 = 2; i_23 < 20; i_23 += 2) 
            {
                for (unsigned short i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned int) var_6);
                        arr_95 [i_24] [i_24] [6U] [i_24] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= ((+(((/* implicit */int) arr_93 [i_12 + 1] [i_12 + 1] [i_22 + 2] [i_23 - 1] [i_23] [i_24]))))));
                        var_40 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_82 [i_22])))) >= (var_1)));
                        arr_96 [i_12 + 1] = ((/* implicit */unsigned short) var_15);
                    }
                } 
            } 
            arr_97 [i_12] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) arr_89 [i_12 + 1])) || (((/* implicit */_Bool) var_15))));
        }
        arr_98 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_12 + 1] [(unsigned short)7] [(unsigned short)7] [i_12] [i_12 + 1] [i_12]))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) : (5346418088445014708ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-18)) <= (((/* implicit */int) arr_58 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1]))))))));
        var_41 -= ((/* implicit */signed char) (~(((int) ((((/* implicit */int) arr_87 [i_12 - 1])) - (((/* implicit */int) var_0)))))));
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        arr_102 [i_25] = ((/* implicit */signed char) var_2);
        var_42 = (-(((/* implicit */int) (!(var_11)))));
        arr_103 [i_25] = ((/* implicit */short) ((int) min(((short)504), ((short)9))));
        /* LoopNest 3 */
        for (unsigned short i_26 = 0; i_26 < 16; i_26 += 4) 
        {
            for (long long int i_27 = 0; i_27 < 16; i_27 += 1) 
            {
                for (signed char i_28 = 0; i_28 < 16; i_28 += 2) 
                {
                    {
                        arr_111 [i_25] [i_26] [i_27] [i_25] = ((((long long int) (-(5874661593314745045LL)))) + (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_8 [i_28] [i_26] [i_25])))))));
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((unsigned short) var_7))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)22881)))) ? (arr_104 [i_26] [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47765)))))))))));
                        arr_112 [i_27] [i_27] [i_26] [i_25] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_91 [i_25] [i_25] [i_28] [i_25])) << (((/* implicit */int) arr_2 [i_25]))))));
                    }
                } 
            } 
        } 
        arr_113 [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_15))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_25])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)10076)) / (((/* implicit */int) (_Bool)1))))) : (min((var_15), (max((var_15), (((/* implicit */unsigned int) -582785935))))))));
    }
    var_44 = ((/* implicit */unsigned short) ((max((-6073542094647524350LL), (((/* implicit */long long int) (short)527)))) << (((((/* implicit */int) (unsigned short)37913)) - (37900)))));
    var_45 = ((/* implicit */unsigned short) 1954405272801064822LL);
    var_46 = ((short) 0LL);
}
