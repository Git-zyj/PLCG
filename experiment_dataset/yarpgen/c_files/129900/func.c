/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129900
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
    var_19 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        var_20 -= max((((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) >= (((/* implicit */int) arr_1 [7] [i_0 + 4])))), (((((((/* implicit */_Bool) (unsigned short)45299)) ? (7825998462822694814LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))) < (((/* implicit */long long int) ((unsigned int) 1879048192U))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 1124807569U)) || (((/* implicit */_Bool) 14228764643865775490ULL))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))) && ((!((!(((/* implicit */_Bool) (unsigned char)14))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_3 - 3] [i_3] [i_4] = ((/* implicit */unsigned short) arr_7 [i_0 + 3] [i_1 - 1] [i_0]);
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((unsigned long long int) (signed char)-82)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))))));
                                arr_15 [i_0] [(unsigned char)0] [i_2] [i_2] [i_3 - 2] [8ULL] &= ((/* implicit */signed char) ((unsigned long long int) (-(((int) arr_13 [8U] [i_0] [(short)0] [i_0] [8U])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (unsigned short i_6 = 3; i_6 < 8; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) (+((+(max((((/* implicit */unsigned long long int) var_0)), (arr_17 [i_0] [i_5] [i_6 + 1])))))));
                    arr_22 [i_0] = ((/* implicit */unsigned int) (unsigned char)242);
                    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((14228764643865775492ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_16 [i_0 - 1] [i_5] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 4] [i_0 - 1]))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(_Bool)1])))))) : (((((/* implicit */_Bool) arr_20 [i_6 + 2] [i_0 + 1])) ? (arr_20 [i_6 - 2] [i_0 + 3]) : (arr_20 [i_6 + 2] [i_0 - 1])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967264U)) <= (14228764643865775488ULL)));
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_6] [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_6] [(short)8]))))) : (var_7)));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_17))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((unsigned long long int) 277076930199552LL));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0 + 2] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) 277076930199552LL)) ? (2080374784LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            var_31 = var_5;
                            var_32 = ((/* implicit */_Bool) max((var_32), ((!(((/* implicit */_Bool) arr_13 [i_5] [i_8] [i_6] [8] [i_5]))))));
                            var_33 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -6405630639929716694LL)))))) % (arr_7 [i_5] [i_8] [i_5])));
                            arr_29 [i_0 + 4] [i_0] [i_6] [i_8 + 1] [i_9] = ((/* implicit */signed char) ((arr_28 [i_8] [i_8 + 2] [i_8 + 1] [7U] [i_8] [i_8]) <= (arr_28 [i_8 - 1] [i_8 - 1] [i_8 + 2] [4ULL] [i_8] [(signed char)8])));
                        }
                    }
                    for (signed char i_10 = 1; i_10 < 6; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                        {
                            arr_35 [i_5] [i_0] [(unsigned short)4] [i_10 + 4] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18))))))) - ((+(var_13)))));
                            var_34 -= ((/* implicit */signed char) arr_25 [0] [i_5] [i_5] [i_0 + 3]);
                            arr_36 [i_10 + 4] [i_0] [(unsigned char)5] = ((/* implicit */signed char) arr_6 [i_0] [i_10 + 3] [i_0]);
                        }
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                        {
                            arr_39 [i_0] [i_5] [i_6] [i_10] [i_12] = ((/* implicit */unsigned long long int) (-(-2080374785LL)));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_33 [i_10 + 2] [i_6 - 2] [(signed char)7] [i_0] [(signed char)7])) ? (var_13) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (-1))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (arr_23 [i_6 + 2] [i_0] [i_0] [i_0] [i_0 - 1])))) : (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (_Bool)1))))));
                            var_36 *= ((/* implicit */long long int) ((((arr_16 [i_0 + 1] [i_5] [i_10 + 4]) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168)))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_13 = 2; i_13 < 8; i_13 += 2) 
                        {
                            var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_40 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_10 + 1] [i_13 - 2]))));
                            arr_42 [i_0 + 1] [i_5] [i_0] [i_6 - 2] [i_6 - 2] [i_13] [i_13] = ((/* implicit */unsigned short) var_17);
                        }
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_14] [i_14] [i_6 - 1] [i_10 + 1] [i_6 - 1] [9ULL] [5U]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_14] [(signed char)6] [i_6] [i_0]))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_18)) : (arr_41 [i_10 + 1] [i_14] [8LL] [i_14] [i_6])))));
                            var_39 *= ((/* implicit */signed char) (((+((~(4294967264U))))) * ((~(3179784977U)))));
                            var_40 = ((/* implicit */unsigned char) (signed char)57);
                        }
                    }
                    var_41 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (~(14228764643865775490ULL)))) ? (arr_20 [i_0 + 4] [i_6 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_6 - 1] [i_5] [i_5] [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned long long int) ((unsigned short) (~(var_9))));
    var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((~((~(var_13)))))));
}
