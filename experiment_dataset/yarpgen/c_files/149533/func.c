/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149533
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [3ULL])) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)64)))))));
                    var_16 = ((/* implicit */_Bool) (signed char)-64);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((arr_5 [i_0] [i_1 - 1] [i_1 - 1]) / (((/* implicit */long long int) 1915816910U)))) : (((/* implicit */long long int) 3127972433U))));
                    var_18 = ((/* implicit */long long int) var_13);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) var_8)) : (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 4; i_6 < 17; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) 4294967288U))), ((~(((/* implicit */int) (signed char)90))))));
                        var_20 = ((/* implicit */short) max(((signed char)-93), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_18 [(_Bool)1] [i_4 - 1] [(signed char)9] [i_4] [12LL] [i_4]), (((/* implicit */unsigned int) (signed char)-52))))) >= (arr_19 [i_3] [i_4 - 1] [i_4] [i_4]))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)62)) ? (arr_14 [(signed char)14] [i_6]) : (arr_14 [i_3] [(_Bool)1]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_14 [1] [10]))))))));
                    }
                    var_22 = ((unsigned short) 2147483647);
                    var_23 = ((/* implicit */int) var_1);
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) arr_15 [i_4] [i_7] [i_4]);
                                var_25 = ((/* implicit */unsigned int) max((var_25), (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((var_12) || (((/* implicit */_Bool) 17081043574304884554ULL))))), (var_7)))), (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 1] [i_7 - 1])))))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (signed char)52)))))));
                                var_27 = ((/* implicit */long long int) ((((unsigned long long int) (-2147483647 - 1))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_4 - 1] [(signed char)10]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
