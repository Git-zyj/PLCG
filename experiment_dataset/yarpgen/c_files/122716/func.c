/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122716
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 480)) ? (max((((((/* implicit */_Bool) (short)28820)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-105)))), (((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)198)))))));
                arr_8 [(unsigned char)15] |= ((/* implicit */unsigned char) ((short) ((arr_2 [i_0 + 1]) || (((/* implicit */_Bool) arr_6 [i_0 - 3] [i_1])))));
                arr_9 [i_0 - 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)96)) : (arr_7 [i_0 - 2] [i_0 - 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_7 [(unsigned char)9] [i_0 - 2] [i_0 + 1]) : (arr_7 [i_0 - 3] [i_0 + 1] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 3] [i_0 - 2])) ? (arr_7 [i_0] [i_0 + 1] [i_0 - 1]) : (arr_7 [i_0] [i_0 + 1] [i_0 - 2])))));
                var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                arr_10 [i_1] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (var_9))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_13 [(unsigned short)8] [(short)2] |= ((/* implicit */short) (~(arr_12 [i_2] [18U])));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(unsigned char)14] [(unsigned char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_11 [i_2] [(signed char)2]))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)12323)) : (arr_12 [i_2] [i_2])));
    }
    var_14 |= ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) 
        {
            {
                arr_20 [i_4] [i_4] = ((/* implicit */long long int) arr_18 [i_4] [i_3 - 1] [i_4]);
                arr_21 [i_4] [i_4 - 2] [(unsigned char)8] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (-447138359) : (((/* implicit */int) arr_16 [i_3] [i_4]))))) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) arr_16 [i_3] [i_3 + 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            for (unsigned short i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                {
                    arr_31 [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (arr_18 [i_5 - 3] [i_6 + 1] [i_5])))), (max((arr_11 [i_5 - 1] [i_5]), (((/* implicit */unsigned int) arr_18 [i_5 - 3] [i_6 - 2] [i_5]))))));
                    arr_32 [i_5] [i_6] [i_5] = ((int) var_9);
                }
            } 
        } 
    } 
}
