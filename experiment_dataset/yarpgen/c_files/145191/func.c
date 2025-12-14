/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145191
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
    var_17 += var_14;
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_19 |= ((/* implicit */signed char) (!(((((/* implicit */long long int) arr_0 [(short)8] [i_0])) < (arr_1 [(signed char)12])))));
        var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10462640999787205409ULL))));
    }
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_1 [6ULL]);
        arr_4 [7] = ((((/* implicit */_Bool) arr_2 [i_1])) ? ((+(((((/* implicit */int) var_10)) << (((/* implicit */int) (_Bool)1)))))) : ((-(arr_0 [(short)16] [4ULL]))));
        var_22 = var_13;
        var_23 += ((/* implicit */unsigned long long int) max((arr_1 [18]), (((((/* implicit */long long int) arr_0 [10U] [i_1 + 1])) + (((var_16) + (((/* implicit */long long int) arr_0 [2U] [2U]))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_24 = (i_2 % 2 == 0) ? (((/* implicit */int) max((max((((/* implicit */long long int) arr_0 [i_2] [i_2])), (((arr_1 [i_2]) << (((((arr_0 [i_2] [i_2]) + (2047795134))) - (22))))))), ((+(arr_3 [1])))))) : (((/* implicit */int) max((max((((/* implicit */long long int) arr_0 [i_2] [i_2])), (((((arr_1 [i_2]) + (9223372036854775807LL))) << (((((((((arr_0 [i_2] [i_2]) - (2047795134))) - (22))) + (1341314345))) - (33))))))), ((+(arr_3 [1]))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    arr_11 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) (+(var_8)))) >= (arr_1 [i_2])))) > ((~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_0 [i_2] [i_2])))))))));
                    arr_12 [i_2] = ((/* implicit */unsigned int) (~(arr_5 [4ULL])));
                    var_25 -= ((/* implicit */signed char) (-(var_9)));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_26 = max((((((/* implicit */int) arr_14 [i_5] [i_5])) & (((/* implicit */int) arr_14 [i_5] [i_5])))), ((+((~(((/* implicit */int) arr_14 [15ULL] [i_5])))))));
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_18 [i_6 + 1] [i_6] [i_6 + 3]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            arr_26 [i_5] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */short) var_5);
                            var_28 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_6 - 1] [i_9 + 1]))));
                            var_29 = ((/* implicit */short) (+(arr_20 [i_6 - 2] [i_7] [i_6 - 2] [i_6] [(_Bool)1])));
                            var_30 = ((/* implicit */unsigned int) ((((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) * (((/* implicit */unsigned long long int) arr_16 [i_6]))));
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_5] [(short)14] [i_5]) - (arr_15 [i_5] [i_5] [i_5])))) && (((/* implicit */_Bool) arr_15 [i_5] [0ULL] [i_5])))))));
        var_32 -= ((/* implicit */short) arr_18 [i_5] [i_5] [i_5]);
        arr_27 [9LL] = arr_20 [i_5] [i_5] [i_5] [i_5] [i_5];
    }
}
