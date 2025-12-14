/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136185
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
    var_11 = (signed char)127;
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_9 [i_2] [i_0] = ((/* implicit */int) var_5);
                        arr_10 [i_0] [(unsigned char)2] [(unsigned char)2] [8] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (arr_3 [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [(signed char)10])), (arr_8 [i_0] [i_1])))) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)124))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 1]))))));
                    }
                    var_13 -= ((/* implicit */unsigned char) min((arr_0 [i_0 - 2]), (((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 4; i_4 < 10; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) : (var_7)));
                        arr_15 [(_Bool)1] [i_2] [i_0 - 4] [i_0 - 4] [i_0 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (arr_3 [i_0])))) ? (((/* implicit */int) arr_13 [i_0] [(signed char)1] [i_0 - 1] [i_0 - 2])) : (((((/* implicit */_Bool) arr_14 [11U] [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_3 [i_1])) : (arr_11 [i_2]))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_1] [i_2]))))))));
                        var_15 = ((/* implicit */unsigned short) arr_14 [i_0] [(signed char)6] [(_Bool)1] [i_4]);
                        var_16 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (var_3) : (var_3)))) ? (max((arr_1 [i_4 - 2] [i_2]), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_4 - 1])))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_6 [i_1])) - (30161)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_13 [5U] [i_1] [i_1] [i_1])) : (arr_11 [i_0 - 1])))) ? (arr_1 [i_0 - 1] [i_4 + 1]) : (arr_1 [i_0] [i_0])))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned char)116))));
                    }
                }
            } 
        } 
    } 
}
