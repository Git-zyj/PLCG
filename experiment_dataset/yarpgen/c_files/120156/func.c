/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120156
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
    var_12 += ((/* implicit */signed char) (~((+(((long long int) (short)28515))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((_Bool) (+(9007199254740991ULL))));
                var_14 = ((/* implicit */long long int) ((short) ((((long long int) (signed char)-112)) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) >= (10545550905129456853ULL))))))));
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 1573438780)) ? (max((((/* implicit */unsigned int) var_8)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (10545550905129456851ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_13 [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) 2189582247U)) : (4305065914715529062LL)))) - ((~(18437736874454810625ULL)))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0))))))));
                }
            } 
        } 
    } 
}
