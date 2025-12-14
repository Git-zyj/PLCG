/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142405
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
    var_14 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 6; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_4] [(unsigned char)1] [i_4] [7] [(_Bool)1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) ((_Bool) var_5)))))));
                                var_15 = (~(((/* implicit */int) ((((/* implicit */_Bool) (-(var_2)))) && (((/* implicit */_Bool) (+(var_9))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (max(((~(var_4))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13757903182055388229ULL)))))))));
                var_16 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_5 = 4; i_5 < 22; i_5 += 1) 
    {
        arr_21 [i_5] = (i_5 % 2 == zero) ? (((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) / (var_4))) >> (((min((arr_20 [i_5]), (arr_20 [i_5]))) - (150274525)))))) : (((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) / (var_4))) >> (((((min((arr_20 [i_5]), (arr_20 [i_5]))) - (150274525))) + (181279492))))));
        var_17 = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_18 [15U]))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [(_Bool)1])) || (((/* implicit */_Bool) arr_20 [4U])))) ? (((long long int) ((((/* implicit */_Bool) var_9)) ? (arr_20 [(short)20]) : (((/* implicit */int) arr_17 [(short)2]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
        arr_22 [16ULL] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_17 [(short)20]), (((/* implicit */short) arr_19 [i_5]))))))))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) (~(arr_24 [i_6])));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min(((unsigned short)36630), (((/* implicit */unsigned short) (short)-16287)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)1)))))) != ((+(7431831083689493046LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2106374782)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32768))))))))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((min((arr_39 [(short)8] [(short)8] [i_9] [i_10] [i_7] [i_7]), (arr_39 [i_7] [i_8] [3] [i_9] [i_7] [i_7]))) / (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + (((/* implicit */int) min((arr_29 [i_7] [i_7]), (arr_28 [i_7]))))))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (+(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_4))), (max((arr_38 [(short)2] [i_8] [(short)2] [4ULL]), (15ULL))))))))));
                        arr_40 [i_10] [i_7] [18ULL] [0] [i_7] |= ((((/* implicit */_Bool) ((((/* implicit */int) (short)-26924)) % (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-16287))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-6079))) <= (-7431831083689493047LL)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                {
                    {
                        arr_47 [i_12] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_19 [i_12]) && (arr_19 [i_7]))));
                        arr_48 [i_7] [i_7] [11] [(signed char)13] [i_11] [(unsigned short)1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_7])) && (((/* implicit */_Bool) arr_36 [i_12] [i_11] [1U] [6LL] [i_7]))))) ^ ((~(((/* implicit */int) arr_29 [i_7] [11U]))))))), (((arr_44 [i_7] [i_8]) + (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_7])))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1143516970)))) ? (((((/* implicit */_Bool) 1376607752)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)172)))) : (((/* implicit */int) (short)16306))));
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_25 = ((/* implicit */int) max(((((-(arr_35 [i_13] [i_13] [15ULL]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_7]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_39 [(_Bool)1] [(signed char)1] [i_7] [(_Bool)1] [i_7] [19])))))))));
            var_26 |= ((/* implicit */short) ((long long int) ((((/* implicit */int) ((_Bool) arr_19 [i_7]))) / (((((/* implicit */int) (unsigned short)36630)) * (((/* implicit */int) (short)26018)))))));
            arr_53 [i_7] [i_7] = ((/* implicit */short) (-(max((arr_39 [i_7] [12ULL] [i_7] [6] [i_7] [i_13]), (arr_39 [(_Bool)1] [i_7] [19] [i_13] [i_7] [i_13])))));
        }
        var_27 = ((/* implicit */int) min((var_3), (((arr_49 [i_7]) & (arr_49 [i_7])))));
    }
    for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36630)) ? (1482521312) : (((/* implicit */int) (short)-1))));
        arr_56 [i_14] = ((/* implicit */_Bool) min((-2311307593054478086LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) -6413335822151724005LL)) ? (-7431831083689493047LL) : (((/* implicit */long long int) 2328769128U)))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
}
