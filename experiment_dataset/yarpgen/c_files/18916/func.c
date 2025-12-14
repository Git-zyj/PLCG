/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18916
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
    var_20 |= ((/* implicit */short) (signed char)127);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) 16256LL);
                    arr_9 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) (short)18903)), (max(((unsigned short)46466), ((unsigned short)4096)))));
                }
            } 
        } 
    } 
    var_21 = (unsigned short)49152;
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            {
                var_22 = (unsigned char)123;
                var_23 = min((((/* implicit */long long int) (unsigned short)50306)), (min((((/* implicit */long long int) (unsigned short)41621)), (min((-2296112741941233425LL), (((/* implicit */long long int) (unsigned short)61440)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (unsigned short)36999);
}
