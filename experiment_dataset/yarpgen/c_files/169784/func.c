/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169784
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((7623770222143250441ULL) <= (((((/* implicit */unsigned long long int) ((1422398731) / (-916877355)))) ^ (arr_4 [i_2 - 1] [i_1] [i_0 - 2])))));
                    arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */long long int) -273893351)) : (7786348164195787519LL))) | (7786348164195787515LL)))) + (((max((var_12), (17868674028976709300ULL))) & (((/* implicit */unsigned long long int) min((9223372036854775803LL), (var_11))))))));
                    var_20 = min((((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (979848968515324749ULL))), (((/* implicit */unsigned long long int) var_8)));
                    var_21 = ((/* implicit */unsigned char) (-(2431437791044738265ULL)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_15);
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 8178725529228373106LL)) | (17466895105194226847ULL)));
    var_24 = ((/* implicit */unsigned long long int) 7786348164195787520LL);
}
