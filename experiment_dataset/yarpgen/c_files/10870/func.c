/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10870
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
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) max(((signed char)-53), (((/* implicit */signed char) (_Bool)1)))))))));
                var_20 ^= ((/* implicit */signed char) (~(((-2015469204) | (((/* implicit */int) arr_1 [i_1 - 2] [i_0 - 2]))))));
                var_21 = min(((~(((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) (short)-2253)));
            }
        } 
    } 
    var_22 -= ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)52)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_23 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_5 [i_2]), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)44592)) == (-1893596559)))))))));
                var_24 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 470605808))));
                var_25 = ((/* implicit */unsigned char) min((((16416497823637858895ULL) & (((/* implicit */unsigned long long int) 1893596558)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2]))))), (arr_9 [i_3] [i_2]))))));
            }
        } 
    } 
}
