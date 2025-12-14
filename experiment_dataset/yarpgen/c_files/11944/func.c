/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11944
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
    var_12 -= ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) (_Bool)1);
                    var_14 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1016686019752089804LL)) ? (var_4) : (((/* implicit */int) arr_3 [i_2] [i_1]))))))));
                    arr_6 [i_0] [i_1] [(unsigned char)0] [i_2] |= ((((((/* implicit */_Bool) (signed char)-112)) && (((/* implicit */_Bool) (unsigned short)7214)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)58316))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7198)) && (((/* implicit */_Bool) arr_5 [i_0]))))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) 1440951479U)) ? ((((!(((/* implicit */_Bool) 1440951492U)))) ? (-1016686019752089816LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)65528))))))))));
}
