/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173147
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
    var_17 = ((/* implicit */unsigned short) (!((((~(-9071002887645736982LL))) >= (min((((/* implicit */long long int) -238657088)), (9071002887645736993LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) ((((int) min((arr_1 [i_1]), (((/* implicit */unsigned int) (unsigned short)1))))) >> ((((((-2147483647 - 1)) - (-2147483617))) + (31)))));
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((14011258290412729194ULL) - (14011258290412729170ULL)))))) ? (((/* implicit */unsigned int) (~(var_8)))) : (((((/* implicit */_Bool) min((arr_8 [i_0]), (((/* implicit */unsigned int) var_12))))) ? (min((((/* implicit */unsigned int) (unsigned char)135)), (arr_8 [i_0]))) : (((/* implicit */unsigned int) ((int) var_9)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((arr_0 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (18446744073709551615ULL))) > (min((((/* implicit */unsigned long long int) 1703257730)), (15ULL)))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (+(10992638755072553522ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned char) ((int) var_9))))));
}
