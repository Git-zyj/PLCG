/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163451
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)182))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [4]))))));
                    var_19 = (signed char)0;
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((unsigned long long int) arr_7 [i_2 + 3] [i_1] [i_0])) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))))));
                }
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) (unsigned char)64))))) : (((unsigned long long int) 9223372036854775807LL)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((long long int) (signed char)0)) : ((-(arr_8 [(signed char)10] [1] [1]))))))));
            }
        } 
    } 
    var_21 = var_17;
}
