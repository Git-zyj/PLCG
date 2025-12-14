/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188366
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
    var_18 &= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_1] [i_2]), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_12)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [4])) ? (var_12) : (((/* implicit */unsigned int) var_17))))), ((-(arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)192)), (var_13)))) >= ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -1432655028)), (750352164U)));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-2147085485256697915LL) : (((/* implicit */long long int) ((int) max((194640510), (-194640496)))))));
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15360))) | (((unsigned int) var_1))));
}
