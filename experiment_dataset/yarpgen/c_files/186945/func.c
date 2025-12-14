/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186945
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_11 *= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_7))))), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ ((+(((/* implicit */int) (_Bool)1)))))))));
            var_12 = ((/* implicit */_Bool) (-((+(arr_2 [i_1 - 1])))));
            arr_6 [i_1] = ((/* implicit */short) arr_4 [i_0]);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((-(((unsigned long long int) arr_7 [4ULL]))))));
            var_14 = ((/* implicit */short) ((int) (_Bool)1));
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) var_9)) : (-1081335215285445108LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_15 = ((/* implicit */int) ((unsigned short) arr_0 [i_0]));
        }
        var_16 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) var_10))));
        arr_14 [i_0] = ((/* implicit */unsigned short) max((-327067051), (((/* implicit */int) (_Bool)1))));
        var_17 -= ((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned char)243)), (arr_0 [i_0]))), (max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_15 [0U] = max((((/* implicit */unsigned long long int) (((+(16114919180970645657ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (max((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13635)) >= (((/* implicit */int) (unsigned char)250))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_2 [9LL]))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 1; i_5 < 10; i_5 += 3) /* same iter space */
        {
            var_19 = (~(-327067054));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    {
                        arr_29 [i_4] [i_5] [(signed char)1] [i_5 - 1] [i_6] [i_7] = ((/* implicit */int) arr_3 [i_4] [i_4] [(_Bool)1]);
                        arr_30 [(signed char)8] [i_7] [i_6] [i_5] [(signed char)8] &= ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((int) var_10));
                        var_21 -= ((arr_35 [i_8 + 1] [i_9 - 1] [i_8] [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            var_22 -= ((arr_12 [i_5 - 1]) * (((/* implicit */unsigned long long int) var_8)));
        }
        for (int i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */int) ((min((arr_39 [i_10] [(_Bool)1] [i_4]), (((/* implicit */unsigned long long int) (unsigned char)255)))) - (((/* implicit */unsigned long long int) ((long long int) arr_39 [i_10] [i_4] [i_4])))));
            var_24 += ((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))));
        }
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) (short)-32758)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))), ((+((-(((/* implicit */int) arr_33 [(_Bool)1] [2ULL] [i_4] [i_4])))))))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) 
        {
            for (int i_12 = 1; i_12 < 9; i_12 += 3) 
            {
                {
                    arr_45 [i_4] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) arr_32 [i_4] [i_4] [i_4] [i_4]);
                    arr_46 [i_11] [i_11] = ((/* implicit */_Bool) -105661162);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_13 = 4; i_13 < 21; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            {
                var_26 = ((/* implicit */short) min((16114919180970645676ULL), (((/* implicit */unsigned long long int) arr_48 [i_13]))));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)24921)))))));
                arr_51 [18ULL] = ((/* implicit */long long int) ((((_Bool) arr_48 [i_13 - 3])) ? (((/* implicit */int) max((arr_48 [i_13 - 3]), (arr_48 [i_13 - 3])))) : (((/* implicit */int) arr_48 [i_13 - 3]))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((13824897978007558124ULL), (((/* implicit */unsigned long long int) -327067048))))) || (((/* implicit */_Bool) max(((~(((/* implicit */int) arr_50 [i_13] [i_14] [i_14])))), (((/* implicit */int) arr_49 [i_13] [i_13 - 4])))))));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (min((((/* implicit */unsigned long long int) (unsigned char)236)), (((16114919180970645648ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_60 [i_15] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_17] [i_16] [i_15])) ? (((unsigned long long int) -327067058)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_17] [i_16] [i_15])))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) (short)23676)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((16114919180970645694ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_58 [i_15] [i_16]))))) ? (17473243005064190143ULL) : (((16408779680983443938ULL) << (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)237)))))))))));
                    arr_61 [i_15] [i_15] [i_16] [18ULL] &= ((/* implicit */long long int) ((min((((/* implicit */unsigned int) 327067031)), (((unsigned int) 2331824892738905987ULL)))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((16005762780535803354ULL) << (((/* implicit */int) (_Bool)1)))))));
    }
    var_34 = ((/* implicit */_Bool) 327067045);
}
