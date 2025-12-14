/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183875
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
    var_19 *= ((/* implicit */_Bool) var_1);
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_15)))) < (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_12))))))) & (((/* implicit */int) var_4))));
    var_21 = max((min((max((((/* implicit */unsigned int) (unsigned char)239)), (var_9))), (((/* implicit */unsigned int) ((signed char) var_6))))), (min((var_1), (((/* implicit */unsigned int) var_17)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (var_9)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) arr_0 [i_2 + 1] [i_1 + 1]))))) - (arr_8 [i_0])));
                    var_22 *= ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)133)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_0 [i_1 - 3] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_1 - 3] [i_2 - 1]))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_7 [i_0])), ((unsigned char)122)))) ? (((/* implicit */int) arr_0 [i_0] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_15 [i_4] [i_3] [i_4])))))))));
                    var_24 = ((/* implicit */unsigned char) arr_8 [i_4]);
                    arr_16 [i_0] [i_4] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) >> ((((~(((/* implicit */int) arr_3 [i_0])))) + (3963))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_11 [i_0] [i_3] [i_4]))))))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) >> ((((((~(((/* implicit */int) arr_3 [i_0])))) + (3963))) - (9657))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_11 [i_0] [i_3] [i_4])))))))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_5 + 2] [i_5 - 3]))));
        var_26 += ((/* implicit */_Bool) max((((((/* implicit */int) (short)19164)) & (((/* implicit */int) arr_14 [(_Bool)1])))), (((/* implicit */int) var_15))));
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_8] [i_8 + 1] [i_8 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_8] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_8] [i_8 - 1] [i_8 + 1])))) : (((/* implicit */int) min((arr_4 [i_8] [i_8 - 1] [i_8 - 1]), (arr_4 [i_8] [i_8 - 1] [i_8 + 1]))))));
                    var_28 = ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((((/* implicit */_Bool) 2800186755U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_31 [i_6] [i_9 - 1] [i_10]))))))) ? (((((arr_23 [i_6] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (var_9))) ^ (arr_22 [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_6] [i_6]), (var_17)))))))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3168163522U))))) - (max((var_11), (((((/* implicit */int) arr_29 [i_10] [i_10])) + (((/* implicit */int) arr_31 [i_6] [(unsigned short)7] [(unsigned short)7]))))))));
                }
            } 
        } 
        var_31 *= ((/* implicit */signed char) var_12);
    }
}
