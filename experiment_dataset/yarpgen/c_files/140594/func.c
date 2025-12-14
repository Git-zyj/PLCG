/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140594
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (short)13842))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7))))) : (((/* implicit */int) ((_Bool) var_4))))));
                    arr_9 [i_0] [19LL] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_11)) : (655197058U)))), (((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_11)))) % ((+(var_5)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) < (((((long long int) var_0)) + (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (signed char i_4 = 3; i_4 < 22; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    arr_16 [i_4] [(unsigned char)2] = var_3;
                    arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (var_2))))));
                    arr_18 [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) 1830651312);
                    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3639770236U)))))) % (min((var_1), (((/* implicit */long long int) (signed char)105))))))) ? (((((/* implicit */unsigned long long int) var_11)) * (11936308346174403907ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))));
                    arr_19 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 5498828778124872721LL)) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) (unsigned short)62734))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31334)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((long long int) var_6))))));
                }
            } 
        } 
    } 
}
