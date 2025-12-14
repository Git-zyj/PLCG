/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11900
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((int) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), ((+(max((arr_6 [i_2] [i_2 + 1] [i_2 + 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_2])))))))))));
                    var_13 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (short)32672)), (arr_7 [i_2 - 1] [i_2 + 2] [i_2])))));
                }
                var_14 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_6 [i_0] [i_0] [i_1])))))))));
                var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */short) min(((signed char)-99), (((/* implicit */signed char) arr_3 [i_0]))))), (((short) arr_3 [i_0]))));
            }
        } 
    } 
}
