/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155416
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_15 ^= ((unsigned char) max((((((/* implicit */int) (unsigned char)21)) ^ (var_1))), (((((/* implicit */_Bool) -2147483625)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_16 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0])), ((signed char)118))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1] [i_0]);
            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_1])) & (((/* implicit */int) arr_1 [i_1] [i_1]))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1925558988)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-2147483617))))));
        arr_10 [i_2] = ((((((/* implicit */int) (signed char)127)) | (((/* implicit */int) arr_8 [i_2])))) % (((((/* implicit */_Bool) ((signed char) var_4))) ? (((((/* implicit */int) arr_8 [i_2])) | (((/* implicit */int) arr_8 [(unsigned char)8])))) : ((~(var_0))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned char) ((arr_7 [i_3]) / (1925558988)));
        var_20 = ((/* implicit */signed char) min((var_20), (var_14)));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_17 [i_4] = ((/* implicit */unsigned int) ((((arr_0 [i_3]) ? (((/* implicit */int) (unsigned char)165)) : (arr_12 [i_4]))) & (((int) arr_0 [1]))));
            var_21 &= ((/* implicit */unsigned int) ((int) arr_16 [i_3] [i_3] [8U]));
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_22 ^= ((((/* implicit */_Bool) -1385713468)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (_Bool)1)));
                var_23 *= ((((/* implicit */_Bool) ((int) arr_8 [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (arr_4 [i_3] [i_4] [i_5]) : (((/* implicit */int) (signed char)(-127 - 1)))));
            }
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_25 -= ((/* implicit */_Bool) (~(var_1)));
                arr_23 [i_3] [i_4] [i_3] [i_6] |= ((/* implicit */unsigned int) (~(arr_22 [i_3] [(unsigned char)16] [i_6])));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned char) var_0);
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (390491234U) : (3549837253U)))) ? (((var_13) / (((/* implicit */int) arr_20 [i_8] [i_4])))) : (((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                arr_31 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_10)))));
                var_28 = ((/* implicit */unsigned char) var_11);
            }
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                arr_36 [i_4] [i_9] = ((/* implicit */unsigned int) arr_12 [i_3]);
                arr_37 [i_4] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (arr_29 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                arr_38 [i_9] [i_9] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */unsigned int) 1959132798)) : (745130042U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9178))) : (0U)));
                var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & (var_4))) * ((+(((/* implicit */int) (signed char)-87))))));
            }
            var_30 = ((/* implicit */int) ((signed char) (+(6U))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_41 [i_10] = ((/* implicit */short) (+(((var_5) ? (((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_10])) : (((/* implicit */int) arr_13 [i_3] [i_10] [i_10]))))));
            var_31 = ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_3] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))) : (3549837236U));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_46 [i_11] [i_3] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (-510053157) : (-1925558982)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_11]))))) : ((+(((/* implicit */int) var_14)))));
            arr_47 [i_3] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_3] [i_3])) && (((/* implicit */_Bool) ((var_11) ? ((-2147483647 - 1)) : (var_4))))));
            var_32 = ((/* implicit */short) (~(var_12)));
            arr_48 [i_3] [i_11] [i_3] = ((/* implicit */_Bool) ((unsigned int) (signed char)121));
        }
        arr_49 [i_3] [i_3] = var_1;
    }
    /* LoopSeq 2 */
    for (int i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            var_33 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3549837236U)) ? (((/* implicit */int) var_2)) : (arr_50 [i_12])))) ? ((-(var_12))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [i_12] [i_12] [i_13]))))))));
            arr_54 [i_13] [i_13] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_51 [i_13]), (var_7)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_51 [i_13])) ? (((/* implicit */int) arr_51 [i_13])) : (((/* implicit */int) arr_51 [i_13]))))));
        }
        arr_55 [i_12] = (-(((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)236)) && (((/* implicit */_Bool) -1695559758)))), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_51 [i_12]))))))));
        var_34 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) (_Bool)0))), ((+(arr_50 [i_12])))))), ((+((+(745130059U)))))));
    }
    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((1U) & (2151696092U)))) ? (max((var_6), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) arr_51 [i_14])))))))))));
        arr_58 [i_14] [i_14] = (((!(((/* implicit */_Bool) ((int) 1416882246))))) && (((/* implicit */_Bool) var_14)));
        var_36 *= ((/* implicit */_Bool) (~(((((((/* implicit */int) arr_56 [i_14])) > (((/* implicit */int) arr_57 [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) arr_51 [i_14])))))) : (((unsigned int) (signed char)-127))))));
        var_37 = (~(-2147483625));
    }
}
