/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105981
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_9 [i_0] [6U] [i_2] [i_3] [i_4])))) << (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])))) > ((((+(((/* implicit */int) var_10)))) << (((((((/* implicit */_Bool) arr_8 [(short)4] [11LL])) ? (var_8) : (((/* implicit */unsigned long long int) var_11)))) - (9452226966627042967ULL)))))));
                                var_21 = ((/* implicit */signed char) var_3);
                                arr_11 [i_0] [i_1 - 1] [i_1 + 1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) ((unsigned int) -9223372036854775795LL))) ? (var_2) : (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)0))))))));
                                var_22 |= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_3] [i_2] [i_2]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_16))));
                                var_24 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19632))) / (((4294967290U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)6834)))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 1] [i_2] [i_5] [(unsigned short)2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [(unsigned char)19] [i_2] [i_5] [i_6]))))) : (var_1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((((/* implicit */int) var_6)) - (61047)))))) ? (((((/* implicit */int) (short)6834)) | (((/* implicit */int) (short)-6815)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)3])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_7 - 1] [i_0]))))))) * (max((14674649478403014273ULL), (((/* implicit */unsigned long long int) 509221839U))))));
                                var_26 = (((+(2737144593U))) >> (((/* implicit */int) ((_Bool) arr_7 [i_1 - 1] [i_1 - 1] [i_1] [i_7 - 3]))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_19 [i_2] [i_7 + 2] [i_1 - 1] [0U] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        for (long long int i_13 = 4; i_13 < 9; i_13 += 1) 
                        {
                            {
                                var_28 = (!(((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) arr_18 [i_9] [i_13 - 3] [i_13] [(unsigned char)0] [i_13 - 2] [i_13 - 3])) - (1)))))));
                                arr_35 [i_13 - 4] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */short) min(((-(var_4))), (((/* implicit */unsigned int) arr_28 [i_10] [i_12] [i_13 + 2]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_14 = 4; i_14 < 10; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_31 [(unsigned short)9] [(unsigned char)7] [i_16])) ? (((/* implicit */unsigned long long int) arr_33 [i_9] [i_9] [i_10] [i_10] [i_14 + 1] [i_15] [i_16])) : (14674649478403014284ULL))) != (3772094595306537332ULL)))), (max((var_1), (((/* implicit */unsigned int) var_9)))))))));
                                var_30 = ((/* implicit */unsigned short) arr_42 [i_9]);
                                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (~(max((-1LL), (((/* implicit */long long int) (unsigned short)28)))))))));
                                var_32 = ((/* implicit */int) arr_7 [i_16] [i_14] [i_14] [i_9]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 4; i_17 < 14; i_17 += 1) 
    {
        for (short i_18 = 0; i_18 < 15; i_18 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        for (short i_21 = 0; i_21 < 15; i_21 += 3) 
                        {
                            {
                                var_33 -= ((/* implicit */signed char) max(((~(min((((/* implicit */long long int) var_13)), (arr_54 [i_21] [i_18] [i_19] [i_20] [i_21] [(unsigned char)11]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 14674649478403014273ULL)))))));
                                var_34 = ((/* implicit */long long int) 1557822702U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_22 = 0; i_22 < 15; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        {
                            arr_61 [i_18] [i_18] [i_22] [i_23] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_17 - 4] [i_17 - 4] [i_17 - 4] [(unsigned char)15] [i_17 + 1])), (((((((/* implicit */unsigned int) arr_4 [i_17] [i_18])) ^ (7680U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            var_35 = ((/* implicit */unsigned int) var_16);
                            arr_62 [i_17] [i_18] [i_17] [i_18] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */signed char) (short)-6834);
                            var_36 = ((/* implicit */_Bool) arr_10 [i_18] [i_22] [i_18] [i_18] [i_17 - 1]);
                            var_37 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-4096)) / (((/* implicit */int) arr_0 [0LL]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 15; i_24 += 2) 
                {
                    for (signed char i_25 = 3; i_25 < 12; i_25 += 3) 
                    {
                        {
                            arr_68 [i_18] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((0ULL) % (14674649478403014274ULL)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_14 [9LL] [(signed char)9] [(signed char)9] [i_17])) << (((((/* implicit */int) arr_53 [i_17] [i_18] [i_24] [i_25])) + (33)))))) & (arr_6 [i_17 + 1] [i_18] [i_17] [(signed char)7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_17] [i_17] [i_17])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_43 [i_24] [0]))))))))));
                            var_38 = ((/* implicit */short) max((var_38), ((short)-6835)));
                        }
                    } 
                } 
            }
        } 
    } 
}
