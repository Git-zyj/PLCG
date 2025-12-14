/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156037
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(min((var_15), (((/* implicit */unsigned int) arr_3 [i_0 - 1]))))));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) != (((/* implicit */int) ((unsigned short) -8904740780194414399LL)))))), (arr_3 [i_0])));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((signed char) (signed char)-117));
                    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_5)) : (arr_6 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) var_8)))));
                }
                var_22 = ((/* implicit */unsigned long long int) ((436251093) - (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2367356939508342840ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned short i_5 = 3; i_5 < 9; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] [(signed char)5] [i_4] = (~(arr_0 [i_3]));
                    arr_19 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (17673380162273898853ULL))))))) & (((/* implicit */int) arr_7 [i_3] [i_3]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_6);
}
