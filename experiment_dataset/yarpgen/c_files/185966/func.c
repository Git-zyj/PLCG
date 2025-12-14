/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185966
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) var_15)), (var_1)));
    var_19 = ((/* implicit */unsigned int) (unsigned short)65535);
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-31169))))) <= (max((((((/* implicit */_Bool) 2305843009213693952LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))), (((/* implicit */int) max(((short)31168), (((/* implicit */short) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_21 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((arr_5 [(unsigned short)7] [i_2]) ? (2147483647) : (((/* implicit */int) arr_2 [(short)17]))))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)133))))) | (((int) (unsigned short)56097))));
                }
            } 
        } 
    } 
}
