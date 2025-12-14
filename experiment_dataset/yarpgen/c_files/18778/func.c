/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18778
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
    var_14 = ((/* implicit */short) 676213567);
    var_15 = ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */int) ((short) (+(-824586019))));
            arr_7 [i_0] = ((/* implicit */long long int) var_1);
        }
        var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_0])), (max((((/* implicit */unsigned short) (short)19964)), (var_4))))))) / (min((max((1125899906842624LL), (-6505761081574743037LL))), (((/* implicit */long long int) (-(-951348645))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2146050527)) ? (((arr_9 [i_2] [i_2]) + (((/* implicit */unsigned int) -1537480595)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6)))))))) == (arr_8 [i_2])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_9 [i_2] [i_3])))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2] [i_3])))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(6505761081574743037LL))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9)))))));
                        var_20 |= ((/* implicit */short) var_4);
                        arr_20 [i_2] [i_3] [i_4] [i_5] |= ((/* implicit */int) ((((((/* implicit */int) (unsigned short)41374)) == (-2147483645))) ? (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)24156)))))));
                    }
                } 
            } 
            var_21 ^= ((/* implicit */signed char) ((6505761081574743037LL) != (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19991)))))))));
            arr_21 [i_3] [i_2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (unsigned short)61490)) >> (((((/* implicit */int) var_11)) - (5452))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((((31ULL) - (((/* implicit */unsigned long long int) arr_22 [i_6])))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)41380)), (arr_22 [i_6])))))))))));
        var_23 -= ((/* implicit */long long int) 1391249783U);
        /* LoopSeq 3 */
        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (int i_9 = 3; i_9 < 20; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_34 [(signed char)9] [i_7 + 2] [i_7 + 2] [i_7 - 1] [19ULL] = (!(((/* implicit */_Bool) arr_24 [i_7] [i_8])));
                            var_25 ^= ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (-(6505761081574743037LL))))), (max(((~(arr_22 [i_8]))), ((+(((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (signed char i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */_Bool) min(((-(arr_31 [i_7 + 1] [i_12 + 1]))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 1059311984)) || (arr_25 [i_7] [i_13])))))))));
                            arr_44 [i_6] [i_11] [i_12] = ((/* implicit */int) arr_41 [i_6]);
                            arr_45 [i_6] [7] [5] [7] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) max((((unsigned short) var_13)), (((/* implicit */unsigned short) ((_Bool) 627053745)))))) - (17)))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_36 [i_7] [i_7 + 2] [i_7 - 1]) + (arr_29 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 2])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41374))) % (arr_36 [i_7 + 2] [i_7 + 2] [i_7 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)23196)) == (-1)))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            arr_48 [(signed char)20] [i_14] [(short)14] = (short)8183;
            var_28 = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-8997)) - (-937727650)))));
            arr_49 [i_14] = ((/* implicit */short) arr_42 [i_6]);
        }
        for (int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) min((((/* implicit */unsigned int) var_11)), (1391249785U))))) == ((~(((((/* implicit */_Bool) var_1)) ? (arr_22 [i_15]) : (((/* implicit */int) (short)-23634)))))))))));
            var_30 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_47 [(signed char)20] [i_15] [i_15])) ^ (((var_0) - (((/* implicit */unsigned long long int) arr_47 [i_6] [i_15] [i_15]))))));
        }
        var_31 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 105553116266496LL)) / (arr_50 [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_10)))))));
    }
}
