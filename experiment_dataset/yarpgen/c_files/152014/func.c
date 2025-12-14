/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152014
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)0))))) && (((/* implicit */_Bool) arr_0 [(signed char)1] [i_0]))))), (((short) ((unsigned short) (unsigned short)21902)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_12 = ((/* implicit */_Bool) min((var_12), ((!(((/* implicit */_Bool) (unsigned char)109))))));
            var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_8 [i_2])))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_2] [(unsigned short)4]))) : (((arr_8 [i_2]) % (((/* implicit */int) arr_3 [i_2] [i_2]))))));
        arr_10 [i_2] = ((/* implicit */_Bool) arr_6 [i_2]);
        arr_11 [(unsigned short)6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [16U] [16U])) ? (arr_0 [i_2] [i_2]) : (((arr_0 [i_2] [i_2]) ^ (((/* implicit */int) arr_4 [i_2] [i_2] [(_Bool)1]))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                {
                    var_14 |= ((/* implicit */int) var_10);
                    var_15 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [i_3] [i_3] [i_5])), (arr_18 [i_3])))) ? (min((((/* implicit */unsigned int) arr_14 [(_Bool)1])), (arr_17 [i_4]))) : (((/* implicit */unsigned int) (-(arr_5 [i_4] [i_5]))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) arr_15 [i_3 + 1]);
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
                    {
                        {
                            arr_31 [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned short)15))))) ? (min((((/* implicit */unsigned int) var_8)), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_9]))))))))) && (((/* implicit */_Bool) ((unsigned char) (short)5)))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_7 + 3] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8 - 2] [i_9 - 1] [i_3 + 1]))) : (arr_29 [i_9 - 2] [i_6 + 2]))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_23 [i_6 + 2]))))))))));
                        }
                    } 
                } 
            } 
            arr_32 [i_3] [i_6 + 3] [i_3] = (~(((/* implicit */int) arr_27 [(short)10] [i_6] [i_6] [i_6] [i_6])));
        }
        /* LoopSeq 3 */
        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_7 [i_10])), (((((((/* implicit */_Bool) arr_13 [i_3])) ? (var_1) : (((/* implicit */unsigned int) -1524450483)))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_3 + 2])))))))));
            var_19 = ((/* implicit */unsigned long long int) arr_26 [i_10] [i_10] [i_3 - 1] [i_3 - 1] [i_3]);
            var_20 ^= ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_17 [i_3 + 2])))) ? (((((/* implicit */_Bool) arr_14 [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_3] [i_3])))) : (((/* implicit */int) arr_12 [i_3 + 1])))) > (((/* implicit */int) arr_22 [i_3] [i_10] [i_10]))));
            arr_35 [i_3] [i_10] [i_3 + 1] = ((/* implicit */unsigned short) arr_23 [i_3]);
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_3 + 1]))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_11))));
        }
        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) arr_14 [i_12]);
            arr_42 [i_12] = ((/* implicit */unsigned char) (-(11U)));
            arr_43 [i_12] [i_12] = ((signed char) (!(((/* implicit */_Bool) arr_37 [i_3 + 1]))));
        }
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_2) : (min((var_4), (((/* implicit */unsigned int) (unsigned char)0))))));
}
