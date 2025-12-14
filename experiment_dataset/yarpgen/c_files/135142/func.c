/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135142
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
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) var_3);
                    var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((short) var_3))) ? (arr_4 [i_2 + 2] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-37)) ? (12288) : (((/* implicit */int) (signed char)63)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) (~(4294967295U)));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [(unsigned char)13] [i_2] [i_3]))))))) ? (((int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */long long int) 774349742U))))) : ((+(((/* implicit */int) arr_9 [i_2] [i_2 - 3] [i_2 - 3] [i_2]))))));
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (-((~(var_4)))));
                        var_17 = 0LL;
                        var_18 *= ((/* implicit */signed char) max((min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) (short)-1)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)35)))))), (((/* implicit */int) ((signed char) 264241152U)))));
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)36828)))))));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((min((16ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (4294967294U) : (var_6))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) * (((/* implicit */int) var_0))))));
    var_20 *= ((/* implicit */unsigned int) var_13);
    var_21 -= ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
}
