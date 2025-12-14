/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158789
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
    var_16 -= ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~(arr_1 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_18 ^= arr_2 [i_1];
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(-285047084)))), (max((arr_1 [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1])))))))));
        var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        var_21 *= ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])) : (arr_9 [i_2] [i_2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1377)))))))));
        var_22 = ((/* implicit */signed char) ((unsigned int) (~(arr_11 [i_2 - 1] [i_2 - 1]))));
    }
    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 1) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_3]);
        var_23 &= (!(((/* implicit */_Bool) (~((-(arr_15 [i_3])))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_21 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) : (arr_10 [i_4]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_4])))))));
        var_24 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_19 [i_4]))))));
        arr_22 [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_4])), ((-(-285047082)))));
    }
    for (short i_5 = 2; i_5 < 10; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_31 [i_5] [i_5] [i_8 + 1] [i_6 - 2]);
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_25 ^= (+(((((/* implicit */_Bool) arr_36 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_9])) ? (((/* implicit */int) min((((/* implicit */short) arr_36 [i_9] [i_8] [i_5] [i_5] [i_9])), (arr_27 [i_5])))) : ((+(((/* implicit */int) arr_2 [i_5])))))));
                            var_26 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_34 [i_7] [i_6 - 2] [i_7] [i_7] [i_5 - 2] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((arr_13 [i_7]), (((/* implicit */unsigned char) arr_20 [i_7]))))))) : ((~((~(arr_10 [i_6])))))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) (~(((((/* implicit */long long int) (~(arr_11 [i_5] [i_5])))) ^ (((arr_37 [2U]) ? (arr_32 [i_5] [i_5] [i_5] [i_5 - 1]) : (((/* implicit */long long int) arr_10 [i_5]))))))));
        arr_41 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_5])) / ((-(((arr_26 [i_5]) ? (((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5] [(unsigned char)6])) : (((/* implicit */int) arr_28 [i_5] [i_5]))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 24; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((arr_42 [i_10]) ? (((/* implicit */int) arr_42 [i_10])) : (((/* implicit */int) arr_43 [i_10] [i_10]))))))), ((+(((arr_44 [i_10] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) (short)-1352)))))))));
                            var_29 += ((/* implicit */short) (+(((/* implicit */int) arr_13 [10ULL]))));
                            var_30 &= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_43 [(unsigned char)20] [(unsigned char)20]))))) / (min((7095044874492326975ULL), (((/* implicit */unsigned long long int) (short)1372))))))));
                            var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-11))))) : ((-(4272755833776278910LL)))));
                        }
                        arr_56 [i_10] [i_10] [i_12] [i_13] [i_11] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(arr_50 [i_13] [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2] [i_12 + 1])))), (arr_15 [i_13])));
                        var_32 = ((/* implicit */unsigned long long int) (+(max((arr_49 [i_11] [i_11] [i_12 + 1] [i_13] [i_13] [i_13]), (((/* implicit */unsigned int) arr_52 [i_10] [i_10] [i_11] [i_10] [i_11] [i_10]))))));
                    }
                    var_33 = ((/* implicit */unsigned char) (!(arr_48 [i_10] [i_10])));
                    arr_57 [i_11] [i_10] [i_11] = min((((/* implicit */short) (_Bool)1)), ((short)-1391));
                }
            } 
        } 
    } 
}
