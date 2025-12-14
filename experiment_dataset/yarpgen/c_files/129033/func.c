/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129033
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
    var_18 += ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((min(((-(arr_3 [i_0]))), (((/* implicit */int) ((unsigned short) (unsigned char)220))))) % ((-(arr_3 [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) var_15);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_2 [i_0]))))));
                var_22 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (unsigned char)228)), ((~(var_8))))), (((/* implicit */unsigned long long int) (unsigned short)65535))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((/* implicit */int) var_9);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) var_16);
                            var_25 &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (unsigned char)228)), (13189848967603449648ULL))) >> (((/* implicit */int) min((arr_17 [i_1] [i_1] [i_1] [(_Bool)1] [i_1]), (arr_17 [i_0] [i_1] [i_3] [(signed char)6] [i_5]))))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */long long int) ((unsigned short) min((max((arr_12 [i_0] [i_1] [i_0]), (((/* implicit */int) var_14)))), (((/* implicit */int) max(((unsigned char)28), (((/* implicit */unsigned char) (_Bool)1))))))));
                var_27 += ((/* implicit */unsigned long long int) var_16);
            }
            var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)28)))))))), (((unsigned short) ((arr_4 [(unsigned short)8] [i_1] [i_1]) == (((/* implicit */int) arr_2 [i_0])))))));
            var_29 = ((/* implicit */unsigned long long int) var_9);
        }
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))), ((unsigned char)228)));
                        var_31 += ((/* implicit */unsigned long long int) arr_18 [i_0] [i_7] [1ULL]);
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 4; i_9 < 8; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) var_17);
                            var_33 = ((/* implicit */signed char) ((_Bool) (unsigned char)28));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) (-(((arr_4 [i_0] [i_6] [i_8]) - (var_16)))));
                            var_35 = ((/* implicit */_Bool) 12442531629871973234ULL);
                        }
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            var_36 ^= ((/* implicit */int) (_Bool)1);
                            var_37 = ((/* implicit */unsigned char) arr_23 [i_0] [i_0] [i_7] [i_7] [i_0] [i_0]);
                        }
                    }
                } 
            } 
            var_38 = arr_8 [i_0] [i_0] [i_0];
            var_39 = ((/* implicit */unsigned short) arr_10 [i_0] [i_6] [(short)5] [i_0]);
            var_40 = ((/* implicit */int) min(((~(var_0))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) % (var_15)))), (var_0)))));
        }
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            var_41 = ((/* implicit */unsigned short) (-(min((arr_34 [i_0] [i_0] [i_0] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned long long int) var_2))))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_42 &= ((/* implicit */unsigned char) (~((~((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    var_43 ^= var_2;
                    var_44 += ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_45 &= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_20 [(_Bool)1] [(signed char)3] [i_13] [i_14])) * (((/* implicit */int) var_7))))));
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned long long int) arr_29 [i_15] [i_15 - 1] [i_15] [i_15 - 1] [(_Bool)1]);
                        var_48 = ((/* implicit */_Bool) var_3);
                        var_49 += ((/* implicit */_Bool) (~(arr_16 [i_15 - 1] [6U] [i_15 - 1] [6U])));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_50 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) * (arr_16 [4] [(_Bool)0] [(_Bool)0] [i_0])));
                        var_51 = ((/* implicit */_Bool) (~(var_12)));
                        var_52 = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        var_53 = var_10;
                        var_54 = ((/* implicit */short) ((signed char) arr_11 [i_0] [i_0] [i_14]));
                        var_55 = ((/* implicit */long long int) arr_32 [i_0] [i_12] [i_0] [(_Bool)1] [(unsigned short)5] [i_17]);
                        var_56 = ((/* implicit */unsigned int) ((int) arr_2 [i_0]));
                        var_57 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_0] [i_12] [i_13] [i_13] [i_0] [i_13])) << (((((arr_3 [i_0]) + (1955879267))) - (26)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_0] [i_12] [i_13] [i_13] [i_0] [i_13])) << (((((((arr_3 [i_0]) + (1955879267))) - (26))) - (1388000714))))));
                    }
                }
                for (signed char i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                {
                    var_58 = ((/* implicit */_Bool) arr_36 [i_18] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        var_59 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_29 [i_0] [i_0] [i_0] [1ULL] [(_Bool)1]))) * ((~(((/* implicit */int) arr_48 [i_0] [i_12] [i_13] [i_0] [i_13]))))))) <= (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_19] [i_0] [i_19]) > (((/* implicit */int) arr_35 [i_0])))))))));
                        var_60 ^= ((/* implicit */unsigned int) var_12);
                        var_61 = arr_54 [i_0] [(unsigned char)7] [i_13] [(unsigned short)4] [i_19];
                        var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) min((arr_50 [3U] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned long long int) ((arr_54 [i_0] [(_Bool)1] [i_0] [i_18] [i_19]) << (((((/* implicit */int) arr_5 [i_0] [(unsigned short)8])) + (116)))))))))));
                        var_63 = var_13;
                    }
                    for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_1))));
                        var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) ((max((arr_13 [i_0]), ((-(12442531629871973234ULL))))) % (((/* implicit */unsigned long long int) arr_27 [8LL])))))));
                        var_66 = ((/* implicit */int) ((_Bool) (unsigned char)29));
                        var_67 = ((/* implicit */unsigned short) var_3);
                    }
                    var_68 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) var_0))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (arr_45 [i_0])))));
                    var_69 = ((/* implicit */signed char) var_1);
                }
                /* vectorizable */
                for (signed char i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        var_70 = ((/* implicit */unsigned int) ((signed char) var_15));
                        var_71 = ((/* implicit */int) var_11);
                    }
                    for (int i_23 = 2; i_23 < 7; i_23 += 3) 
                    {
                        var_72 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_26 [i_0] [i_12] [i_12] [i_21] [i_21]))));
                        var_73 += ((/* implicit */_Bool) (~(arr_18 [i_0] [i_0] [(short)7])));
                        var_74 = ((/* implicit */short) (-(arr_64 [i_23 - 2] [i_23] [i_0] [i_23] [i_23])));
                        var_75 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_0))) >> (((/* implicit */int) arr_67 [i_23] [i_23] [i_23 + 3] [i_23] [i_13]))));
                    }
                    for (long long int i_24 = 1; i_24 < 7; i_24 += 2) 
                    {
                        var_76 = ((/* implicit */int) (~(var_8)));
                        var_77 = ((/* implicit */unsigned long long int) ((_Bool) var_15));
                        var_78 = ((/* implicit */unsigned long long int) (unsigned char)228);
                    }
                    var_79 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-17694))) > (1312293411U)));
                }
            }
            var_80 = ((/* implicit */_Bool) ((arr_49 [i_12] [i_0] [2] [i_0] [2]) >> (((((/* implicit */int) max((arr_52 [i_12] [i_12] [i_12] [i_12] [i_0] [i_0]), (((/* implicit */unsigned char) var_13))))) - (150)))));
            var_81 = ((/* implicit */unsigned long long int) var_4);
        }
        var_82 += var_10;
    }
    for (signed char i_25 = 0; i_25 < 17; i_25 += 1) 
    {
        var_83 += min(((_Bool)1), (var_13));
        var_84 = ((/* implicit */unsigned long long int) arr_72 [4]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_26 = 0; i_26 < 17; i_26 += 3) 
        {
            var_85 = ((/* implicit */unsigned int) max((var_85), (((/* implicit */unsigned int) var_5))));
            var_86 ^= ((/* implicit */unsigned int) var_1);
            var_87 = ((/* implicit */unsigned long long int) max((var_87), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_74 [i_25])))))));
        }
        for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 4) 
        {
            var_88 ^= ((/* implicit */unsigned short) arr_77 [5ULL] [5ULL]);
            var_89 = ((/* implicit */unsigned long long int) var_3);
            /* LoopNest 2 */
            for (unsigned short i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_90 = ((/* implicit */signed char) arr_83 [4] [i_27] [i_27] [i_27] [i_27]);
                        var_91 = ((/* implicit */_Bool) max((var_91), (((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((max((((arr_73 [1LL]) >> (((((/* implicit */int) (unsigned short)65535)) - (65525))))), (var_0))) - (15682387971249715574ULL))))))));
                        var_92 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_8)))))))));
                        var_93 = ((/* implicit */unsigned long long int) var_15);
                        var_94 = ((/* implicit */short) (+(((/* implicit */int) arr_76 [i_29] [i_28] [i_27]))));
                    }
                } 
            } 
            var_95 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15)) || (((/* implicit */_Bool) max((arr_80 [i_25]), (((/* implicit */int) arr_77 [i_27] [i_25]))))))))));
        }
        for (unsigned short i_30 = 0; i_30 < 17; i_30 += 3) 
        {
            var_96 = ((/* implicit */unsigned short) 1782262957061655187ULL);
            var_97 = ((/* implicit */unsigned short) min((var_0), (var_8)));
        }
        for (unsigned short i_31 = 3; i_31 < 14; i_31 += 2) 
        {
            var_98 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [(_Bool)0] [i_31 - 2])))))) << (((/* implicit */int) max(((!(var_13))), (var_4))))));
            var_99 = ((/* implicit */_Bool) var_10);
            var_100 = ((/* implicit */int) max((var_100), (((/* implicit */int) ((-237255747) >= (((/* implicit */int) (unsigned short)0)))))));
            var_101 = (~((~(((/* implicit */int) arr_76 [i_25] [i_25] [i_31])))));
            var_102 = ((/* implicit */_Bool) max((var_102), (((/* implicit */_Bool) var_17))));
        }
    }
}
