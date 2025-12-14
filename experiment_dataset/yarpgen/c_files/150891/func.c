/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150891
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_0]))) & (((unsigned int) arr_4 [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 7; i_3 += 4) 
                    {
                        var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [9ULL])) ? (((arr_11 [i_3 + 4] [9LL] [i_3 + 4] [i_1]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((int) (-(((/* implicit */int) arr_12 [10ULL] [10ULL]))))))));
                        var_22 = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (unsigned short)32732)))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (max((((/* implicit */unsigned long long int) (+(var_13)))), (arr_0 [i_0] [9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) != (((/* implicit */int) (unsigned short)1023))))) < (((/* implicit */int) ((short) arr_13 [i_1] [i_4])))))))));
                        var_24 = min((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) ^ (max((var_2), (((/* implicit */unsigned int) arr_8 [i_0]))))))), ((-(min((var_0), (((/* implicit */long long int) var_6)))))));
                    }
                    arr_16 [i_0] [i_2 - 4] [i_0] = ((/* implicit */long long int) ((unsigned char) (~((~(arr_0 [i_2] [i_0]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 3; i_5 < 7; i_5 += 2) 
        {
            arr_20 [2ULL] [i_5] &= ((/* implicit */short) (-(5567381927158535484ULL)));
            var_25 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64528))));
        }
        arr_21 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [2] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((long long int) (unsigned short)64523))))))));
        var_26 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) arr_3 [i_0])))))) : (arr_0 [i_0] [i_0])))));
        var_27 ^= ((/* implicit */_Bool) arr_9 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                var_28 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8] [i_7]))) + (arr_18 [i_6] [i_6] [i_6])));
                var_29 += ((/* implicit */short) ((arr_22 [i_6]) / (2585513788120065LL)));
                arr_30 [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (-(var_5)));
            }
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_9])))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)64528)) : (((/* implicit */int) (unsigned short)1003))))) ? (((arr_23 [i_7]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_7] [7LL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_7] [i_9])))));
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) (short)8677)))))));
                }
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    arr_41 [i_11] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)64532));
                    var_33 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_11]))));
                    var_34 = ((/* implicit */short) var_16);
                }
                arr_42 [(signed char)5] [(signed char)5] [(signed char)5] [(signed char)5] |= ((/* implicit */unsigned long long int) arr_38 [i_6] [i_6] [i_7] [i_7] [i_6] [i_6]);
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)209))));
                arr_43 [i_6] [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) 855515726602638069LL))));
                arr_44 [i_9] [i_7] = var_11;
            }
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_36 *= ((/* implicit */_Bool) ((var_17) & (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_7])))));
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_37 = ((/* implicit */short) var_8);
                    arr_51 [i_12] [i_13] [i_13] [i_12] [i_7] [i_6] = ((/* implicit */unsigned short) (unsigned char)238);
                    var_38 ^= ((((/* implicit */_Bool) arr_47 [i_13] [i_6] [i_7] [i_7])) ? (((/* implicit */long long int) ((unsigned int) var_17))) : (((((/* implicit */_Bool) (signed char)-35)) ? (-855515726602638070LL) : (((/* implicit */long long int) 4294967293U)))));
                }
                for (signed char i_14 = 4; i_14 < 10; i_14 += 4) 
                {
                    arr_54 [i_6] [i_6] [i_12] [i_14 - 3] = ((/* implicit */int) arr_32 [i_14 - 2] [i_14 - 4]);
                    arr_55 [(signed char)1] [i_14 - 3] [i_6] [i_14] [i_14 - 3] [i_12] = ((/* implicit */unsigned short) (+(((int) var_13))));
                    var_39 = ((/* implicit */long long int) arr_5 [i_12] [i_7] [i_6]);
                }
            }
            var_40 = 939524096;
        }
        arr_56 [i_6] &= ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_50 [i_6] [i_6] [i_6] [i_6]))));
    }
    var_41 &= ((/* implicit */long long int) (unsigned short)1628);
}
