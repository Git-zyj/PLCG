/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168687
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)32666)) & (((/* implicit */int) var_5)))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)28142)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 5914286666671778534LL)) || (((/* implicit */_Bool) 5914286666671778524LL))))) % (var_7)))) : (((unsigned long long int) min((((/* implicit */int) (signed char)-103)), (-2147483645))))));
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_9 [i_0] [0] [i_2] = ((((/* implicit */int) (unsigned short)12)) | (((/* implicit */int) (short)-32750)));
                arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-952))))) ? (((/* implicit */unsigned long long int) 9135263385183100600LL)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_0 [i_0])))));
                arr_13 [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_3] [i_3] [i_0]))))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)9760))) - (arr_5 [i_3] [i_3] [i_3]))))));
                var_18 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_5)))));
            }
            for (int i_4 = 2; i_4 < 7; i_4 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_19 = ((/* implicit */int) arr_8 [i_0]);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -9223372036854775797LL))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_5] [i_5] [i_0]))) % (var_11)))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))));
                        arr_24 [i_0] [(short)0] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                        arr_25 [i_0] [i_0] [i_1] [i_4] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)18651)))) - (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90)))))));
                    }
                    arr_26 [i_1] [i_1] [(unsigned short)7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_17 [i_4 - 1] [i_4] [i_4] [i_4 + 3])) : (((/* implicit */int) arr_17 [i_4 + 3] [i_4] [i_4] [i_4 - 2]))));
                }
                arr_27 [i_0] [i_1] [(unsigned char)8] = ((/* implicit */unsigned long long int) max((min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) (short)13683))))), (((signed char) -1237772388)))), (((/* implicit */signed char) ((arr_22 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4] [i_4]) || (((((/* implicit */_Bool) 1485141043)) && (((/* implicit */_Bool) arr_19 [(short)3] [i_0])))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((int) ((unsigned long long int) arr_14 [i_0] [i_1] [i_1] [(_Bool)1])))), ((~(5914286666671778519LL)))));
                            var_23 = ((/* implicit */short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 10081150561728337631ULL)))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                var_24 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_11 [i_10 + 1] [(short)8] [4] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [8LL] [i_1] [i_10]))) - (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) >= (0ULL))))))), ((-(((unsigned long long int) -5323966955262221935LL))))));
                var_25 |= ((/* implicit */unsigned short) arr_28 [i_10]);
                var_26 ^= min((((/* implicit */long long int) max((((((/* implicit */int) var_3)) / ((-2147483647 - 1)))), (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0] [i_0])))))), (min((((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */long long int) var_12)), (35184103653376LL))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_27 |= ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) var_8)))));
                    var_28 = ((/* implicit */short) (unsigned short)33045);
                    arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11]))) + (arr_23 [4LL] [i_1] [i_1] [i_11] [i_12])))) : (arr_6 [i_0])));
                    var_29 = ((/* implicit */int) ((_Bool) arr_38 [i_0] [(short)0]));
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    arr_44 [i_0] [i_1] [i_13] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)12))));
                    arr_45 [i_13] [i_13] [i_13] [i_13] [i_11] = ((/* implicit */int) 0ULL);
                    var_30 ^= ((/* implicit */int) var_2);
                }
                var_31 ^= ((/* implicit */int) ((((((/* implicit */_Bool) 202133265)) ? (-1909493336) : (((/* implicit */int) (unsigned char)0)))) <= (var_4)));
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 9; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((int) 136863163)))))));
                            arr_50 [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_8)) < (arr_34 [i_0] [i_15] [i_15]))))));
                            arr_51 [i_1] [i_11] [i_15] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_30 [i_0] [i_14])))));
                        }
                    } 
                } 
                arr_52 [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4977872775290287239ULL)) ? (((/* implicit */int) var_3)) : (-194176045)))) % (((8289736415132227030ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(short)1] [(unsigned char)2] [i_1])))))));
                arr_53 [i_0] [0LL] [i_11] = ((/* implicit */short) ((((int) var_14)) % (((/* implicit */int) ((10081150561728337627ULL) < (((/* implicit */unsigned long long int) -1058974990)))))));
            }
        }
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (unsigned short)39406))));
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (3ULL))))));
    }
}
