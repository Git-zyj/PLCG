/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168449
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
    var_15 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) & ((+(-210850745367072662LL))))) >> (((((/* implicit */int) (unsigned char)123)) - (103)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3551221649U)) ? (2794361663U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58354)))));
                    var_17 ^= ((2794361663U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 2] [i_1 - 1]))));
                }
            } 
        } 
    } 
}
