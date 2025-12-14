/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178166
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) < (3ULL)));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        var_16 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)42597)), (max((3ULL), (3ULL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */int) ((arr_0 [i_0]) || ((_Bool)0)))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) <= (arr_11 [i_0] [i_1] [i_0] [i_2] [i_4])))))) ? (((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) * (((/* implicit */int) arr_3 [i_2 - 1] [2ULL] [i_2 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_4 - 1] [i_4 - 1] [i_3 - 1] [i_4 - 1])) : (arr_8 [i_0] [i_0] [i_0])))) || (((arr_4 [i_4]) < (((/* implicit */unsigned long long int) 21U))))))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((int) 18446744073709551591ULL))) < (((unsigned int) arr_9 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_4]))));
                            var_19 = ((/* implicit */short) (~(((unsigned long long int) arr_13 [i_0] [i_0] [i_2] [i_1] [i_0]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1] [i_2])) ? (var_14) : (2893157260U)))) ? (arr_12 [i_0] [i_1] [i_3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_3 - 2])))))), (((/* implicit */unsigned int) ((unsigned short) arr_13 [4ULL] [i_1] [i_2 - 1] [i_3] [i_5])))));
                            var_21 = ((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_3 + 1] [i_3 - 2]);
                        }
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) 14898056813928887788ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) arr_1 [i_3])))) - (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (18446744073709551613ULL))))))))));
                    }
                    var_23 = ((/* implicit */unsigned char) arr_7 [(_Bool)1] [i_2]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((_Bool) var_7));
    /* LoopNest 2 */
    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551613ULL)) && (((/* implicit */_Bool) 18446744073709551613ULL))));
                arr_23 [i_6] = ((/* implicit */unsigned long long int) 0U);
                var_26 = ((/* implicit */unsigned int) min(((unsigned char)126), (((/* implicit */unsigned char) (signed char)-1))));
                arr_24 [i_7] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((171800844U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((unsigned long long int) 18446744073709551613ULL)))))), (((((/* implicit */_Bool) arr_18 [i_6 + 1])) ? (arr_17 [i_6 - 1] [i_6 - 1]) : (var_10)))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((3ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130)))));
}
