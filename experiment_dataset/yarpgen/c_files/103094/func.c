/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103094
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((_Bool) (unsigned short)58748)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [(signed char)2] [(_Bool)0] [i_1] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 432345564227567616LL)) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) -432345564227567607LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65533)) >> ((((((-2147483647 - 1)) - (-2147483630))) + (33))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(822505939U)));
            }
        } 
    } 
    var_21 += ((/* implicit */long long int) (-(((/* implicit */int) ((short) (((_Bool)1) ? (9713306249877633056ULL) : (((/* implicit */unsigned long long int) var_12))))))));
}
