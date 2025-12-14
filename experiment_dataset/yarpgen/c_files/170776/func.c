/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170776
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (min(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(min((5416862709826200453ULL), (2702819966847822838ULL)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_8 [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1])), ((-(15743924106861728778ULL))))), (min((((/* implicit */unsigned long long int) (unsigned short)54517)), (15743924106861728777ULL)))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_0 [9ULL])));
            arr_10 [i_0] [(signed char)12] [i_0] = ((/* implicit */long long int) var_12);
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            arr_13 [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (5416862709826200453ULL)));
            arr_14 [i_0 - 2] [i_0 - 2] = arr_0 [12ULL];
            arr_15 [i_0 + 2] [i_2] = ((/* implicit */unsigned short) 15743924106861728777ULL);
            arr_16 [i_0] [i_2] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) var_15)))));
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_3] = ((/* implicit */signed char) arr_11 [i_0]);
            arr_21 [i_3] [i_3] = ((/* implicit */signed char) (unsigned short)52263);
            arr_22 [i_3] [i_3] = ((/* implicit */unsigned short) var_0);
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                {
                    {
                        arr_28 [i_0] [(signed char)6] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27760))))) | (13029881363883351157ULL)));
                        arr_29 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) (signed char)57))) - (((2702819966847822838ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                arr_32 [i_0 - 2] [i_6] [i_3] [i_6] = ((/* implicit */long long int) (unsigned short)57941);
                arr_33 [i_0] [i_3] [i_6] [i_3] = ((/* implicit */signed char) (((~((+(((/* implicit */int) (signed char)-8)))))) / (((/* implicit */int) ((unsigned short) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)6007))))))));
                arr_34 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((15743924106861728778ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0 - 3] [i_0 + 2] [i_0] [i_0] [i_0 + 1])))))) <= (((/* implicit */int) ((-1LL) < (((/* implicit */long long int) (~(((/* implicit */int) var_15))))))))));
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                arr_39 [i_0] = ((/* implicit */unsigned short) arr_11 [10LL]);
                arr_40 [i_0 - 3] [i_0] [i_0] [(signed char)8] = ((/* implicit */signed char) (-(((/* implicit */int) var_17))));
            }
        }
        for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 4; i_9 < 9; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 11; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            arr_51 [i_8 - 3] [i_9] [i_0] [i_8 - 3] = ((/* implicit */signed char) max((var_0), (2702819966847822838ULL)));
                            arr_52 [i_11] [i_10] [6LL] [i_9] [i_10] [i_10] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_17))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            arr_55 [i_0] [i_0] [i_9 - 1] [i_10] [(signed char)9] [i_12] = ((/* implicit */unsigned short) arr_19 [i_0] [i_0]);
                            arr_56 [i_10] [i_10] [i_8] = var_18;
                            arr_57 [i_0 - 4] [i_8] [i_9] [i_10] [i_0 - 4] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_3)) + (2147483647))) << (((min((13029881363883351162ULL), (((/* implicit */unsigned long long int) arr_7 [i_8] [i_8] [i_10 + 2])))) - (45842ULL))))) ^ (((/* implicit */int) arr_49 [i_0 + 1] [i_8] [i_12] [i_9] [i_0] [i_9]))));
                            arr_58 [i_0] [i_8] [11LL] [i_10] [(unsigned short)8] [i_0 - 2] = ((/* implicit */unsigned long long int) var_18);
                        }
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            arr_62 [i_0] [i_0] [i_9 - 3] = ((/* implicit */signed char) ((long long int) 15743924106861728778ULL));
                            arr_63 [i_0] [i_10] [i_10 + 2] = ((/* implicit */signed char) min((((unsigned long long int) arr_1 [i_10 + 1])), (((arr_1 [i_10 + 2]) - (arr_1 [i_10 - 2])))));
                            arr_64 [11LL] [11LL] [i_9] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (~(15743924106861728782ULL)));
                        }
                        for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            arr_67 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0 + 2] [(unsigned short)10]);
                            arr_68 [i_0] [i_0] [(unsigned short)1] [i_0] [i_0] = ((/* implicit */long long int) var_15);
                            arr_69 [i_0 - 3] [i_0 - 3] [(unsigned short)11] [i_8] [i_9] [i_8] [i_0 - 3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_14] [i_10 + 2] [i_9 + 3] [i_0] [i_0]))))) >= (((/* implicit */int) ((min((11958682825696276445ULL), (((/* implicit */unsigned long long int) arr_61 [i_10])))) <= (15743924106861728782ULL))))));
                            arr_70 [i_14] [i_8] [i_9] [i_8] [i_8] [i_14] = ((/* implicit */unsigned short) 2702819966847822834ULL);
                        }
                        arr_71 [i_0] [i_0] [i_9] = ((long long int) (unsigned short)16383);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 11; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        {
                            arr_80 [i_15] = ((/* implicit */long long int) arr_47 [i_0 - 1]);
                            arr_81 [i_0 - 1] [i_8] [i_17] [i_16] [i_17] = ((/* implicit */signed char) var_0);
                            arr_82 [i_0] [(signed char)10] [i_15] [i_0] [i_0] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) 8504645562144299255LL)))), (((((/* implicit */_Bool) arr_74 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_15])) || (((/* implicit */_Bool) arr_60 [i_0 - 2] [i_0 - 3] [i_15] [i_16 - 2] [i_16 + 2]))))));
                        }
                    } 
                } 
            } 
            arr_83 [i_0 - 2] [i_8] [i_8] = ((/* implicit */signed char) arr_72 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    {
                        arr_88 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) - (796146798998012739LL)))));
                        arr_89 [i_18] = ((/* implicit */unsigned short) (-(10LL)));
                        arr_90 [i_19] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)59529))));
                        arr_91 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (signed char)-10);
                        arr_92 [i_19] [i_18] [i_8 + 1] [i_0 - 3] = ((/* implicit */unsigned long long int) var_17);
                    }
                } 
            } 
        }
    }
    for (signed char i_20 = 4; i_20 < 11; i_20 += 4) /* same iter space */
    {
        arr_96 [i_20] [i_20] = min((arr_85 [i_20] [i_20 - 3] [i_20 - 1]), (max((((/* implicit */long long int) var_12)), (arr_87 [i_20] [i_20 + 2] [i_20 - 2] [7ULL] [i_20] [7ULL]))));
        arr_97 [i_20] = ((/* implicit */unsigned long long int) var_8);
    }
    var_19 = ((/* implicit */unsigned short) max((max((min((((/* implicit */long long int) var_8)), (10LL))), (((/* implicit */long long int) var_2)))), (max((((/* implicit */long long int) var_2)), (max((6228792501599304230LL), (((/* implicit */long long int) (signed char)127))))))));
}
