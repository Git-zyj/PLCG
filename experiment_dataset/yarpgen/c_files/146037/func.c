/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146037
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = (((((_Bool)0) ? (((/* implicit */long long int) min((268173312U), (((/* implicit */unsigned int) var_10))))) : (4350491750065266973LL))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [2LL] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (+(194699389))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) ((short) 4350491750065266973LL))) : ((-(((/* implicit */int) var_8))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 194699358);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] = var_2;
        var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_10)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [(unsigned char)5]))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_7)))) >> ((((~(((/* implicit */int) var_9)))) + (28112))))))));
            arr_14 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_5 [i_2]))));
            arr_15 [0LL] [i_2] = ((/* implicit */signed char) ((unsigned int) var_0));
        }
        for (int i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            arr_18 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) var_7))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
                var_17 &= ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
            }
            for (long long int i_6 = 3; i_6 < 12; i_6 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_4] [i_4]))) <= (4026793983U)));
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_31 [i_7] [8ULL] [i_2] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_7 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))));
                            arr_32 [i_2] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_8)))) / ((-(((/* implicit */int) arr_21 [3] [3] [i_8]))))));
                        }
                    } 
                } 
                arr_33 [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [(short)2] [(short)2] [i_6] [i_2]))));
            }
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_4]))))) ? (((/* implicit */long long int) var_6)) : (((long long int) var_6)))))));
            arr_34 [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) arr_20 [i_2] [i_4 - 3]));
        }
        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65533))));
            var_21 = ((/* implicit */unsigned char) max((var_21), ((unsigned char)0)));
        }
        for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            arr_39 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_26 [i_10] [i_10] [i_10] [i_2 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2 + 1] [i_10] [(_Bool)1] [i_2 + 1])))));
            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) : (arr_24 [i_2 + 2])));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_2] [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) var_0))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_11 = 2; i_11 < 10; i_11 += 3) 
        {
            arr_42 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [12LL] [i_11] [i_11])) ? (((/* implicit */int) ((unsigned short) (unsigned char)42))) : (((/* implicit */int) ((_Bool) var_8)))));
            /* LoopNest 2 */
            for (long long int i_12 = 1; i_12 < 12; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) 1499231386U);
                            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) - (-1119412583))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-1975)) : (((/* implicit */int) (_Bool)0))))));
                            arr_50 [(unsigned short)4] [(short)7] [i_11] [i_13] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_28 [i_2] [(short)4] [11LL] [i_12] [i_12] [i_11 + 2] [i_2]));
                            var_26 = ((/* implicit */int) ((unsigned int) arr_36 [i_12 + 1] [i_12 + 1] [i_12]));
                        }
                        arr_51 [i_2 + 1] [i_2] [i_12] [i_13] = ((/* implicit */unsigned short) ((int) arr_22 [i_2 - 3] [i_11 - 1] [i_12 + 1]));
                        arr_52 [i_2] [i_12] [i_11] [i_2] = ((/* implicit */unsigned char) var_4);
                        var_27 = ((/* implicit */short) (-(arr_8 [i_2 - 1] [i_2])));
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((((/* implicit */int) var_7)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)237)))))))));
}
