/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12578
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
    var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48287)))))))));
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_5))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)17248)) % (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min(((unsigned short)48287), ((unsigned short)41309))))))));
        var_13 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_14 += ((/* implicit */unsigned int) var_1);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (~(arr_6 [i_1] [i_2])));
            var_16 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)49152))));
                        var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_1] [i_2]))) ? (((/* implicit */int) arr_15 [i_1])) : (arr_8 [i_4]))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (arr_14 [i_2] [i_4])));
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) 2471485731U);
                            var_21 = (short)-16699;
                        }
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) 640114646)))))));
        }
        var_23 |= ((/* implicit */unsigned long long int) ((min((max((493696984182450970LL), (((/* implicit */long long int) (unsigned short)48283)))), (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-493696984182450971LL))))) * (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_15 [i_1])), (var_10))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        arr_22 [i_6] = ((/* implicit */_Bool) ((arr_20 [i_6]) - (arr_20 [i_6])));
        var_24 = ((/* implicit */_Bool) var_0);
        var_25 = ((/* implicit */_Bool) arr_15 [i_6]);
        /* LoopNest 3 */
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 3; i_9 < 10; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) arr_7 [i_9]);
                            arr_31 [i_6] [i_8] [i_8] [i_9] [i_9] = arr_14 [i_6] [i_6];
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_24 [i_10 - 2])))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((_Bool) ((unsigned long long int) var_1))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 7; i_11 += 1) 
                        {
                            arr_35 [i_6] [i_8] [i_7] [i_6] [i_7] [i_6] [i_11] = ((/* implicit */unsigned char) arr_2 [i_6] [i_9 + 1]);
                            var_29 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) < (-7074691308612211452LL)));
                            var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (arr_19 [i_8 - 1]) : (((/* implicit */int) arr_34 [i_6] [i_9] [i_9] [i_8 - 1] [i_6]))));
                            arr_36 [i_6] [i_6] [i_8] [i_8] [i_11] = var_9;
                        }
                        var_31 += ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_28 [i_9] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1300280294)) % (1073608811U))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        for (short i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_14 = 1; i_14 < 11; i_14 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    var_33 ^= ((/* implicit */unsigned char) var_7);
                }
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    var_34 &= ((/* implicit */short) max(((+(((/* implicit */int) max((var_8), ((unsigned short)48303)))))), (arr_11 [i_12] [i_12] [i_15] [i_15])));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */int) var_5)) - (((/* implicit */int) arr_4 [i_12] [i_13])))), (((/* implicit */int) min(((short)-24184), ((short)4893))))))))));
                    arr_47 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_4 [i_12] [i_13]);
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_44 [i_12] [i_12] [i_12])), (((((((/* implicit */unsigned long long int) -1272249570915662484LL)) - (14362563061230822433ULL))) - (((/* implicit */unsigned long long int) arr_13 [i_12] [i_13] [i_15] [i_15])))))))));
                    var_37 ^= ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_2 [i_12] [i_12])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))))) & (((/* implicit */unsigned long long int) ((unsigned int) var_7)))))));
                }
                for (long long int i_16 = 2; i_16 < 10; i_16 += 4) 
                {
                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (-(var_2))))));
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_38 [i_13] [i_13]))));
                    arr_51 [i_12] [i_13] = max((((/* implicit */long long int) ((((((/* implicit */int) (short)-10064)) | (((/* implicit */int) arr_44 [i_12] [i_13] [i_12])))) & (((/* implicit */int) ((unsigned short) (unsigned short)65522)))))), ((-((+(493696984182450968LL))))));
                }
                var_40 ^= ((/* implicit */short) 380201366);
            }
        } 
    } 
}
