/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149113
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
    var_16 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), (var_8)))), (min((min((12463987391748804277ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_13))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)192))) << (((((/* implicit */int) (unsigned char)212)) - (201)))));
        var_18 = ((/* implicit */short) (signed char)127);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */signed char) max(((~(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)3463)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned short)13591))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-4870616053086100465LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))))) * (((/* implicit */long long int) var_13))))) || ((_Bool)1)));
    }
    var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_5)))))))))));
}
