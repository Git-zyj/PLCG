/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107213
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
    var_19 ^= ((/* implicit */unsigned char) ((var_7) && (((max((var_2), (((/* implicit */int) var_1)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10950)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((63) <= (((/* implicit */int) (short)-8251)))) ? (3902297790412471824LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))));
                    var_20 ^= ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
    } 
}
