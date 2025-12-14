/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122726
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
    var_12 = max((((/* implicit */int) var_0)), (((((/* implicit */int) ((var_7) <= (var_7)))) % (((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_8)) != (var_10))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)2648))))) : (min(((~(var_9))), (((/* implicit */long long int) (unsigned char)134)))))))));
                    var_14 -= ((/* implicit */long long int) (~(var_8)));
                    var_15 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) && (((/* implicit */_Bool) arr_0 [7LL])))))) : ((((!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2 + 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (var_9)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_14 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (1853577254) : (((/* implicit */int) var_0)))) < (((/* implicit */int) (unsigned char)105))))) >= (((/* implicit */int) (unsigned char)203))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))))) : (min((var_6), (((/* implicit */unsigned long long int) -8224941884939325946LL))))))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (max((((/* implicit */unsigned long long int) (unsigned short)48967)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-3)) != (((/* implicit */int) arr_1 [i_3])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_5 - 1] [i_5 - 1] [i_4 + 1] [i_4 - 1]) : (var_11)))))))));
                }
            } 
        } 
    } 
}
