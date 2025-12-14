/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14617
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) 4294967295U))), (-1277640761)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [15U] [i_1 + 1] [11ULL])) ? (var_2) : (((/* implicit */int) var_16))))) : (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215)))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [i_1 + 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1726092058015425703LL)) || (((/* implicit */_Bool) (unsigned char)254))))) : (((int) 9223372036854775807LL))));
                arr_4 [i_1] [i_1 + 3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2172362039U)), (7110278122431518220ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            {
                arr_10 [i_3] = ((/* implicit */unsigned int) ((573777403020752661LL) | (((/* implicit */long long int) var_15))));
                var_23 = ((/* implicit */unsigned short) max((14238858013832784743ULL), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_17)) : (12844576205845641556ULL)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) % (((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1))))))));
}
