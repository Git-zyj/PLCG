/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103151
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
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 17437486153009681546ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((3928912550U) - (3928912532U)))))) : (var_3)))) : (-3040621708547134352LL)));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) : ((~(((366054729U) & (((/* implicit */unsigned int) arr_0 [i_0]))))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3928912572U)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0] [i_0])))) ? (10976453659923680138ULL) : (((/* implicit */unsigned long long int) 366054729U))));
                        }
                    } 
                } 
                var_21 &= min((((/* implicit */int) var_9)), (((int) 134217600ULL)));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 3953302747U))));
                var_23 = ((((/* implicit */_Bool) 137997805)) ? (3890586818U) : (16777215U));
            }
        } 
    } 
    var_24 = ((/* implicit */int) 3073687650U);
}
