/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179735
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) (signed char)-25))))))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1])) ? (((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((23540054) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (25915)))))) ? (((/* implicit */int) ((signed char) (unsigned char)225))) : (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) var_0))))))));
        var_14 |= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) arr_1 [i_0] [(signed char)0])), (max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)46307))))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_1 [(unsigned char)6] [(unsigned char)6])), (arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        var_15 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(_Bool)1] [i_1])) << (((((/* implicit */int) arr_5 [i_1] [i_1])) - (234)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_5 [i_1] [i_1 - 3])) - (223)))))) : (122880ULL)))) || (((/* implicit */_Bool) arr_4 [i_1]))));
        arr_6 [i_1] [i_1] = (unsigned char)244;
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1 - 2] [i_1] = ((/* implicit */signed char) arr_12 [i_1 - 3] [i_1 - 3] [i_3]);
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((long long int) arr_10 [i_1 - 3] [i_1 + 1] [i_1 - 1])) == (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 3])) & (((/* implicit */int) var_0)))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((arr_10 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) -466027098)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1])))))))));
    }
    /* LoopNest 3 */
    for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    arr_23 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) var_6);
                    var_16 = ((/* implicit */int) max((((/* implicit */signed char) (((+(((/* implicit */int) arr_16 [i_4 + 2] [i_5])))) <= (((/* implicit */int) ((((/* implicit */int) arr_12 [(signed char)7] [(signed char)7] [(signed char)7])) >= (var_4))))))), (((signed char) var_12))));
                }
            } 
        } 
    } 
    var_17 *= (~(((((/* implicit */int) var_3)) / (var_10))));
}
