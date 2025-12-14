/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13788
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
    var_12 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-1)), (6825359810233057995LL)))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_3)))), (min((arr_1 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)52215), (((/* implicit */unsigned short) (signed char)-32))))))));
                arr_7 [(signed char)7] [i_0] [i_1] = ((/* implicit */short) (~(min((((var_4) << (((((/* implicit */int) var_6)) - (50580))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)52229)))))))));
                arr_8 [(signed char)14] [i_0] = ((/* implicit */short) (+(arr_5 [i_0] [i_1])));
                arr_9 [i_0] = ((/* implicit */unsigned int) (+(((((((/* implicit */int) (signed char)12)) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) arr_4 [i_1] [(_Bool)1] [i_0])) : (arr_5 [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    arr_20 [i_3] [(unsigned char)1] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))) ? ((-(((/* implicit */int) (unsigned short)49192)))) : (((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-1))))))));
                    var_13 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((var_0) ? (((/* implicit */int) var_11)) : (arr_16 [i_2] [i_3] [i_4]))) != (((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) var_0))))))))) : (min((arr_15 [i_2] [10] [1U]), (((/* implicit */unsigned int) var_10)))));
                }
            } 
        } 
    } 
}
