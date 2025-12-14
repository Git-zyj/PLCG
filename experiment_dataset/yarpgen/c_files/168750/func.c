/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168750
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_19)) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_7 [(unsigned char)14] [i_0] [i_2]))))));
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min(((~(arr_5 [i_0] [i_0] [i_2] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((arr_3 [i_1 - 2] [i_1 - 4] [i_1 - 4]) - (382887361))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) var_3)) >> ((((~(((((/* implicit */_Bool) (short)12082)) ? (((/* implicit */long long int) var_6)) : (arr_4 [i_1] [i_2]))))) - (774859491LL)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) 2147483647);
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 3; i_6 < 8; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)0)))))))));
                        arr_20 [i_3] [i_4] [i_4] [i_6 + 2] = ((/* implicit */signed char) (unsigned short)0);
                    }
                    arr_21 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) max((((min((var_15), (((/* implicit */unsigned long long int) (short)15433)))) << (((((/* implicit */int) (signed char)-60)) + (88))))), (((/* implicit */unsigned long long int) var_12))));
                }
            } 
        } 
    } 
}
