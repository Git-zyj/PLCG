/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171125
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
    for (int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_12 |= ((/* implicit */unsigned long long int) (((+(arr_0 [(unsigned char)6] [i_0 + 2]))) - (((((/* implicit */_Bool) arr_0 [8] [i_0 - 1])) ? (var_7) : (arr_0 [(signed char)2] [i_0 - 2])))));
        var_13 = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) 123624174))));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_14 = ((/* implicit */signed char) var_8);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 8; i_4 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */signed char) var_11);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-99)) : (123624174)));
                    var_17 = ((/* implicit */int) var_9);
                }
                for (unsigned int i_5 = 2; i_5 < 8; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((+(((/* implicit */int) var_10)))) & (arr_1 [i_1] [i_2]))))));
                    var_19 = ((/* implicit */unsigned short) 123624180);
                }
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) ((20ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_5)) : (var_7)));
                /* LoopSeq 2 */
                for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((var_11) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_5)))))))));
                    var_23 = ((/* implicit */unsigned int) (!((_Bool)1)));
                }
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((((-2147483647 - 1)) & (var_6))) | ((+(((/* implicit */int) arr_18 [i_1 - 1] [i_2] [i_1 - 1] [i_7 - 1])))))))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((/* implicit */int) var_2)))))));
                }
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */unsigned long long int) -8367767551713834950LL)) * (9570630261971369206ULL)))));
            }
            for (short i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                var_27 += ((/* implicit */unsigned short) (~(-123624174)));
                var_28 = ((/* implicit */unsigned int) ((arr_12 [i_2] [i_2 - 2] [i_1 - 2] [i_8 - 1]) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_12 [i_1 - 2] [i_2 + 3] [i_2 - 1] [i_8])))));
                var_29 = ((/* implicit */signed char) ((_Bool) arr_16 [i_2] [i_2 + 3] [i_8] [i_8 + 1]));
            }
            for (unsigned short i_9 = 2; i_9 < 9; i_9 += 3) 
            {
                var_30 = ((/* implicit */int) var_10);
                var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))));
            }
            for (signed char i_10 = 2; i_10 < 10; i_10 += 4) 
            {
                var_32 = ((/* implicit */int) ((arr_15 [i_1 - 2] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((902288362683368204ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22)))))))));
                var_33 = ((/* implicit */unsigned char) ((long long int) arr_21 [i_1] [i_2]));
            }
            var_34 = ((/* implicit */unsigned int) ((arr_23 [i_1 + 2]) < (((/* implicit */int) (unsigned short)40809))));
            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
        }
        for (unsigned long long int i_11 = 2; i_11 < 7; i_11 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (123624174)));
            /* LoopSeq 2 */
            for (unsigned short i_12 = 3; i_12 < 10; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 3; i_13 < 10; i_13 += 1) 
                {
                    var_37 -= ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) * (var_1))) ^ ((-(var_7)))));
                    var_38 = min((((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (1585912422)))), (-2147483622));
                    var_39 &= ((/* implicit */unsigned short) arr_15 [(short)10] [i_11]);
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 10; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_15 = 2; i_15 < 10; i_15 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */_Bool) arr_16 [i_1] [i_11] [i_12 - 3] [i_14 + 1]);
                        var_41 = ((/* implicit */unsigned short) ((_Bool) var_3));
                        var_42 = ((/* implicit */unsigned char) (-(var_1)));
                        var_43 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (_Bool)1))))));
                    }
                    for (int i_16 = 2; i_16 < 10; i_16 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) var_2);
                        var_45 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -123624177)))) || (((/* implicit */_Bool) arr_17 [i_1] [i_16 + 1] [i_12 - 1] [i_12 - 1] [i_1]))));
                    }
                    var_46 = arr_34 [i_1 - 2] [(signed char)10] [i_12] [i_14 + 1];
                    var_47 = ((/* implicit */unsigned int) (_Bool)1);
                    var_48 *= ((/* implicit */unsigned int) var_5);
                }
                var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_13 [i_1 - 1] [i_12 - 2] [(_Bool)0]), (((/* implicit */int) ((signed char) (signed char)30)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_18 [i_12] [i_12 - 3] [i_12] [i_12 - 3])))) : (((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (3131992228U) : (((/* implicit */unsigned int) var_8)))))))));
            }
            for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 3) 
            {
                var_50 = (((-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_9)))))) / (((/* implicit */int) ((77325624) > (((/* implicit */int) (signed char)117))))));
                var_51 = min((((((/* implicit */_Bool) -1514221462354703898LL)) && ((_Bool)1))), ((_Bool)0));
                var_52 = ((/* implicit */unsigned short) arr_35 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1 - 2]);
            }
            var_53 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (9570630261971369206ULL)));
        }
        for (unsigned long long int i_18 = 2; i_18 < 7; i_18 += 2) /* same iter space */
        {
            var_54 = ((/* implicit */signed char) ((((((/* implicit */int) arr_36 [(unsigned short)2] [i_18] [i_1])) < (((/* implicit */int) (!(((/* implicit */_Bool) 3449284009814747837ULL))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65525)) : (var_8)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) - (1085145338U)))));
            var_55 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (short)(-32767 - 1)))))));
        }
        for (unsigned long long int i_19 = 2; i_19 < 7; i_19 += 2) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_33 [i_1 - 1] [6] [i_19 - 1] [i_1]))))), ((-(-123624187)))));
            var_57 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [(unsigned short)5]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_20 = 4; i_20 < 9; i_20 += 1) 
            {
                var_58 = ((/* implicit */unsigned long long int) var_0);
                var_59 |= ((/* implicit */unsigned short) ((-123624175) / (((/* implicit */int) (short)-18552))));
            }
            for (unsigned short i_21 = 2; i_21 < 10; i_21 += 2) 
            {
                var_60 = ((/* implicit */signed char) (-2147483647 - 1));
                var_61 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                var_62 += max((var_3), (((/* implicit */unsigned long long int) ((2147483647) != (-123624175)))));
                var_63 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-123624174)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_10 [i_19 + 3] [i_1] [i_21 - 2] [i_19 + 3]))))) : ((-(3827020683U)))));
                var_64 = ((/* implicit */unsigned short) 6974631051900609309ULL);
            }
        }
    }
    for (unsigned char i_22 = 3; i_22 < 10; i_22 += 3) 
    {
        var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (8876113811738182409ULL)))))))));
        var_66 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_53 [i_22] [i_22])) : (((/* implicit */int) (_Bool)1))))) <= (11472113021808942301ULL))));
    }
    for (short i_23 = 1; i_23 < 23; i_23 += 1) 
    {
        var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) arr_56 [i_23] [i_23]))));
        var_68 = (+(arr_56 [i_23] [i_23 + 2]));
        var_69 = ((/* implicit */signed char) ((max((var_3), (((/* implicit */unsigned long long int) arr_55 [i_23] [i_23])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17023528777301152903ULL)) ? (123624174) : (((/* implicit */int) (unsigned short)15289)))))));
        var_70 = ((/* implicit */signed char) var_5);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_24 = 2; i_24 < 15; i_24 += 4) /* same iter space */
    {
        var_71 += ((/* implicit */short) (!(arr_57 [i_24 - 1])));
        var_72 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 5895844093143632662ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_24 - 2] [i_24 - 2])) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        var_73 = ((/* implicit */unsigned short) arr_57 [i_24]);
    }
    for (unsigned int i_25 = 2; i_25 < 15; i_25 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_26 = 2; i_26 < 14; i_26 += 4) 
        {
            var_74 = ((/* implicit */signed char) min((var_74), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_0 [i_25] [i_26 + 1]) + (2147483647))) >> (((((/* implicit */int) arr_61 [i_25] [i_25])) - (14257)))))) || (((/* implicit */_Bool) ((3404012661U) >> (((/* implicit */int) (_Bool)1))))))))));
            var_75 += ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_57 [i_26 + 2]))));
            /* LoopSeq 2 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_28 = 3; i_28 < 15; i_28 += 4) 
                {
                    var_76 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_25]))) % (var_4)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_59 [i_25 + 1]))));
                    var_77 = (-(((/* implicit */int) (unsigned short)56626)));
                }
                var_78 = ((unsigned short) 3404012672U);
            }
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
            {
                var_79 &= ((/* implicit */_Bool) ((var_1) / (((/* implicit */int) arr_59 [i_25 - 2]))));
                var_80 = ((/* implicit */unsigned long long int) arr_62 [i_25] [i_25]);
                var_81 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_25] [i_26 + 2])) ? (((/* implicit */unsigned long long int) arr_70 [i_25 + 1])) : (11472113021808942289ULL)));
            }
            var_82 &= ((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_5))))) == (((/* implicit */int) arr_55 [i_25 - 1] [i_26])));
        }
        var_83 = ((/* implicit */int) (signed char)80);
        var_84 = ((/* implicit */short) arr_67 [i_25] [i_25] [i_25] [i_25]);
        var_85 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)49)) * (((/* implicit */int) var_10))));
        var_86 = var_5;
    }
    for (unsigned short i_30 = 3; i_30 < 11; i_30 += 1) /* same iter space */
    {
        var_87 = ((/* implicit */unsigned long long int) var_9);
        var_88 = ((/* implicit */int) (!((!(var_11)))));
    }
    for (unsigned short i_31 = 3; i_31 < 11; i_31 += 1) /* same iter space */
    {
        var_89 = ((/* implicit */_Bool) var_5);
        var_90 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 1982123301)), (((((/* implicit */_Bool) (unsigned short)63793)) ? (3560596681885122593ULL) : (((/* implicit */unsigned long long int) 1367955231U))))));
    }
}
