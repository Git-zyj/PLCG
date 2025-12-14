/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144980
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
    var_20 ^= ((/* implicit */unsigned char) var_13);
    var_21 = var_2;
    var_22 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) var_7)) ? (var_4) : (var_16))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3689528614U)) ? (((/* implicit */int) (short)32767)) : (var_19)))) ? (((605438681U) >> (((var_9) - (212230255))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_1))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [(unsigned short)13] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2] [i_2 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    arr_11 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [(signed char)19] [i_0 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)18))))), (((unsigned long long int) 18446744073709551615ULL))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])) : (var_4)))))));
                        arr_16 [i_0] = ((((/* implicit */int) arr_7 [i_3] [i_0] [i_0])) + (((/* implicit */int) ((unsigned short) (~(var_12))))));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_24 &= ((/* implicit */short) ((arr_8 [i_2] [i_2]) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)5532)) ? (-435700398) : (((/* implicit */int) (unsigned short)60003))))))));
                        arr_21 [i_0] [i_0] [i_2 - 1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((unsigned long long int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (var_9))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) : (((min((var_16), (((/* implicit */unsigned long long int) var_17)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -2010275650))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            arr_24 [i_5] [i_0 + 1] [5ULL] [i_0] [i_1] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) ((((unsigned long long int) arr_4 [i_0])) + (var_4)));
                            arr_25 [i_0] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((var_12) / (((/* implicit */int) (unsigned short)5532))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_25 &= (!(((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (arr_18 [i_0 + 1] [i_1] [i_4] [i_2]))))));
                            var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_0]))) ? (max(((+(var_8))), (((/* implicit */unsigned int) ((var_17) / (arr_8 [i_2] [i_4])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_27 ^= ((/* implicit */long long int) min(((-(((unsigned long long int) arr_18 [i_0 + 3] [i_0 + 3] [i_4] [i_7])))), (((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (1475118189046357397ULL)))));
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_9))) - (((/* implicit */int) ((unsigned short) var_8)))));
                        }
                        arr_32 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) ((460344062) << (((1622817262U) - (1622817262U))))))) ^ (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5532))))), (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                    }
                    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        arr_36 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_12 [i_1]);
                        var_28 ^= ((/* implicit */unsigned int) var_4);
                        var_29 += ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8 - 2]);
                    }
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) var_10)) - (arr_5 [i_0] [i_0] [i_0]))));
                        var_31 = ((/* implicit */long long int) ((unsigned short) ((var_13) ? (((/* implicit */unsigned long long int) var_10)) : (min((((/* implicit */unsigned long long int) var_12)), (arr_29 [i_2] [i_2] [i_2] [i_2] [i_9] [i_1] [i_0]))))));
                        var_32 -= ((/* implicit */_Bool) var_8);
                        arr_39 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2592377304813551249LL)) ? (var_8) : (((((/* implicit */_Bool) arr_33 [i_9] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_9])) : (var_8)))))), (((13626987461855326955ULL) + (((/* implicit */unsigned long long int) ((var_17) + (((/* implicit */int) arr_12 [9LL])))))))));
                    }
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((int) var_3))) : ((-(((((/* implicit */unsigned long long int) var_9)) + (var_0)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_44 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_12)) + (arr_35 [i_0 + 1])));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((short) arr_35 [i_0]))) : (((/* implicit */int) arr_13 [(signed char)2] [i_0] [i_0] [i_0] [18] [i_10]))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_35 = var_12;
                    arr_50 [i_0] [i_0] [i_0] [i_0] = (-(arr_41 [i_0] [i_11 + 4] [i_0]));
                    arr_51 [i_0] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((unsigned int) ((((unsigned long long int) (unsigned char)201)) / (((/* implicit */unsigned long long int) ((arr_37 [i_0] [i_11] [i_0] [(short)16] [i_12] [i_11]) - (((/* implicit */int) (unsigned char)71))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            arr_57 [i_14] = ((/* implicit */long long int) ((((_Bool) ((unsigned char) var_13))) || (((/* implicit */_Bool) ((arr_20 [i_13] [i_14] [i_13] [i_13] [i_13]) + (arr_29 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_14]))))));
            arr_58 [i_13] [i_14] [i_14] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_46 [10ULL] [i_14]))) ? (var_12) : ((+(((/* implicit */int) arr_17 [i_13] [i_13] [15] [i_13] [12ULL]))))))), (var_8));
        }
        arr_59 [i_13] [i_13] = ((/* implicit */_Bool) var_6);
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 1; i_15 < 18; i_15 += 1) 
        {
            arr_62 [i_15] = ((/* implicit */long long int) arr_38 [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 2] [i_15 - 1]);
            var_36 ^= arr_45 [i_15 + 1] [i_15 + 1];
        }
    }
    var_37 = ((int) ((unsigned short) var_4));
}
