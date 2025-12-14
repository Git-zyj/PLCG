/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124804
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) max((max((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) var_11)))))), (((((/* implicit */int) (unsigned char)230)) * (((/* implicit */int) (unsigned short)0)))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (-(((((/* implicit */_Bool) max(((unsigned char)26), ((unsigned char)224)))) ? (min((var_6), (((/* implicit */long long int) (unsigned char)0)))) : (((/* implicit */long long int) ((arr_2 [i_1] [i_0] [i_1]) / (515064647)))))))))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [7] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 4] [i_3 - 2] [i_1])) : (((/* implicit */int) (unsigned char)17)))) : ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))));
                        var_16 = ((/* implicit */unsigned int) (unsigned char)248);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (signed char)-99))));
                        var_18 = ((/* implicit */short) (unsigned char)26);
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) var_7);
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            var_20 -= ((/* implicit */int) arr_8 [i_0] [i_0] [2U] [i_0] [i_0] [i_0]);
            arr_12 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) == (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) var_0))))));
        }
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 3750266170U)) : (5916900282269195491LL)))))) || (((/* implicit */_Bool) (unsigned short)60354)))))));
    }
    for (short i_5 = 2; i_5 < 24; i_5 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) var_11);
        arr_15 [i_5 - 2] = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned long long int) min((arr_13 [i_5 - 1]), (((/* implicit */long long int) (unsigned char)236))))), (((unsigned long long int) arr_13 [i_5])))));
        arr_16 [i_5] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) && (((/* implicit */_Bool) arr_13 [i_5 - 1])))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
        {
            var_23 ^= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_17 [i_7 + 1]))))));
            arr_23 [i_6] [i_6] [(unsigned short)2] |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_13 [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
            var_24 = ((/* implicit */unsigned int) ((_Bool) arr_11 [i_7 - 1] [i_6]));
        }
        arr_24 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)228)) == (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)26)) && (((/* implicit */_Bool) arr_9 [i_6]))))) < (((/* implicit */int) ((arr_20 [i_6]) >= (((/* implicit */unsigned int) var_7))))))))));
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 1) 
        {
            var_25 = arr_13 [i_8 + 1];
            arr_30 [i_8] [i_9 - 2] [i_9 - 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_14 [i_8] [i_9])))) & (((/* implicit */int) arr_26 [i_9] [i_8 + 1]))));
        }
        var_26 |= ((/* implicit */unsigned int) arr_28 [0U] [0U]);
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_33 [10U] [i_10] = (+(((/* implicit */int) (unsigned char)0)));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                {
                    arr_39 [i_10] = ((/* implicit */long long int) (~(((arr_27 [i_12]) + (((/* implicit */unsigned long long int) var_9))))));
                    arr_40 [i_10] [i_10] [i_12] [i_10] = ((/* implicit */_Bool) arr_34 [i_10]);
                    arr_41 [i_10] [8U] [i_11] = ((/* implicit */int) ((arr_7 [i_10] [i_10]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12])))));
                    arr_42 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_10] [i_11] [i_10])) ? (((/* implicit */long long int) (+(var_5)))) : (((long long int) arr_6 [(signed char)0] [2U] [i_10]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            {
                var_27 = ((/* implicit */_Bool) arr_47 [i_13] [i_13] [i_14]);
                arr_48 [i_14] [i_13] [i_13] = ((/* implicit */unsigned int) ((((arr_44 [i_14]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_13] [i_14]))))) == (((/* implicit */unsigned int) (-(1878732388))))));
            }
        } 
    } 
}
