/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160129
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))));
                                arr_14 [11ULL] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (_Bool)1;
                                var_13 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) var_6)) & (3511440511214939345ULL)))));
                                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(3297057816838711778LL)))), (((((/* implicit */_Bool) (unsigned char)199)) ? (3511440511214939345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69)))))));
                                var_15 = ((long long int) 14935303562494612270ULL);
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551584ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))))) : (((unsigned long long int) min((3204139446077945846LL), (((/* implicit */long long int) var_5)))))));
                    var_17 = ((/* implicit */short) arr_3 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [i_5] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3297057816838711778LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ^ (max((14935303562494612270ULL), (0ULL))));
        arr_18 [i_5] = ((/* implicit */unsigned long long int) arr_15 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_5] [i_5] [i_5])) | (((/* implicit */int) var_0))))) ^ (max((var_1), (((/* implicit */long long int) arr_23 [i_5] [i_5] [i_7]))))));
                    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (((!(((/* implicit */_Bool) arr_25 [i_5] [i_5])))) ? (((175586601570471902ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : ((-(var_7))))));
                    var_20 = ((((max((var_7), (((/* implicit */unsigned long long int) arr_15 [16])))) <= (((/* implicit */unsigned long long int) var_1)))) ? (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) : (var_2))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_5)), (arr_15 [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)12236), (((/* implicit */short) (signed char)-22)))))));
                    arr_26 [i_5] [i_6] [(unsigned char)7] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (17863803514740257094ULL)));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        arr_30 [i_8] = min((var_7), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (175586601570471897ULL) : (((/* implicit */unsigned long long int) arr_27 [i_8]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [i_8] [i_8]))))));
        var_21 = ((/* implicit */unsigned long long int) ((int) arr_19 [i_8]));
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_37 [i_10] [i_9 - 1] [i_8] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)22)))), (((/* implicit */int) (_Bool)0))))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [4]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) (+(((arr_41 [i_11] [7LL]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))));
                    arr_45 [i_11] [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) ((signed char) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11] [i_12]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            for (long long int i_15 = 1; i_15 < 22; i_15 += 3) 
            {
                {
                    arr_50 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_6);
                    var_24 = ((/* implicit */signed char) (!((_Bool)1)));
                }
            } 
        } 
    }
    for (unsigned char i_16 = 3; i_16 < 23; i_16 += 2) 
    {
        arr_53 [i_16] = ((((/* implicit */int) (((+(((/* implicit */int) (unsigned char)0)))) >= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (signed char)1))))))) >= (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))));
        arr_54 [i_16] [i_16 + 1] = ((/* implicit */short) (-(((unsigned long long int) (signed char)108))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_16] [i_16] [i_16 - 3]))) % (((arr_44 [i_16] [i_16] [i_16] [i_16 - 3]) % (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_16] [i_16 - 1])))))));
    }
}
