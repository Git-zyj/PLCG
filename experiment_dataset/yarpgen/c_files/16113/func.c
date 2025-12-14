/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16113
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
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_18), (((/* implicit */long long int) (unsigned char)161))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_16))), (max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)158)) ? (6388482008894372892LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94)))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_2 [i_0])), (max((((/* implicit */int) var_15)), (arr_7 [i_0] [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) (unsigned char)158))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
                    var_21 = ((/* implicit */long long int) arr_3 [i_0]);
                    arr_10 [9LL] [i_1] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) -5197954122595246894LL)), (9473512969008252848ULL))), (min((var_16), (((/* implicit */unsigned long long int) 5197954122595246873LL))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */signed char) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)152)))))));
}
