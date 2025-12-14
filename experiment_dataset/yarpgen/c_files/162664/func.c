/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162664
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
    var_10 = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) (signed char)27)))) ? (((/* implicit */int) var_8)) : (var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_0))))))))));
    var_11 = ((/* implicit */unsigned long long int) -4846423918799435272LL);
    var_12 = ((/* implicit */unsigned long long int) 7605928960884907927LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_7));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_10 [(unsigned char)21] [i_1 - 1] [(unsigned char)21] [i_3] = ((/* implicit */unsigned long long int) max((min(((~(7605928960884907927LL))), (((((/* implicit */_Bool) 7605928960884907947LL)) ? (7605928960884907932LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)472))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)54422)) / (((/* implicit */int) (signed char)-85)))))));
                            var_13 = ((/* implicit */signed char) -2743072268310758699LL);
                            var_14 ^= ((/* implicit */short) min((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [i_1])), ((unsigned short)65063)));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65063))) : (13935957075523220414ULL)));
                            var_16 = ((/* implicit */unsigned char) arr_7 [i_3] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
