/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137989
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)65505);
                    var_16 = ((/* implicit */signed char) var_15);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                {
                    arr_17 [i_4] = ((/* implicit */signed char) (short)8128);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)8156)))) ? (((((/* implicit */_Bool) min(((signed char)-30), ((signed char)104)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17151)) ? (((/* implicit */long long int) -1981507811)) : (arr_6 [10LL])))) : (arr_10 [i_4 + 2] [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) -602205412))) & (((195473840) + (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
