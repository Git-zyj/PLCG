/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129008
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
    var_19 &= ((/* implicit */int) ((((max((622918933288075044ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) ^ (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */unsigned int) 2066425266)) : (2165612168U)))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (-2147483632) : (((/* implicit */int) (unsigned short)65535)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) & (max((((/* implicit */unsigned long long int) 3073802912U)), (arr_5 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1221164378U)) & (0ULL)))) ? (((arr_1 [i_0]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (max((4057856994U), (2170609767U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) : (var_14))))))));
                    var_21 ^= ((/* implicit */_Bool) (+(min((var_8), (((/* implicit */unsigned int) (short)25578))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((((((unsigned long long int) var_9)) * (var_17))), (((min((var_14), (var_18))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))))));
}
