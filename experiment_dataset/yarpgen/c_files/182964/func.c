/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182964
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) (-((+(1908607838)))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((+(882027407))) << (((var_14) - (4576964594177571199LL)))))))))));
                                arr_15 [i_4] [(_Bool)1] [i_2] [i_1] = (!(((/* implicit */_Bool) ((unsigned short) arr_13 [i_3] [i_3] [i_2 - 2] [i_2 - 4] [i_2 - 4] [i_2 - 3]))));
                            }
                        } 
                    } 
                } 
                arr_16 [(signed char)7] [(signed char)7] = ((/* implicit */signed char) (+(max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)177)))), ((-(var_4)))))));
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) | (min(((-(var_15))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_1])))))))));
                var_22 = ((/* implicit */unsigned short) ((((arr_6 [i_0]) ^ (arr_6 [i_1]))) << (((min((arr_6 [i_0]), (arr_6 [i_1]))) + (4735640810340885973LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_5] [i_7] [i_9] [i_9])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_30 [i_6] [i_6]))))) ? (((((/* implicit */int) ((unsigned short) var_2))) * (((/* implicit */int) arr_3 [i_5] [i_9])))) : (((((/* implicit */int) arr_5 [i_6] [i_6] [i_6])) >> (((var_18) - (18391619881048951847ULL))))))))));
                                arr_31 [i_5] [i_6] [i_7] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) : (3110068506782311846ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((21), (arr_13 [i_10] [i_6] [i_6] [i_6] [i_5] [i_5]))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_6] [i_6] [(_Bool)1])) >= (var_4))))))) ? ((-(arr_23 [i_6] [i_10]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (signed char)4))))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_38 [i_10] [(_Bool)1] = ((/* implicit */long long int) 1948456137);
                        var_25 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned char)101)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                arr_43 [i_5] [i_5] [i_5] [i_10] [i_13] = ((/* implicit */unsigned long long int) (-(((int) arr_34 [i_5] [i_5] [i_10] [i_13]))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_6] [i_12] [i_6]), (arr_4 [(signed char)9] [i_6] [i_13])))) && (((/* implicit */_Bool) arr_4 [i_6] [i_10] [i_13]))));
                            }
                        } 
                    } 
                    var_27 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10] [i_6] [i_6] [i_5])) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [(signed char)4] [i_6] [(unsigned char)13] [i_5] [i_5] [i_5])), (arr_30 [i_6] [(_Bool)1])))))));
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    arr_46 [i_14] [i_14] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8105))))))))));
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                    {
                        arr_51 [i_14] [15ULL] = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) arr_2 [i_5] [i_6] [i_14])) ^ (((unsigned long long int) var_5)))));
                        var_29 -= ((/* implicit */unsigned char) max((arr_32 [i_15] [i_5] [i_15]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32654)) ? (-1908607839) : (((/* implicit */int) (signed char)115))))))))));
                        arr_52 [i_15] [i_14] [i_14] [i_14] [i_6] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (((((long long int) (unsigned short)0)) >> (((/* implicit */int) arr_18 [i_5]))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) arr_13 [i_6] [i_16] [i_14] [i_6] [(signed char)11] [(unsigned char)15]);
                        arr_56 [i_16] [i_14] = ((/* implicit */unsigned short) (((~(-1690430194))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (-478655381))) - (50211)))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2121178117)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((unsigned short) arr_53 [i_5] [i_6] [i_17] [i_17])))));
                            arr_61 [i_17] [(_Bool)1] [i_14] [i_14] [i_17] [i_14] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_5] [i_6] [i_14] [i_5] [(unsigned short)19] [i_17] [i_6])) - (((/* implicit */int) arr_30 [i_18] [i_14]))));
                            var_33 = ((/* implicit */_Bool) (~(arr_24 [i_5] [i_6] [i_18])));
                            arr_62 [i_5] [(unsigned short)4] [(unsigned char)4] [(unsigned short)4] [i_5] |= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)182))));
                        }
                        arr_63 [i_14] [12LL] [i_14] [i_14] [i_14] = ((/* implicit */signed char) (_Bool)1);
                    }
                    var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65531))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */short) var_8);
                                var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(max((2121178117), (((/* implicit */int) (_Bool)1))))))) % (((((/* implicit */_Bool) 7034387112478069313ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)177), ((unsigned char)80))))) : (arr_60 [i_5] [i_6])))));
                                var_37 -= ((/* implicit */unsigned char) (-(var_4)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_0)), (var_18))), (((/* implicit */unsigned long long int) var_11))));
    var_39 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) 1470017977))), (18232306355753131862ULL)));
}
