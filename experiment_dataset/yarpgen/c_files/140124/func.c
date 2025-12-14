/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140124
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
    var_15 ^= min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))), (var_2));
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_0))))));
    var_17 = ((/* implicit */unsigned int) min((2770178925747022108LL), (((((/* implicit */_Bool) -4220748616678401929LL)) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_2)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3081228654374571216LL)) ? (3081228654374571204LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */long long int) 4127037621U)), (3081228654374571219LL))) : (((/* implicit */long long int) -1789889377)))) > (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((!((_Bool)1)))))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1 - 1] [1ULL])) <= (((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1]))))) : (((/* implicit */int) max((arr_7 [i_1] [i_1 - 1] [i_1 - 1]), (arr_7 [i_1] [i_1 - 1] [i_1]))))));
                    var_18 = ((/* implicit */long long int) 1520008631);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_2] [19U] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_7 [i_1] [i_2 - 2] [i_2]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_0])), (arr_13 [i_0] [i_1] [i_0] [i_3 + 3] [20])))) : (arr_5 [(_Bool)1] [i_1] [i_2])))));
                                arr_17 [i_0] [i_1 + 2] [i_0] [i_3 + 3] [i_3 + 1] [i_4] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (-3081228654374571184LL)));
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                    arr_18 [i_0 - 1] [i_1 + 1] [i_2 - 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3081228654374571219LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-111))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned int i_6 = 4; i_6 < 14; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) min((arr_21 [i_5]), (arr_0 [11]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))) + (arr_19 [i_5])))))));
                    var_21 ^= ((/* implicit */unsigned int) ((max((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_6 - 1] [i_7 + 1])) && ((_Bool)1)))))) - (((min((-2770178925747022128LL), (((/* implicit */long long int) var_4)))) / (((((/* implicit */long long int) arr_14 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6] [3LL])) + (arr_15 [i_5] [i_5] [i_6] [i_6] [i_6])))))));
                    arr_30 [i_5] [i_7] [i_7 + 1] [i_6 - 1] = (signed char)-73;
                    arr_31 [i_5] [(signed char)3] [i_7] [i_7] = ((/* implicit */int) max(((+(arr_25 [i_6 - 1] [i_6 - 4]))), (arr_25 [i_6 + 1] [i_6 - 2])));
                    arr_32 [i_6 - 3] [i_7] [i_7] [i_5] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [(signed char)4]))) : (arr_12 [i_5] [4] [2LL] [i_6 - 4] [1LL]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 2770178925747022128LL)))))));
                }
            } 
        } 
    } 
}
