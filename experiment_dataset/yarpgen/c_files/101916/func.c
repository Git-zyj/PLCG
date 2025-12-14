/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101916
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
    var_12 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_10 [4U] [11LL] = ((/* implicit */signed char) 2696710762464225804ULL);
                    var_13 = ((/* implicit */unsigned char) arr_6 [2] [i_1] [(unsigned char)9] [i_2]);
                    var_14 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (13392139867483858093ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))) ? (arr_5 [0LL] [(signed char)10] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))))));
                }
            } 
        } 
    } 
}
