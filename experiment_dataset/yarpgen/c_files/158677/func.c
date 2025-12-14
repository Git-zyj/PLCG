/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158677
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_7);
                    arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))), (((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))) ? (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) != (arr_1 [i_1])))), ((+(((/* implicit */int) var_11)))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_2]);
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */long long int) var_7);
        arr_14 [i_0] [i_0] |= max((((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), (var_0)))), (((arr_5 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_4))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 11; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    {
                        arr_26 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)1) || ((_Bool)0)));
                        arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_6] [i_5] [i_4] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_20 [i_3] [i_4] [i_5] [i_6]))) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        arr_28 [i_6] [i_5] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_18 [i_3] [i_4] [i_5]) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))) || (((/* implicit */_Bool) var_10))));
                        arr_29 [i_3] [i_4] [i_3] [i_6] = arr_16 [i_3];
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            arr_40 [i_3] [i_3] [i_7] [i_3] [i_9] [i_10] = var_3;
                            arr_41 [i_3] [i_3] [i_10] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_7] [i_7] [i_3 - 1] [i_3] [i_3] [i_3])) << (((((/* implicit */int) var_8)) + (18136)))));
                            arr_42 [i_3] [i_3] [i_7] [i_9] [i_10] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_37 [i_3] [i_3] [i_10])))) - ((+(((/* implicit */int) (_Bool)1))))));
                        }
                        arr_43 [i_3] [i_8] [i_9] = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (signed char)19)))));
                        arr_44 [i_7] [i_7] [i_3] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((16211314368393761997ULL) >> (((1151407751) - (1151407710)))));
                        arr_45 [i_3] [i_3] [i_3] [i_7] [i_8] [i_9] = ((signed char) arr_38 [i_3] [i_7] [i_8] [i_8] [i_9] [i_9] [i_9]);
                    }
                } 
            } 
        } 
        arr_46 [i_3] = ((/* implicit */int) var_10);
    }
    var_12 = ((/* implicit */_Bool) var_9);
    var_13 = ((/* implicit */signed char) var_3);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1168857633)) ? (((/* implicit */int) var_4)) : (var_0)));
    var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (signed char)-2)) : (-1151407763)));
}
