/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104316
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) arr_1 [i_0] [i_1])))) + (2147483647))) >> ((((((_Bool)1) ? (max((var_5), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((int) -1412681876))))) - (4861438366246725833LL))))))));
                var_12 -= ((((/* implicit */int) ((min((((/* implicit */long long int) var_1)), (var_5))) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))) << (((((/* implicit */int) arr_1 [0U] [0U])) - (((/* implicit */int) arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                arr_10 [i_2 - 1] [i_3] [i_2] = ((/* implicit */unsigned char) ((1603491526557381946ULL) > (((/* implicit */unsigned long long int) var_6))));
                arr_11 [(unsigned char)13] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [16LL])) ? (((var_6) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))))) : (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (var_2))), (((/* implicit */unsigned int) arr_9 [i_2 - 1])))))));
                var_13 = ((/* implicit */unsigned int) arr_6 [(unsigned char)11]);
                arr_12 [15ULL] [i_3] = ((/* implicit */int) -4895745982780597101LL);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (var_3)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_4))));
}
