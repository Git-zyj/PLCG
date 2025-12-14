/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176290
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)52127)) : (((/* implicit */int) (short)32766))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [(signed char)12]))))) : (var_10)));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) max((var_3), (arr_0 [i_1 - 2]))))));
                arr_5 [i_0] [8] [9U] &= ((/* implicit */unsigned short) ((unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (129318606) : (((/* implicit */int) (short)32767)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */int) (unsigned short)29389);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_18 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) == (((/* implicit */int) var_13))))) : (134216704)));
                    arr_15 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_6 [i_3] [13])) ? (var_10) : (8649004801875405598ULL))) : (2ULL)));
                    var_19 += ((/* implicit */_Bool) 175499550);
                }
            }
        } 
    } 
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) 789679524)) ? (min((((/* implicit */unsigned long long int) 2060467005)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 2547638939U)) : (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
}
