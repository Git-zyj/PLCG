/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143960
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [(unsigned char)10] &= ((/* implicit */unsigned long long int) (short)9);
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    var_13 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            {
                arr_9 [14] [i_2] = ((/* implicit */_Bool) ((14813506997089956638ULL) << (((((/* implicit */int) (unsigned char)156)) - (143)))));
                arr_10 [i_2] [i_2 + 2] [i_2] = ((/* implicit */signed char) 18446744073709551609ULL);
                arr_11 [i_2] [(unsigned short)18] = ((/* implicit */signed char) 3687472210553599662LL);
            }
        } 
    } 
}
