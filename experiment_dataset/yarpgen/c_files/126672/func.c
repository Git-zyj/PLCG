/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126672
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) min((max(((+(arr_3 [i_0] [8ULL] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4027059479345319363LL))))))), (((/* implicit */unsigned int) (((+(arr_3 [i_0] [i_1] [16LL]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [21]))) != (4027059479345319362LL))))))))));
                var_20 = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_3]))))) - (((/* implicit */int) arr_7 [i_2] [i_3] [(_Bool)1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [0])) ? (arr_5 [6LL]) : (((/* implicit */unsigned long long int) 3775373098U))))) ? ((-(arr_5 [(signed char)10]))) : (((/* implicit */unsigned long long int) (-(arr_6 [(short)15] [i_3])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_6 [i_2] [i_2]))), (-4027059479345319363LL))))));
                arr_9 [i_2] [i_3] [2ULL] &= ((/* implicit */unsigned short) arr_8 [17U] [i_3] [i_2]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-91))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_8)) ? (3386894121U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2852))))))));
}
