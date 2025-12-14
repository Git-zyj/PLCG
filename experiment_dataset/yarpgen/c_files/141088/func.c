/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141088
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33781)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_5)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((3205308887U) >= (var_5))))))) : ((-(((((/* implicit */_Bool) 178615802651009265LL)) ? (0ULL) : (((/* implicit */unsigned long long int) var_3))))))));
                var_11 = ((/* implicit */signed char) (+(((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))))));
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_3))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max(((unsigned short)65535), ((unsigned short)0)))) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned short)1))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                var_14 = var_5;
                arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43793)))))) & ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (max((var_0), (((/* implicit */unsigned int) var_1)))) : (2391083720U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                var_15 = ((/* implicit */unsigned char) (+((-(13U)))));
                arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) (unsigned short)31752)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)166)))))) : (((/* implicit */int) ((((/* implicit */int) (short)19536)) > (((/* implicit */int) (!(var_2)))))))));
            }
        } 
    } 
}
