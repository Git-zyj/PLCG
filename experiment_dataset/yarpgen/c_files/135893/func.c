/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135893
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((~(((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */long long int) var_11)) : (-2115058508149335206LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4095))))) < (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_1 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0]))));
                var_13 = ((/* implicit */_Bool) var_3);
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */unsigned long long int) -2115058508149335204LL)) <= (min((18446744073709551604ULL), (((/* implicit */unsigned long long int) -2115058508149335205LL)))))) ? (((/* implicit */int) (short)-22088)) : (((/* implicit */int) (short)-8263)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_5))));
                var_17 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 2] [i_3 - 2])))), (((((/* implicit */_Bool) 7522140135552410087LL)) ? (min((((/* implicit */int) var_6)), (var_1))) : (((/* implicit */int) min((arr_6 [i_2]), (arr_2 [i_3 + 1]))))))));
            }
        } 
    } 
}
