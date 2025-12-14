/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159794
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
    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) : (var_12)))));
    var_19 = ((/* implicit */unsigned short) var_16);
    var_20 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) ((((unsigned long long int) arr_5 [i_0] [i_0] [i_1])) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(unsigned short)18] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [20U])))))));
                var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)226)), (arr_3 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (unsigned char)231)) : ((-(arr_4 [i_0] [i_0]))))), (((/* implicit */int) ((short) var_7)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)227)) < (((/* implicit */int) (unsigned char)232))))), (3692288341904513197ULL))));
                    arr_14 [i_4 - 1] [i_4 - 1] [i_2] [i_3 + 2] = ((/* implicit */unsigned int) min((var_15), (var_15)));
                }
            } 
        } 
    } 
}
