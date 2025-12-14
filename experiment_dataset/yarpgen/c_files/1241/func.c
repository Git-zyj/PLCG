/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1241
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned short) var_12);
        var_18 = ((/* implicit */unsigned short) ((short) arr_0 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            var_19 -= ((/* implicit */signed char) (~((+(((/* implicit */int) (short)-21430))))));
            var_20 = ((/* implicit */_Bool) ((unsigned char) arr_7 [i_2 - 3] [3U]));
            arr_8 [3ULL] [5U] [(unsigned short)0] = ((/* implicit */unsigned char) ((var_9) ^ (((/* implicit */int) arr_4 [i_2 + 3]))));
        }
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((2147483647) ^ (((/* implicit */int) arr_11 [i_4 + 1] [i_4] [i_4 - 1]))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [0LL] [i_4] [(_Bool)1])) ? (var_9) : (((/* implicit */int) arr_9 [11ULL] [i_4 + 1] [(unsigned short)9]))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_18 [6U] [i_4] [2LL] = ((/* implicit */unsigned short) arr_2 [i_6 - 1]);
                        arr_19 [5U] [10ULL] [11U] [5U] [i_4] [(signed char)7] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_6 - 1] [i_5 + 1]))));
                    }
                    var_23 = ((/* implicit */unsigned short) arr_9 [(unsigned short)1] [(signed char)7] [(unsigned short)11]);
                }
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)54082))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        arr_24 [i_4] = ((/* implicit */short) arr_14 [(signed char)11] [i_4] [9U] [(_Bool)1] [6LL]);
                        arr_25 [(unsigned short)7] [(short)11] [i_4] [8LL] [10LL] [8U] = ((/* implicit */short) arr_14 [(unsigned char)7] [i_4] [(short)1] [(_Bool)1] [(unsigned short)5]);
                    }
                    for (signed char i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        arr_29 [(unsigned short)9] [10U] [9ULL] [i_4] = ((/* implicit */short) arr_3 [4U] [i_7]);
                        var_25 = ((/* implicit */short) ((arr_27 [1] [(short)9] [(unsigned short)4] [5U] [(unsigned short)9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1948122505))))))));
                    }
                }
                var_26 |= ((/* implicit */unsigned long long int) var_0);
                arr_30 [i_4] [(short)5] = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
            }
            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [(unsigned short)1] [i_3]))));
        }
        for (unsigned short i_10 = 4; i_10 < 10; i_10 += 4) 
        {
            arr_33 [(unsigned short)4] [(signed char)1] [(unsigned short)5] = ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
            var_28 = ((/* implicit */short) ((unsigned int) arr_14 [i_10 + 2] [i_10] [i_10 + 1] [i_10 - 2] [4]));
            arr_34 [(signed char)5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [6U] [11U]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (16252928ULL)))));
            var_29 ^= (~(((((/* implicit */_Bool) 13994168090891135272ULL)) ? (arr_21 [(unsigned short)7] [0] [(unsigned char)10] [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(short)2] [(unsigned short)4] [7LL] [(unsigned short)10] [9LL]))))));
        }
        var_30 = ((/* implicit */long long int) ((arr_10 [(unsigned short)1] [10ULL]) <= (((/* implicit */int) arr_2 [i_1]))));
        arr_35 [11ULL] [1ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
    }
    /* LoopSeq 2 */
    for (signed char i_11 = 1; i_11 < 7; i_11 += 2) 
    {
        var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_14 [(unsigned short)8] [i_11] [4U] [6ULL] [(_Bool)1]))) == (((/* implicit */int) (!(arr_3 [(unsigned short)7] [(_Bool)0]))))))), (max((arr_13 [i_11 + 1] [(short)3] [i_11] [(_Bool)1]), (arr_13 [i_11 + 1] [(signed char)3] [i_11] [(_Bool)1])))));
        arr_39 [i_11] = ((/* implicit */unsigned char) (((~((-(((/* implicit */int) arr_11 [4U] [i_11] [(unsigned short)1])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(unsigned char)0] [(signed char)6] [(unsigned short)5] [5LL] [2U] [(short)9] [(_Bool)1])))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [(short)4] [(unsigned short)13])) > (((/* implicit */int) var_8))));
        arr_44 [4LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_41 [(short)8] [(short)12])) != (((/* implicit */int) arr_42 [(_Bool)1] [4]))))))))));
    }
    var_33 -= ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47118))) + (11518830225357290057ULL))), (((/* implicit */unsigned long long int) var_3)))));
}
