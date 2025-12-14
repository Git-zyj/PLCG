/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105581
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
    var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)65535)))), ((~(((/* implicit */int) var_4)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2])) <= (((((/* implicit */_Bool) (signed char)76)) ? (var_17) : (((/* implicit */int) (unsigned short)13790)))))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : ((~(((/* implicit */int) arr_2 [i_2] [i_1]))))));
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    arr_13 [5ULL] [i_1] [5ULL] [(unsigned char)1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((var_19) + (2147483647))) >> (((/* implicit */int) var_15)))))));
                    arr_14 [i_0] = ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (var_18));
                }
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) (~((~(arr_11 [i_0] [1U] [(signed char)11] [i_4] [8])))));
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 2]))));
                    arr_19 [i_0] [i_1] [(_Bool)0] [(signed char)8] [8ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_2]))));
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(arr_5 [i_0 - 3] [i_0 + 2]))))));
                    var_27 = ((/* implicit */short) ((4283768957812274104ULL) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                }
            }
            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_28 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)43215))));
                var_29 -= ((/* implicit */unsigned int) 14162975115897277512ULL);
                var_30 = (((~(-418140692925663821LL))) | (((/* implicit */long long int) (~(((/* implicit */int) (short)27))))));
                arr_26 [i_6] = ((/* implicit */unsigned short) ((unsigned int) arr_17 [i_0 + 1]));
            }
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((-(arr_8 [(signed char)7] [(signed char)7] [8ULL] [i_0]))) : (((/* implicit */int) (signed char)-51)))))));
            arr_27 [i_1] [(signed char)5] = ((/* implicit */long long int) ((short) arr_23 [i_0] [i_0] [i_0 - 1]));
            arr_28 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [i_0 - 3] [(short)5] [(short)5])) / (((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_0 + 1] [(short)0]))));
        }
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            var_32 -= ((/* implicit */short) (-(((/* implicit */int) (short)27071))));
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (min((((/* implicit */unsigned long long int) var_13)), (15900870913644149883ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((301861902U) < (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_16 [i_0]))))))) : (((/* implicit */int) arr_21 [i_0] [2LL] [i_7] [(unsigned short)4]))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 2) 
        {
            var_33 -= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_35 [(unsigned short)0] [(unsigned short)0] [i_0])), (arr_34 [3LL] [3LL] [(_Bool)1])))))));
            arr_36 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_0] [(unsigned char)11] [i_0]))));
        }
        var_34 *= ((/* implicit */unsigned char) arr_12 [(signed char)0] [(signed char)0] [i_0] [i_0] [i_0]);
        arr_37 [i_0] [i_0] &= ((/* implicit */unsigned short) 1372455159U);
    }
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
    {
        arr_40 [i_9] [i_9] = ((/* implicit */short) ((signed char) arr_39 [i_9]));
        arr_41 [i_9] = ((/* implicit */signed char) (~(((unsigned int) arr_38 [(_Bool)0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) -418140692925663821LL)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)61)) - (((/* implicit */int) (signed char)61)))))));
        arr_44 [(unsigned char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4283768957812274092ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_42 [6U]))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                {
                    var_36 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)122)) - (((/* implicit */int) var_11))));
                    arr_49 [i_12] [i_11] [i_11] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 18446603336221196288ULL)) || (arr_39 [i_12]))) || ((!(((/* implicit */_Bool) var_3))))));
                    arr_50 [i_10] [12ULL] [5LL] [i_12] = ((/* implicit */unsigned long long int) ((var_17) - (((((/* implicit */int) var_14)) - (((/* implicit */int) arr_39 [i_11]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
    {
        var_37 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)5))));
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            arr_56 [i_13] [i_13] = ((/* implicit */unsigned int) ((int) arr_46 [i_13]));
            /* LoopNest 2 */
            for (unsigned char i_15 = 2; i_15 < 16; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    {
                        arr_62 [(signed char)7] [i_13] = ((/* implicit */signed char) ((unsigned char) arr_48 [i_15 - 1] [(signed char)12]));
                        arr_63 [i_15] [i_13] [i_13] [4U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14435)) ? (((/* implicit */int) (unsigned short)51746)) : (((/* implicit */int) (signed char)1)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            var_38 = ((/* implicit */int) (-(2798595307U)));
            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (short)14434))))) : (((((/* implicit */_Bool) var_14)) ? (14162975115897277511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(unsigned short)5] [(unsigned char)15] [7] [i_13])))))));
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            var_40 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_13] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_13] [i_18] [(short)4]))) : (4283768957812274097ULL)));
            var_41 = ((/* implicit */long long int) (signed char)-62);
        }
        var_42 -= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_55 [i_13] [(short)0] [(unsigned short)2]))))) ^ (((((/* implicit */_Bool) arr_52 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_9)))));
        var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_70 [i_13]))));
    }
}
