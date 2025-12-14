/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153850
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_12 -= ((/* implicit */short) max((((((arr_6 [i_0] [i_1] [i_0] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */unsigned long long int) (short)496))));
                        arr_8 [i_3] [i_2] [i_1] [2ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4583323164792338501LL))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * ((-(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_13 = ((/* implicit */long long int) ((((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) | (((/* implicit */unsigned long long int) (~((~(var_7))))))));
                        var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(var_10)))), (max((var_6), (((/* implicit */unsigned long long int) var_11))))));
                    }
                    arr_9 [i_0] [14] [i_2] &= ((/* implicit */unsigned char) var_8);
                    var_15 ^= ((/* implicit */short) (+(((/* implicit */int) (signed char)57))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_16 [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((_Bool) ((int) (-(((/* implicit */int) (short)4403))))));
                    arr_17 [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(arr_5 [i_4] [16LL] [i_4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_4)))));
                    arr_18 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((unsigned int) var_2)) + (((/* implicit */unsigned int) var_7)))))));
                }
            } 
        } 
    } 
}
