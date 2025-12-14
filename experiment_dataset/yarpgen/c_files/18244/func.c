/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18244
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
    var_12 = ((/* implicit */long long int) var_0);
    var_13 = ((/* implicit */signed char) (unsigned char)150);
    var_14 = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) max((arr_0 [(unsigned short)0] [i_0]), (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned short)65535), ((unsigned short)0)))), (arr_1 [i_0]))))));
        var_16 |= ((/* implicit */unsigned int) min((min((((/* implicit */int) (signed char)7)), (arr_1 [i_0]))), ((+(((/* implicit */int) (signed char)114))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1 + 2]))));
                    var_18 = (-(arr_8 [i_1] [i_1] [i_1 + 2]));
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)239))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 962345770U))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_20 = ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (unsigned short i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_18 [i_1 - 1] [i_4] [i_1] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */int) arr_14 [i_4 + 4] [i_4] [i_6 - 1]);
                        var_22 = ((/* implicit */signed char) 0U);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            arr_26 [i_1] [i_9] [i_7] [i_8] [i_9] [i_7] = ((/* implicit */long long int) ((4294967283U) ^ (((/* implicit */unsigned int) -2147483641))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((4294967283U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
        {
            arr_31 [7] [i_1] [7] = ((/* implicit */long long int) (unsigned char)105);
            var_24 -= ((/* implicit */unsigned long long int) (unsigned char)71);
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_25 = ((/* implicit */int) max((var_25), ((-(((/* implicit */int) (unsigned char)40))))));
                    var_26 &= (-((+(((/* implicit */int) (unsigned short)0)))));
                    var_27 = ((/* implicit */long long int) ((signed char) arr_19 [i_1] [i_1] [i_1 + 2] [i_1 - 1]));
                }
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_44 [i_1] [i_10] [i_10] [i_11] [i_1] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6067612416372450288LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_11] [i_14] [(unsigned char)9]))) : (4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)143)))) : (4063232U)));
                        var_28 = ((/* implicit */unsigned char) (+(4294967283U)));
                        var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_9 [(unsigned char)6] [(unsigned char)6] [i_11]))));
                    }
                    var_30 += ((/* implicit */unsigned long long int) ((short) arr_28 [i_1] [i_1] [i_1 + 2]));
                    var_31 += (_Bool)0;
                }
                var_32 -= ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_10]))));
                var_33 = (+(((/* implicit */int) arr_34 [i_1])));
                var_34 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1682002780)) + (arr_35 [i_1 - 1] [3ULL] [i_11] [i_1 + 1])));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((_Bool) 4294967295U)))));
            }
            for (int i_15 = 3; i_15 < 16; i_15 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 1; i_16 < 18; i_16 += 2) 
                {
                    var_36 = ((/* implicit */int) (+(-6067612416372450302LL)));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) (_Bool)1)) : (arr_22 [i_1 - 1] [i_10] [i_15 - 3] [i_1])));
                }
                arr_52 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (unsigned char)71);
            }
        }
        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) 12U);
            arr_56 [i_1] = ((/* implicit */signed char) arr_15 [i_1] [i_1 + 1] [(signed char)12] [i_1]);
        }
        var_39 &= ((/* implicit */unsigned long long int) ((arr_43 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [2]) ^ (1682002780)));
    }
    var_40 = (+(var_11));
}
