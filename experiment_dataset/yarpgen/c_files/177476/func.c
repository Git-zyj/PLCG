/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177476
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
    var_20 ^= ((/* implicit */signed char) ((unsigned short) ((var_2) != (((/* implicit */unsigned long long int) (-(var_4)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(signed char)18] |= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)51794)) : (((((/* implicit */int) (short)-8690)) ^ (((/* implicit */int) (signed char)-123))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? ((-(arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3968110442U)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 + 2] [i_0 + 1])), (var_1))))) >= (var_10)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (unsigned short i_3 = 4; i_3 < 9; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_18)), (arr_9 [i_2])));
                arr_12 [i_2] = ((/* implicit */long long int) (-((+(((((/* implicit */int) var_17)) >> (((18115805361455992530ULL) - (18115805361455992514ULL)))))))));
                var_22 = ((/* implicit */unsigned long long int) (+(max((arr_7 [i_2 - 1]), (((/* implicit */long long int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)8] [i_2]))))))))));
                arr_13 [i_3] = ((/* implicit */unsigned short) arr_3 [1LL] [i_3]);
            }
        } 
    } 
}
