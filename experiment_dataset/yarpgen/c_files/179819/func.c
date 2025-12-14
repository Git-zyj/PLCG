/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179819
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (8799724848082243716LL)))) ? (max((17179869183LL), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) / ((-(max((var_12), (var_6)))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned int) var_13)) : (var_9)))) ? (max((-17179869193LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-11)))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (-((-(max((var_13), (((/* implicit */int) (unsigned short)10607))))))));
                    var_19 = ((/* implicit */unsigned int) max(((((+(var_14))) >> (((max((arr_8 [i_2] [i_2] [i_0] [i_0]), (((/* implicit */unsigned int) var_3)))) - (3114113490U))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((7375630957033808955LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-29745)))))))))));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) + (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)36786)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 17179869163LL)) ? (1583032499U) : (((/* implicit */unsigned int) 2147483647)))))) - (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_4 [i_2] [i_1]), (((/* implicit */unsigned short) (short)0))))) + (((var_15) - (((/* implicit */int) arr_7 [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = (-(max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)232)), (-8799724848082243711LL)))), (72057594037927935ULL))));
                    arr_18 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65524)) && (((/* implicit */_Bool) -2147483633))));
                    arr_19 [i_5] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1332427924)))))))) ? (((max((arr_8 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) (signed char)-1)))) / (((arr_8 [i_3] [i_3 + 2] [i_3] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)10)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), ((~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46185)))))))))));
}
