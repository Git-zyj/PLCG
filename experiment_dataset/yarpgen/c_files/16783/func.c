/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16783
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
    for (signed char i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [6U] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [2LL] [2LL] [i_2 - 3] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]))))) != (min((var_9), (((/* implicit */long long int) (-2147483647 - 1)))))));
                                var_16 = ((/* implicit */unsigned short) var_1);
                                arr_14 [i_0] [2ULL] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)180))))), (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_2 - 2] [i_2] [i_2 - 1] [i_4] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_2 - 2] [i_0 + 1] [i_2 + 3] [6LL] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */unsigned int) arr_9 [(_Bool)1] [i_1] [i_2] [i_1] [5]);
                    arr_16 [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) ((arr_3 [i_0 + 4]) >= (((/* implicit */unsigned long long int) min((-1470406326), (((/* implicit */int) var_1)))))));
                    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_5 [3LL])))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) 2U);
        arr_17 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) arr_7 [(_Bool)1] [i_0] [i_0]))), (((unsigned int) var_14))));
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 4; i_6 < 9; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        arr_24 [i_0] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) >= (((long long int) arr_22 [i_5])))));
                        arr_25 [i_7] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) arr_19 [i_6 - 1] [i_5] [i_5 - 1])), (arr_22 [i_5]))));
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [i_8 + 3]) / (arr_27 [i_8])))) ? (((/* implicit */long long int) arr_27 [i_8])) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (var_9)))))) && (((/* implicit */_Bool) var_6)))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)109)) >> (((((-2147483636) - (-2147483633))) + (18)))))) | (max((((/* implicit */long long int) ((short) 131072U))), (((long long int) arr_26 [i_8]))))));
        var_21 = ((/* implicit */unsigned long long int) var_2);
        var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) var_1)), (var_12)))));
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) | ((+(4378716019329546526LL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (((var_0) % (var_0)))))) : (var_12)));
    var_24 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned short i_9 = 1; i_9 < 23; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_32 [i_9] [i_9] [i_9]))));
                    var_26 *= ((/* implicit */unsigned short) (signed char)86);
                }
            } 
        } 
    } 
}
