/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135504
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) -8174514548290336808LL)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : ((+(2438566942239210171ULL))))) : (var_6)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(arr_3 [i_1] [i_1 + 1] [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [22] [10]))) * (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    var_16 ^= ((/* implicit */long long int) max((min((arr_6 [i_0 + 2] [i_1 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) var_11)))), (((((/* implicit */_Bool) (short)32767)) ? (11819747345612856822ULL) : (((/* implicit */unsigned long long int) arr_4 [(signed char)4]))))));
                    var_17 = min(((+(((/* implicit */int) ((signed char) -6709605587852931385LL))))), (((/* implicit */int) min(((unsigned short)7), (((/* implicit */unsigned short) (signed char)-111))))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) max((((short) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (short)-8278)) : (((/* implicit */int) (signed char)-64))))), (((/* implicit */short) (((+(((/* implicit */int) (short)370)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) 3465266117U)) != (var_0)))))))));
                }
            } 
        } 
    } 
}
