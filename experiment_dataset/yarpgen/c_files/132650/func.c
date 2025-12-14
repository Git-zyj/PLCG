/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132650
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
    var_11 = (unsigned char)67;
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((unsigned short) (~(((356649268U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_13 = ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (+(((185270385U) + (arr_6 [i_1] [i_2]))))))));
                            arr_13 [i_0] [i_0] [8] [8] [4LL] [i_0] = arr_4 [(signed char)7] [i_2] [i_2];
                            var_15 = ((((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))) : (arr_6 [i_2] [i_1]))) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0])))) ? (((/* implicit */int) ((signed char) 4109696911U))) : (((/* implicit */int) ((signed char) arr_9 [i_0] [i_1] [i_0]))))) + (131))));
                        }
                    } 
                } 
            }
        } 
    } 
}
