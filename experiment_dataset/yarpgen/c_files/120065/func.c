/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120065
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    arr_8 [i_1] [i_1] [i_1] [i_2 - 1] = ((/* implicit */long long int) var_4);
                    arr_9 [(signed char)13] [i_2] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) (unsigned short)3330);
                }
                for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    arr_12 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) arr_3 [i_1 + 1]))))), ((~(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) (+(var_12)));
                        var_14 = (~(((/* implicit */int) (signed char)-57)));
                    }
                }
                arr_17 [i_0] [i_1] = min(((-((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned short)62205)));
                arr_18 [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((long long int) -5088544010983419043LL)) ^ ((~(2974113543402577749LL))))))));
    var_16 = ((((var_4) ? (((/* implicit */int) (short)3574)) : (((/* implicit */int) (unsigned short)3330)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))));
}
