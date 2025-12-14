/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159449
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((((~(((/* implicit */int) (unsigned short)65533)))) & ((~(((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (signed char)-118)) ^ (var_1))) : (((/* implicit */int) (short)-8471))))));
    var_20 = ((/* implicit */int) var_8);
    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)157))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (~((-(4026531840U)))));
                        var_24 = ((/* implicit */signed char) ((arr_5 [i_2] [i_3 - 2] [(signed char)10] [i_3]) >= (arr_5 [i_0] [i_3 + 1] [i_3] [i_0])));
                        arr_10 [i_0] [i_2] [i_3] = (!(((/* implicit */_Bool) var_13)));
                        var_25 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_0]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8306335436246543148LL)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */_Bool) ((min((var_13), (((/* implicit */unsigned int) min((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (var_18)))))) << (((max((((/* implicit */unsigned long long int) (signed char)33)), ((-(2628082110931942378ULL))))) - (15818661962777609213ULL)))));
        var_27 = ((/* implicit */signed char) var_17);
        arr_14 [i_4] = ((/* implicit */unsigned short) (-(((arr_12 [i_4] [i_4]) + (((/* implicit */int) var_18))))));
    }
}
