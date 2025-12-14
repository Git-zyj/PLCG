/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150050
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
    var_13 = ((/* implicit */int) var_9);
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 += ((/* implicit */unsigned char) 3113887197U);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned int) (-(((arr_0 [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_17 += ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)7168));
        var_18 -= ((/* implicit */unsigned char) ((signed char) var_8));
    }
    /* LoopNest 2 */
    for (short i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                var_19 = ((/* implicit */int) (unsigned short)7176);
                var_20 = ((/* implicit */unsigned int) ((signed char) ((unsigned int) max((((/* implicit */unsigned long long int) (signed char)-83)), (var_6)))));
                var_21 = ((((/* implicit */_Bool) (unsigned short)58359)) ? (((/* implicit */int) (short)27611)) : (((/* implicit */int) (short)27636)));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+((((!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2])))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_1]) ^ (((/* implicit */int) (unsigned short)7181))))) : (arr_3 [i_1]))))))));
            }
        } 
    } 
}
