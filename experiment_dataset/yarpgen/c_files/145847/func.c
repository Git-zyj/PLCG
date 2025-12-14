/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145847
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3] [i_1])))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)102)) < (569962112)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) -569962113))))))));
                        arr_13 [i_3] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((-592980903970421538LL) | (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0])))))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (70368475742208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1])))))));
                        arr_14 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-111)), ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))))))) : (((((/* implicit */_Bool) min((-1), (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 + 2] [i_2] [i_3]))) : (arr_7 [i_2]))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)110)))))))));
                        arr_15 [i_0] [i_3] [i_1 + 2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (short)0);
                    }
                    arr_16 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) (+(arr_10 [i_0] [i_0] [i_2] [i_2] [i_2])));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(569962112))))));
                    arr_17 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_4);
    var_22 &= ((/* implicit */_Bool) var_11);
    var_23 = ((/* implicit */signed char) (short)0);
}
