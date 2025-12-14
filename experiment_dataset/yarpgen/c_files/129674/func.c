/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129674
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
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)204));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_8 [i_3] [i_1] [i_2] [i_2]))));
                        var_16 = ((/* implicit */long long int) max((min((((/* implicit */int) arr_8 [i_0 - 3] [i_1] [i_1 - 1] [i_2 + 1])), ((-(((/* implicit */int) var_13)))))), (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) (unsigned short)32081)), (3260265336U)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 4; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned int i_7 = 3; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            arr_30 [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)33454)) ? (var_8) : (((/* implicit */unsigned long long int) var_2))))));
                            arr_31 [i_4 - 3] [i_7] [(signed char)4] [i_7] [i_8] [i_5] = ((/* implicit */signed char) ((arr_21 [i_4 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33451)))));
                            var_17 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            } 
            arr_32 [i_4 + 2] [i_5 - 2] = ((/* implicit */short) ((unsigned int) ((unsigned int) var_5)));
        }
        for (int i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            arr_37 [i_4] = ((/* implicit */_Bool) ((var_12) + (((/* implicit */int) arr_17 [i_4 - 1] [i_4] [i_4 - 1]))));
            arr_38 [(short)9] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)33454)))) < (((/* implicit */int) (unsigned short)32082))));
            arr_39 [i_9] [4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)33473)) : (((/* implicit */int) arr_34 [i_4 - 3] [i_9 - 1]))));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32071)) ? (((/* implicit */int) (unsigned short)33461)) : (2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) : (-8605730365389327646LL));
                    arr_45 [i_4] [i_11] [i_4 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-34)) <= (((/* implicit */int) var_1))));
                    arr_46 [i_4] [i_9] [i_9] [i_11] = ((/* implicit */unsigned long long int) var_5);
                }
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            arr_53 [i_13] [7ULL] [i_10] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((short) arr_5 [i_9 - 1] [15ULL] [i_9 + 1]));
                            arr_54 [(_Bool)1] [i_9] [i_10] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) ((_Bool) arr_1 [i_9 + 1] [i_9 + 1]));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_9 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_9 - 1]))));
                arr_55 [9] [9] = ((/* implicit */unsigned long long int) (unsigned short)33470);
            }
            for (int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                var_20 = ((unsigned int) ((((/* implicit */int) arr_26 [i_4] [(unsigned char)3] [i_9 + 1] [i_14] [i_14])) << (((var_2) - (3882678621U)))));
                arr_59 [i_14] [0LL] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_4 + 2]))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                arr_63 [i_4 - 2] [i_9] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((17000266686487015035ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) - (arr_33 [i_9 + 1])));
                arr_64 [i_4] [i_4] [i_15] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_57 [i_4])) ? (-4238953998861789791LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14615))))));
            }
            for (int i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                arr_67 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 294471732U)) ? (((/* implicit */int) arr_6 [i_9 - 1])) : (((/* implicit */int) (_Bool)1))));
                arr_68 [i_4 - 1] [i_9 + 1] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((short) 4238953998861789773LL)))));
            }
        }
        for (long long int i_17 = 0; i_17 < 14; i_17 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                arr_75 [i_4] [i_17] [i_18] = ((/* implicit */_Bool) ((unsigned int) (unsigned short)33470));
                var_21 = ((((/* implicit */int) (signed char)37)) % (((/* implicit */int) var_5)));
            }
            arr_76 [i_4 - 4] [i_4] [7] = ((/* implicit */unsigned int) ((unsigned char) var_13));
        }
        for (short i_19 = 4; i_19 < 13; i_19 += 2) 
        {
            arr_79 [i_4 - 1] [i_19 - 4] [i_19] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8))))) & (((arr_41 [i_4 - 2] [i_19] [i_19]) - (((/* implicit */int) var_14))))));
            arr_80 [i_4 - 3] = ((/* implicit */unsigned char) (unsigned short)33454);
            arr_81 [(signed char)1] [(signed char)1] [i_19] = ((/* implicit */long long int) arr_42 [(signed char)8] [i_4] [i_4] [i_4]);
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50920)) > (((/* implicit */int) (_Bool)0))));
            arr_82 [i_4] [13ULL] = arr_71 [i_19 - 3] [i_19 - 3] [i_4] [i_4];
        }
        arr_83 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_4 - 4] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) : (arr_65 [i_4 + 2] [i_4 - 4] [i_4 - 2])));
        arr_84 [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_4 + 1] [i_4 - 4] [i_4] [i_4 + 1])) ? (1032192U) : (((/* implicit */unsigned int) -262620211))));
        arr_85 [(signed char)10] [i_4 - 3] = ((/* implicit */signed char) var_9);
    }
    var_23 = ((/* implicit */int) var_0);
}
