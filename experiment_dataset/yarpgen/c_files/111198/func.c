/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111198
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) var_11);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((long long int) (unsigned short)8184));
                        var_16 ^= (~(((((/* implicit */_Bool) -8271770202276604017LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1])) + ((-2147483647 - 1))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (8271770202276604015LL) : (-8271770202276604038LL)));
                        var_19 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) ^ (-8271770202276604017LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_1] [i_0 + 1])))));
                    }
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) max((8271770202276604031LL), (((/* implicit */long long int) (unsigned short)40442))));
                    var_20 = ((/* implicit */_Bool) ((unsigned short) ((min((((/* implicit */long long int) 8388607U)), (-8271770202276604031LL))) / (((/* implicit */long long int) ((/* implicit */int) (short)11665))))));
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_9);
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) 4294967285U);
        arr_18 [i_4] = min((max((-1016438157), (((/* implicit */int) (unsigned char)212)))), (((/* implicit */int) arr_15 [i_4])));
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_21 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_5] [i_5]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551613ULL)))))));
        arr_22 [i_5] [(_Bool)1] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) >= (arr_21 [i_5])))), (((unsigned long long int) 576716067)))), (min(((-(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25661)) >= (((/* implicit */int) (short)8657)))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 587541747225306184LL)) : (var_3)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(2479293758U))))));
            arr_29 [i_7] = ((/* implicit */unsigned int) ((var_7) ^ (((/* implicit */int) (signed char)-105))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_23 [i_7])))))));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((-763256129) - (((/* implicit */int) (short)-24694))));
                            var_26 = ((/* implicit */int) 3832182237U);
                            arr_38 [i_6] [i_7] [i_8 - 1] [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) arr_5 [i_10])) : (((/* implicit */int) arr_5 [i_6]))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_6]))));
        }
        for (unsigned char i_11 = 2; i_11 < 19; i_11 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_11 + 2])) ? (10248372583447011108ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6])))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_11 - 1] [i_6])))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1503535690)) ? (arr_36 [i_6] [4ULL] [i_6] [i_6] [i_6]) : (arr_36 [i_6] [i_6] [i_6] [i_6] [i_11]))))) : (((/* implicit */int) ((short) var_10)))));
            arr_41 [6] [i_11] = ((/* implicit */unsigned long long int) var_9);
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_29 |= ((/* implicit */_Bool) ((831401064U) | (3295519283U)));
            /* LoopNest 2 */
            for (long long int i_13 = 3; i_13 < 18; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_30 += 3979358706U;
                        arr_48 [i_13] [i_13 - 2] [i_14] [i_13] = ((/* implicit */signed char) (unsigned char)18);
                    }
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            arr_51 [i_15] [i_6] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((524287) <= (((/* implicit */int) arr_6 [i_6] [i_15] [i_15] [i_15])))))));
            arr_52 [i_15] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25659)) ? (var_12) : (((/* implicit */int) (signed char)56))))) / (587541747225306184LL)))));
            var_31 = (!(arr_9 [i_6] [i_6] [i_6]));
        }
    }
}
