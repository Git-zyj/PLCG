/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162655
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
    var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((var_10) >> (((((/* implicit */int) var_2)) + (11693)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (3298616649630047115ULL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 ^= (unsigned char)224;
                    arr_7 [0LL] [0LL] [i_2] [i_2] = ((/* implicit */int) var_6);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [8U] [i_3] = ((/* implicit */unsigned long long int) (short)10144);
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (19606579394994373LL))))))));
                    }
                    arr_11 [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(15148127424079504500ULL)))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-48)), (4U)))), (3298616649630047143ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551601ULL))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_11);
}
