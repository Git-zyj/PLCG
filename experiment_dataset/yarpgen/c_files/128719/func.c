/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128719
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
    var_11 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_2))))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (6982431249871344291LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)42))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_0 [i_0])), ((~((~(arr_3 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-68)))))) <= (((/* implicit */int) var_5))));
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_12 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */signed char) 9807534068306765243ULL);
                    var_14 = ((/* implicit */int) arr_10 [i_3]);
                    var_15 = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_10 [i_2 - 1]))));
                    var_16 = (~(arr_7 [i_2]));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (arr_7 [i_3])))))) ? (((/* implicit */unsigned int) max((arr_11 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) ((((/* implicit */int) var_9)) >= (arr_9 [i_3] [i_4]))))))) : (((((/* implicit */_Bool) (+(arr_7 [i_2])))) ? (((((/* implicit */_Bool) (unsigned short)55917)) ? (arr_8 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_10 [i_2])))))));
                }
            } 
        } 
    } 
}
