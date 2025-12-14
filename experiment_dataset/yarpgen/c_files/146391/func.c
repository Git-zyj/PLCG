/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146391
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
    var_16 = ((/* implicit */int) ((unsigned int) ((unsigned char) (-(var_13)))));
    var_17 = ((/* implicit */_Bool) (-(((int) ((unsigned char) 125829120ULL)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned long long int) ((unsigned short) ((unsigned char) var_5)))))));
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? ((-(((/* implicit */int) arr_0 [(unsigned char)9] [(unsigned char)9])))) : ((+(var_11)))))) ? ((+((-(8193944089119136386ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [5U] [i_1 + 2] [i_1]))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (-1086716530299907784LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) : ((((_Bool)0) ? (1086716530299907768LL) : (((/* implicit */long long int) 4294967295U)))))))));
                    var_20 = ((/* implicit */_Bool) (~(((int) ((unsigned long long int) 7864320ULL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((((/* implicit */_Bool) 1086716530299907783LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (7384455937286851977LL))))));
    var_22 |= ((/* implicit */unsigned char) ((short) ((int) (!((_Bool)0)))));
}
