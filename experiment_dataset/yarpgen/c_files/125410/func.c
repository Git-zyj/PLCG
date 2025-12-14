/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125410
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
    var_16 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-76)))), (0U))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((6088690286155840592LL), (((/* implicit */long long int) (short)32214))));
                            arr_11 [i_0] [i_0] [i_2 - 4] [i_2] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (signed char)99))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_3 + 2]))) || (((/* implicit */_Bool) arr_7 [i_0] [i_2 - 4] [i_3 + 1])))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)32767)) / (((/* implicit */int) var_5)))) % (-1663329150)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2069661647500296316LL) : (var_6)))) ? (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(signed char)7] [(signed char)3])) & (((/* implicit */int) arr_7 [i_0] [i_2] [i_3])))) : (((/* implicit */int) arr_9 [0LL] [i_0] [i_2 + 1] [i_2 + 1] [i_3 + 2] [(signed char)1])))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) min((var_11), (var_3))))))));
                        }
                    } 
                } 
                var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 16980606218027610547ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_8)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_8 [(signed char)1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (16980606218027610542ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))))))));
                var_20 = ((signed char) max((((arr_8 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [(_Bool)1] [i_0] [i_0]))));
            }
        } 
    } 
}
