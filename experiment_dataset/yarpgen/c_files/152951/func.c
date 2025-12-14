/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152951
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
    var_18 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((arr_3 [i_0 + 1]), (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1])))));
        var_20 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_17))))), (-18LL))));
        var_21 = ((/* implicit */unsigned int) var_1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (+(((35183298347008ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_3] [i_2])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) var_5))));
                    arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (arr_0 [i_3])));
                    var_23 = ((/* implicit */signed char) 2665315224U);
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) var_6);
    }
    for (long long int i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (unsigned short)64349)))) >= (((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-16636))))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12561)) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_18 [i_4 + 3] [i_4 - 1])) : (((/* implicit */int) (signed char)-127))));
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15904)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((var_6), (((/* implicit */short) var_15))))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) ((var_17) | ((-(arr_0 [i_6])))));
            arr_25 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_17), (((/* implicit */int) var_4)))))));
            var_28 = ((/* implicit */int) var_3);
        }
        var_29 = ((/* implicit */unsigned char) var_17);
    }
    /* vectorizable */
    for (unsigned short i_7 = 3; i_7 < 12; i_7 += 3) 
    {
        var_30 = arr_12 [i_7] [i_7] [i_7] [i_7];
        var_31 = ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned short)45713)) <= (-1482314157)))));
        var_32 = ((/* implicit */unsigned char) (~(5322590007663516538ULL)));
        var_33 = ((/* implicit */signed char) (-(arr_0 [10])));
    }
    var_34 = ((/* implicit */signed char) var_13);
}
