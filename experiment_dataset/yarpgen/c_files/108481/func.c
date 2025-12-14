/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108481
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) var_6);
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (+(2973465087U)))) : ((+(3946466603626584747LL)))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) max(((unsigned char)151), ((unsigned char)196)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) arr_4 [i_1] [i_1])))))))), (3946466603626584754LL)));
        }
        for (signed char i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
        {
            arr_10 [i_0] [i_0] = ((/* implicit */short) (-(((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62455)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))) : (-4611686018427387904LL))))));
            arr_11 [i_0] = ((/* implicit */signed char) (unsigned short)30938);
        }
        for (signed char i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)243)))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
            var_11 = ((/* implicit */int) min((var_11), ((~((~(((/* implicit */int) (unsigned short)30939))))))));
            arr_17 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3])) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned char)201)))));
        }
        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
        {
            arr_20 [i_0] [i_0] = max((((/* implicit */unsigned short) max(((signed char)42), ((signed char)-63)))), (((unsigned short) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_4])), (5ULL)))));
            arr_21 [i_0] [i_0] |= ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) arr_9 [i_0] [i_4])))), (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))))) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) (short)-26988)) : (((((/* implicit */_Bool) (short)1985)) ? (((/* implicit */int) var_5)) : (111054661))))) + (27007)))));
            var_12 = ((/* implicit */long long int) max((((unsigned int) max((((/* implicit */signed char) var_1)), (var_0)))), (((/* implicit */unsigned int) ((((unsigned int) arr_1 [i_4])) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_4]))))))))));
            arr_22 [i_4] [i_0] = ((/* implicit */long long int) ((signed char) ((long long int) min((var_6), (arr_4 [2U] [2U])))));
        }
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)93)) > (((/* implicit */int) ((unsigned char) var_3)))));
    }
    for (int i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        var_14 |= ((/* implicit */signed char) var_3);
        arr_26 [i_5] = ((/* implicit */unsigned int) (+(((((_Bool) var_6)) ? (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) (unsigned char)70)))) : (((/* implicit */int) var_5))))));
        var_15 = ((/* implicit */long long int) ((int) ((long long int) arr_9 [i_5 + 2] [i_5])));
    }
    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
        {
            for (long long int i_8 = 1; i_8 < 14; i_8 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6] [i_8])) | (((/* implicit */int) arr_29 [i_6] [i_6] [i_8]))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_3), (var_3))))))));
                    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) arr_14 [i_6]))) : (((((/* implicit */int) (unsigned char)153)) | (((/* implicit */int) (unsigned char)131)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (short)4740))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (signed char)-102))))))));
                    arr_34 [i_6] [i_7 + 1] [i_6] [i_8] = var_3;
                }
            } 
        } 
        var_18 ^= ((/* implicit */unsigned long long int) (~(((int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_3)))))));
        var_19 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -6473404052169659384LL)))) ? (max((((/* implicit */unsigned int) arr_25 [i_6 - 2])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1502089095U))))) : (min((max((3800920482U), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 271870003)))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_0)), (4777152441461019854LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)34589)) != (((/* implicit */int) var_0))))))))) ? ((+(((/* implicit */int) arr_23 [i_6] [i_6 + 1])))) : ((-(((((/* implicit */_Bool) 3639324569U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_6]))))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (long long int i_10 = 4; i_10 < 15; i_10 += 3) 
            {
                {
                    arr_39 [i_6] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) -1070293534384290512LL))) ? (((unsigned int) (~(((/* implicit */int) arr_19 [i_10] [i_9] [i_6]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_4 [i_9] [i_9])) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_8 [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) -2895510327133190249LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_0)))))))));
                    arr_40 [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_8 [i_6] [i_6] [i_6]);
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (+(3U)));
        arr_43 [i_11] = arr_41 [i_11] [i_11];
        var_22 = ((/* implicit */signed char) (((-(((/* implicit */int) min((var_0), (((/* implicit */signed char) var_7))))))) * (((((_Bool) 0ULL)) ? (min((((/* implicit */int) (signed char)63)), (611960727))) : (((/* implicit */int) var_6))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 9; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                {
                    arr_49 [i_13] [i_12 - 1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_11] [i_11])))))) << (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_11] [i_11] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)21)))) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19259))) : (arr_32 [i_12 + 1] [i_13])))))));
                    arr_50 [i_12] [i_12] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) (unsigned char)107))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11] [i_12] [i_13]))) : ((~(3592179224609344245ULL))))) > (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) - (((/* implicit */int) arr_12 [i_11] [i_12])))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
