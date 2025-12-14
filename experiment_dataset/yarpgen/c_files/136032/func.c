/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136032
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_0))));
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1055233495261409068ULL))));
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) : ((+(var_9)))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_9))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 = ((((long long int) (!(((/* implicit */_Bool) arr_2 [i_2]))))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) | (((/* implicit */int) (signed char)-82))))));
                    var_18 = ((/* implicit */short) min((min((((/* implicit */long long int) (+(var_2)))), (var_4))), (((/* implicit */long long int) var_3))));
                    var_19 = ((/* implicit */long long int) (signed char)-49);
                    var_20 &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)143))))));
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) ((var_1) >> (((arr_3 [i_0 + 2]) - (16501068692772769022ULL))))))), (arr_8 [(short)17])));
                }
            } 
        } 
    } 
}
