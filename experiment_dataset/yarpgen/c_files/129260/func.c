/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129260
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
    var_10 += ((/* implicit */long long int) (unsigned short)45104);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) (!(arr_0 [i_0] [i_0 - 2]))));
                    arr_11 [i_1] = (-(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) var_0))))), (((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)0))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    arr_20 [i_5] [i_3] [i_4] [i_5] = ((/* implicit */long long int) min((max((arr_3 [i_5]), (((((/* implicit */_Bool) 14199994018831171194ULL)) ? (arr_3 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [19ULL]))))))), (((/* implicit */unsigned long long int) var_6))));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(((9001907162811201650ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 3]))))))))));
                    var_13 += ((/* implicit */unsigned short) max((arr_9 [i_5]), (max((((/* implicit */unsigned char) max((arr_14 [i_5]), ((_Bool)1)))), (var_9)))));
                    var_14 = ((/* implicit */unsigned short) var_4);
                    arr_21 [i_3 + 2] [i_5] [i_3] = ((/* implicit */long long int) min((((unsigned long long int) 10937707460936597744ULL)), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)44075)), (((int) arr_17 [i_3] [i_3] [(_Bool)1])))))));
                }
            } 
        } 
    } 
}
