/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189063
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)1024))))) ^ (max(((+(var_3))), (((/* implicit */long long int) arr_2 [3U]))))));
                    var_13 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))), ((((_Bool)0) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))))) : (arr_0 [i_1] [19U])));
                    var_14 -= var_6;
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        arr_10 [i_3] |= ((/* implicit */unsigned int) (((-((+(((/* implicit */int) (signed char)127)))))) % (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_7)))))));
        arr_11 [i_3] = ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_2 [i_3])), (var_3)))))) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) (unsigned short)0)));
    }
}
