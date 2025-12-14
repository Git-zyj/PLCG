/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124650
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1073741824)))) ? (((/* implicit */long long int) (~(arr_2 [i_1 - 2])))) : (max((var_8), (((/* implicit */long long int) arr_2 [i_0 + 2]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned long long int) var_0);
                                var_15 = ((/* implicit */unsigned short) 1073741824);
                                arr_14 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned char) arr_7 [i_0 - 2] [i_0 - 2] [(_Bool)1] [i_3]);
                                var_16 ^= ((/* implicit */unsigned long long int) (~(2147483647)));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)18] [i_0 - 2] [i_0 - 1] [(signed char)18] [14LL]))) : (((unsigned long long int) 18446744073709551608ULL)))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59912)) ? (-1073741844) : (((/* implicit */int) (unsigned char)213))))) ? (min((((/* implicit */int) (unsigned short)42378)), (var_6))) : (((2147483647) + (var_6))))) - (var_6)));
    var_20 = ((/* implicit */unsigned char) var_5);
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))))));
}
