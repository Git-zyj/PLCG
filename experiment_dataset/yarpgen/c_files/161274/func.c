/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161274
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) (signed char)-1))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (((unsigned long long int) (signed char)0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) / (arr_0 [i_0] [i_1]))) * (((/* implicit */int) var_7))))), ((((-(arr_2 [i_0]))) + (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (arr_3 [i_1]))))))));
                arr_6 [i_1] = ((/* implicit */int) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                var_18 = ((/* implicit */int) ((max((arr_10 [i_2] [i_2]), (((/* implicit */long long int) var_5)))) >> (((((long long int) var_1)) - (1106503093590190998LL)))));
            }
        } 
    } 
}
