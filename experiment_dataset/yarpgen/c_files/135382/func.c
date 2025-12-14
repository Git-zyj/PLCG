/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135382
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 14; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)142))))), (max((max((arr_4 [i_2]), (((/* implicit */long long int) (short)32767)))), (arr_5 [i_0] [i_2 - 3])))));
                    var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((18446744073709551614ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                }
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((-7943850659867281197LL) + (7943850659867281206LL))) - (9LL)))));
    var_20 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_2)), (((9ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) var_2))))));
}
