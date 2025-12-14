/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113754
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
    var_16 = ((/* implicit */unsigned long long int) var_4);
    var_17 += ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)177)), (var_13)))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))));
    var_18 |= ((signed char) (-((~(((/* implicit */int) var_4))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_15))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)78))));
                        var_21 ^= ((/* implicit */unsigned long long int) (signed char)105);
                    }
                } 
            } 
            arr_10 [(unsigned char)18] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)30162))) & (745635515981676325LL)))) || (((/* implicit */_Bool) max((1872579348), (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))))));
        }
        arr_11 [i_0] = ((/* implicit */signed char) max(((~(4294967283U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) >> (((((/* implicit */int) max((((/* implicit */short) (unsigned char)79)), ((short)-17787)))) - (57))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_19 [i_0] [2LL] [i_0] = ((/* implicit */unsigned short) (~(max((((arr_6 [i_0] [i_4 - 1] [(signed char)5]) ? (((/* implicit */long long int) -27042468)) : (7995118837848614479LL))), (arr_8 [i_0 + 4] [i_4 + 2])))));
                    arr_20 [i_0] [i_0] [i_5] [(unsigned short)8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_4 - 1])) ? (((/* implicit */int) arr_7 [i_4 - 1])) : (((/* implicit */int) (unsigned char)179)))), (((/* implicit */int) arr_7 [i_4 + 1]))));
                    arr_21 [i_0] [15U] [i_5 + 2] = ((/* implicit */unsigned char) min(((~(arr_9 [i_0]))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_4 - 1]))) & (arr_9 [i_0])))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_7 [i_6])) > (((/* implicit */int) var_4))))))));
        var_23 = (i_6 % 2 == zero) ? (((/* implicit */short) ((max(((+(3236492835435326658ULL))), (((/* implicit */unsigned long long int) ((unsigned int) var_9))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6] [i_6])) << (((((/* implicit */int) arr_13 [i_6] [0U])) - (808))))))))) : (((/* implicit */short) ((max(((+(3236492835435326658ULL))), (((/* implicit */unsigned long long int) ((unsigned int) var_9))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6] [i_6])) << (((((((/* implicit */int) arr_13 [i_6] [0U])) - (808))) - (14352)))))))));
        var_24 = ((/* implicit */int) (unsigned char)164);
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */_Bool) ((arr_3 [i_10 + 1] [i_7 + 3] [i_9]) & (arr_3 [i_10 - 1] [i_7 + 2] [i_8])));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_9] [i_9] [i_10 + 1])) % (((/* implicit */int) arr_6 [i_9] [i_7] [i_10 - 1]))));
                        }
                    } 
                } 
            } 
            var_27 *= ((/* implicit */short) (+(((/* implicit */int) ((arr_29 [(short)4] [i_6] [i_7 + 1] [i_7 + 3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))))));
            var_28 = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_3 [i_6] [i_7 + 2] [i_6]) >> (((arr_3 [i_6] [i_7 + 2] [i_6]) - (1155753378)))))) : (((/* implicit */unsigned char) ((((arr_3 [i_6] [i_7 + 2] [i_6]) + (2147483647))) >> (((((arr_3 [i_6] [i_7 + 2] [i_6]) - (1155753378))) + (1723246053))))));
        }
        for (int i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
        {
            arr_41 [i_11 + 3] [i_6] [i_6] = (unsigned char)255;
            var_29 += ((/* implicit */unsigned short) (unsigned char)27);
            arr_42 [i_6] = ((/* implicit */short) ((max((max((6780073403023216501ULL), (((/* implicit */unsigned long long int) (unsigned short)18064)))), (((/* implicit */unsigned long long int) ((arr_24 [i_6]) >= (((/* implicit */int) arr_2 [i_6] [i_6] [i_11 - 1]))))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_31 [i_6] [i_6]), (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) arr_25 [i_6])), (7050723357788856532LL))))))));
        }
        for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) var_7);
            arr_47 [i_6] [i_6] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-105))));
            arr_48 [i_6] [i_12] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_34 [i_12 + 2] [0] [i_12 + 1] [(unsigned short)11] [i_12 - 1] [i_12]), (arr_34 [i_12 - 1] [i_12 - 1] [i_12 - 1] [(short)12] [i_12 + 2] [i_12 + 2]))))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            var_31 = (unsigned short)1;
            var_32 += ((/* implicit */unsigned char) (signed char)-116);
            var_33 = ((/* implicit */long long int) arr_34 [(_Bool)1] [i_13] [(signed char)1] [i_13] [i_13] [(signed char)1]);
            arr_52 [i_6] [(unsigned char)12] |= ((/* implicit */long long int) arr_51 [i_13]);
            /* LoopSeq 3 */
            for (long long int i_14 = 2; i_14 < 12; i_14 += 2) 
            {
                arr_55 [i_14] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-105)) * (((/* implicit */int) arr_38 [i_6] [i_14 - 1]))));
                var_34 = ((/* implicit */unsigned char) (-(arr_29 [i_6] [12] [i_14 - 1] [i_14 - 2])));
            }
            for (unsigned long long int i_15 = 4; i_15 < 10; i_15 += 1) 
            {
                var_35 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [(short)4] [i_13])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_32 [4] [4]))));
                /* LoopNest 2 */
                for (short i_16 = 2; i_16 < 12; i_16 += 4) 
                {
                    for (short i_17 = 2; i_17 < 12; i_17 += 2) 
                    {
                        {
                            arr_62 [i_6] [10] [i_15] [i_15] [i_15 + 2] [(signed char)7] = ((/* implicit */int) ((13766040191249157094ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_15 - 2])))));
                            var_36 += ((/* implicit */long long int) ((((/* implicit */int) arr_61 [i_13] [i_13] [i_16 - 2] [i_17] [i_17 - 1] [i_17] [i_17])) + (((/* implicit */int) arr_61 [i_13] [i_15] [i_16 - 1] [i_16] [i_17 - 2] [i_17] [6ULL]))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)30162))) <= (6487643808376432623LL))) || ((!(((/* implicit */_Bool) (short)-32078))))));
                var_38 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_6] [i_6])) / (-1))) >= ((~(((/* implicit */int) (_Bool)1))))));
                var_39 = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (signed char i_18 = 1; i_18 < 12; i_18 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_6] [i_6] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18])) <= (2147483647)));
                arr_65 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_6])) ? (((/* implicit */int) arr_46 [i_6])) : (((/* implicit */int) arr_46 [i_6]))));
            }
        }
        var_41 = ((/* implicit */unsigned char) ((262143LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) (unsigned char)168))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_6] [i_6])), (arr_8 [(unsigned char)13] [16LL]))))))))));
    }
}
