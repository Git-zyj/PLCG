/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108549
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_14 = ((((/* implicit */long long int) 1312219609U)) & (2586356767498448184LL));
            var_15 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_3 [(signed char)19])), (min((var_7), (((/* implicit */long long int) (signed char)-122))))))));
            var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((-(var_3))) & (((/* implicit */long long int) ((/* implicit */int) ((var_4) == (((/* implicit */long long int) var_13))))))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6235570651086209490LL)) ? (2251499109U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41198))))))));
        }
        for (unsigned char i_2 = 4; i_2 < 24; i_2 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((var_10) >= (((/* implicit */unsigned int) arr_2 [i_0] [i_2 + 1]))))), (((unsigned short) ((unsigned int) arr_5 [(signed char)15] [(signed char)15])))));
            var_17 = ((/* implicit */_Bool) var_8);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned int) ((unsigned char) ((short) 1312219609U)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                var_19 *= ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2]));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((signed char) var_0)))));
            }
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
            {
                arr_14 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_2])) ? ((+(2043468187U))) : (((/* implicit */unsigned int) (+(var_6))))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) 2043468187U))), ((-(2147483647)))))) : (((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) : (-2586356767498448184LL)))));
                var_21 = (signed char)13;
            }
            var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [9ULL] [i_2] [i_2] [i_2 + 1]))) & (2982747697U))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2 - 1])) / (var_6))))));
        }
        var_23 ^= ((/* implicit */unsigned short) (((_Bool)0) ? ((+(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (-2586356767498448202LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((0ULL) ^ (((/* implicit */unsigned long long int) arr_1 [2]))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(arr_12 [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((signed char) (unsigned short)51200)))));
    }
    for (signed char i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_6 = 2; i_6 < 9; i_6 += 4) /* same iter space */
        {
            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned char)182))))) ? (max((((/* implicit */int) ((signed char) (unsigned char)255))), (((((/* implicit */int) arr_4 [i_5])) ^ (((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_5 [i_5 + 1] [i_6 + 4]))));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1312219609U)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned short)15817))))))));
            arr_20 [i_5] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_6 + 4] [i_5] [(unsigned short)2])) ? (var_5) : (((/* implicit */long long int) 2043468186U))))));
        }
        for (int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (((-(((((/* implicit */long long int) arr_0 [i_5 - 2] [i_7])) - (2586356767498448175LL))))) - (((((((/* implicit */long long int) arr_1 [i_5])) / (var_3))) + (((/* implicit */long long int) ((((/* implicit */int) (signed char)-111)) + (arr_2 [i_5] [i_5])))))))))));
            var_28 = ((/* implicit */unsigned char) arr_18 [4LL] [4LL] [i_5 + 1]);
            arr_24 [i_5] [i_7 - 1] = ((/* implicit */unsigned long long int) (signed char)122);
            arr_25 [i_5 - 3] [i_7] = ((/* implicit */_Bool) 3482256087456756885LL);
        }
        arr_26 [i_5] = ((/* implicit */unsigned int) (~(-6648225771159180376LL)));
        var_29 = arr_6 [i_5];
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_9)))))) ? (((/* implicit */int) (unsigned char)49)) : ((+(((/* implicit */int) (unsigned char)73))))));
    }
    var_31 |= ((/* implicit */unsigned char) (+(var_7)));
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_32 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2043468186U)) ? (((/* implicit */int) arr_19 [i_8] [i_8])) : (((/* implicit */int) arr_19 [i_8] [i_8])))), (((((/* implicit */_Bool) arr_19 [i_8] [i_8])) ? (((/* implicit */int) arr_19 [(unsigned short)8] [i_8])) : (((/* implicit */int) arr_19 [i_8] [i_8]))))));
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -168655767)))))))) != (max((((/* implicit */long long int) (_Bool)1)), (arr_17 [i_8] [i_8])))));
        var_34 = ((/* implicit */unsigned short) (+((~(-3135155628803492070LL)))));
        var_35 += ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_8])) << (((arr_0 [i_8] [i_8]) - (1301659508U)))));
    }
}
