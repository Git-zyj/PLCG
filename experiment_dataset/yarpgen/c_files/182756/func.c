/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182756
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
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)-44))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)24405)) & (((/* implicit */int) (unsigned short)25749))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_3] [i_4] = ((var_1) / (((/* implicit */long long int) ((arr_4 [i_0] [i_2] [i_2]) % (((/* implicit */int) (unsigned char)250))))));
                                arr_15 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)6)) << (((((/* implicit */int) (signed char)48)) - (30)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_2 [i_0]))));
                            arr_23 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + ((-(((/* implicit */int) (short)16809))))));
                        }
                        arr_24 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)218)) ^ (((/* implicit */int) (unsigned short)65535))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) / (arr_0 [i_0] [i_0])));
                        arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0]))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62621)) && (((/* implicit */_Bool) 3436428946U))))) << (((((((/* implicit */int) var_5)) << (((var_13) - (210435793))))) - (244)))));
                    }
                    for (short i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_18 [i_0] [i_1] [i_2])))) || (((/* implicit */_Bool) 409786996)));
                        var_21 = ((/* implicit */signed char) ((140668768878592LL) | (((/* implicit */long long int) var_4))));
                    }
                    arr_30 [i_0] [i_1] = (~(((587728614U) >> (((var_9) - (7811138562121570775ULL))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                arr_40 [i_0] [i_1] [i_8] [i_8] [i_10] = ((/* implicit */long long int) (((+(((((/* implicit */int) var_2)) | (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_8] [i_9] [i_10])))))) % ((+(((/* implicit */int) arr_36 [i_0] [i_0] [i_8] [i_9] [i_10]))))));
                                arr_41 [i_0] [i_8] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) min(((unsigned char)250), (arr_5 [i_0])))) % (((121490191) | (((/* implicit */int) (unsigned char)247)))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) >= (((arr_34 [i_8] [i_8] [i_8] [i_8] [i_8]) ^ (((/* implicit */unsigned int) arr_27 [i_0] [i_1] [i_8] [i_9] [i_9] [i_8])))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) / (5166422073276103770ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) var_3))))))))) << ((-(((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) -769510165298483007LL)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (long long int i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            {
                arr_47 [i_11] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) var_14)) + (var_9))) + (((/* implicit */unsigned long long int) ((var_14) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64512)))))))) - (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_11]))))) + (((var_9) + (((/* implicit */unsigned long long int) var_13))))))));
                arr_48 [i_11] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)250)) & (((/* implicit */int) (_Bool)0))))) % (((((arr_18 [i_12 + 1] [i_12] [i_12 + 1]) + (9223372036854775807LL))) << (((max((((/* implicit */int) (short)25935)), (var_8))) - (936820018)))))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_53 [i_11] [i_13] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((arr_6 [i_11] [i_12] [i_13]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65)))))) % (((((/* implicit */unsigned long long int) arr_38 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) - (var_9))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))) < (var_1)))))));
                            arr_54 [i_11] [i_11] [i_12 - 1] [i_13] [i_14] = ((/* implicit */_Bool) (((+(((((/* implicit */int) (short)28998)) << (((((-8244848473085600627LL) + (8244848473085600644LL))) - (8LL))))))) % (((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1930796741)) && (((/* implicit */_Bool) -8244848473085600610LL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
