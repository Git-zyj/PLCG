/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155130
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
    var_10 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)46650)), (var_3)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))), ((~(arr_5 [i_0]))))), (((/* implicit */unsigned int) arr_4 [i_0]))));
                    arr_7 [i_0] [i_0] [(unsigned char)14] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2 - 1] [i_2 + 1])), (((((/* implicit */_Bool) 2147483633)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2147483633)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_4 [i_1])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))))));
                    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(unsigned char)15])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((unsigned char) -669653130014659220LL)))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (4515289635650328540ULL)))));
                    var_13 = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) arr_3 [i_3]);
                var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_6 [i_3] [i_4] [i_4]), (arr_6 [i_3] [i_4] [i_4]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-3001588086931529157LL))))));
}
