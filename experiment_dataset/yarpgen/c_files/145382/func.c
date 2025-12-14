/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145382
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((-3735289228602878412LL) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1556113451276506631LL))))))) == (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_12);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = arr_1 [i_0 - 1];
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3735289228602878436LL)) ? (arr_12 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]) : (arr_5 [i_4])));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */_Bool) (+(var_10)));
            var_17 = ((/* implicit */unsigned int) var_1);
            var_18 += ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)50)))) ? (((/* implicit */int) (short)22077)) : (arr_13 [i_0] [i_0] [(unsigned char)11] [i_1] [i_1] [i_0] [i_1])));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) var_11);
            /* LoopSeq 1 */
            for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                var_20 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [(signed char)4] [(short)11] [i_0 + 2] [5U] [i_6 + 1] [i_0 + 2]))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [(unsigned short)2] [i_5] [i_6 + 1])))) : (arr_4 [i_0]))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((short) var_11)))));
                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(short)10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0] [i_5])))) << (((((arr_7 [(signed char)8] [i_5] [i_0]) | (((/* implicit */int) var_8)))) + (7199)))));
                var_24 += ((((/* implicit */int) (unsigned char)252)) < (((/* implicit */int) (unsigned short)52693)));
            }
            var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [(signed char)11] [i_0 + 1] [1U] [(short)10])) ? (((/* implicit */int) (signed char)-19)) : (-1)));
            arr_19 [i_0 - 1] [i_0] = ((-5381585289090909662LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31477)) > (((/* implicit */int) var_3)))))));
        }
        for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            arr_22 [i_0 + 1] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12913)) ^ (32640)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7] [7])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 2] [i_7] [i_7] [i_7])))))) ? (arr_16 [8] [(signed char)7]) : (((int) arr_15 [(_Bool)1] [i_7] [i_7]))));
            arr_23 [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1750329665U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (2030048185703951097ULL)));
        }
        arr_24 [2] [(unsigned short)12] |= ((/* implicit */short) arr_6 [i_0 + 1] [i_0 + 1]);
        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) (signed char)-39)))) + (((((/* implicit */_Bool) 3735289228602878412LL)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(signed char)18])) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_26 [i_8]))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) (+(2831633382U)));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_26 [20]))));
        var_30 *= ((/* implicit */unsigned int) ((((4194303U) < (1750329660U))) ? ((+(((/* implicit */int) arr_26 [i_8])))) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_25 [i_8] [i_8])))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_31 = ((/* implicit */unsigned long long int) arr_26 [(unsigned char)10]);
        var_32 ^= var_1;
    }
    var_33 = ((/* implicit */unsigned int) var_10);
}
