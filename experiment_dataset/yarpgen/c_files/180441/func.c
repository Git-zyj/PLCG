/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180441
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) arr_3 [i_0])) ? (1125899906842624LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))))));
                    arr_7 [9] [9] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (unsigned char)12)) ? (arr_6 [(unsigned short)23]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_2]))))))));
                    arr_8 [i_0] &= ((/* implicit */int) (unsigned char)151);
                }
                arr_9 [i_1] [20] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? ((-(arr_3 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (((/* implicit */int) (unsigned char)133)) : ((+(((/* implicit */int) ((short) (unsigned char)156)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_15);
    var_20 = ((/* implicit */unsigned long long int) var_13);
    var_21 &= ((/* implicit */signed char) (-(var_17)));
}
