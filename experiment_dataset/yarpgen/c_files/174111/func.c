/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174111
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
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 385801453U)), (0ULL)))) ? (((((((/* implicit */int) (signed char)54)) - (((/* implicit */int) (signed char)31)))) - (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_2])))));
                    var_18 = ((/* implicit */signed char) max((var_8), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_0] [i_1] [1ULL])) : (((unsigned long long int) arr_3 [i_0] [(unsigned char)7] [i_0]))))));
                    arr_7 [i_0] [7U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9044956761866611772ULL)) || (((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 - 1] [i_0]))) || (((/* implicit */_Bool) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) (signed char)-37)) ? (6088701619192290737ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) != (12358042454517260879ULL)));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_5))) >> (((((/* implicit */int) var_10)) - (110)))))) > (((6088701619192290737ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88)))))));
    var_21 -= ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-4)) : (1882051681))))) / ((~(((int) var_3))))));
}
