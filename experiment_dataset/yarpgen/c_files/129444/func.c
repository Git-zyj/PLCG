/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129444
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [(signed char)10] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_3);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            {
                arr_11 [i_1 - 2] = ((/* implicit */signed char) arr_6 [i_2]);
                var_16 ^= ((/* implicit */unsigned char) ((arr_0 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) -5493303541000448077LL);
}
