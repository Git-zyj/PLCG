/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14178
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (((_Bool)0) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 1669257343U))))) ? (((((/* implicit */_Bool) 3849298581U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1457667247714537887LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), ((~(12ULL)))));
                var_13 = ((/* implicit */short) ((int) (~(((((/* implicit */_Bool) (short)31206)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_14 -= ((/* implicit */int) (signed char)2);
                arr_9 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                arr_10 [i_3] = ((/* implicit */short) (-((~((~(-4206774349508828036LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 7; i_5 += 3) 
        {
            {
                var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (_Bool)1))))))) ? ((~((-(((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                arr_16 [9] [i_4] [i_5] = ((/* implicit */short) (unsigned short)17986);
                arr_17 [i_5 + 2] [i_5] [i_4] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) ((-1457667247714537872LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55968)))))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) -3029846372964340177LL))));
                var_17 &= ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8257536)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1792))) : (3242598710U)))) ? (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)24257)))) : (((/* implicit */int) var_10))))));
}
