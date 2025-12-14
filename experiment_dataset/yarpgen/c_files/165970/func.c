/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165970
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
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_6)))))));
    var_21 ^= ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)245)), (var_17)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9787)))))) : (max((((/* implicit */unsigned long long int) -8LL)), (((unsigned long long int) (_Bool)1))))));
                    var_24 = (_Bool)1;
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((unsigned short) ((signed char) (_Bool)1)));
    }
}
