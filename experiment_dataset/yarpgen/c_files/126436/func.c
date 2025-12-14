/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126436
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((7516192768LL) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_1 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29815))))), (((/* implicit */long long int) (~(arr_0 [i_1 - 3] [i_1 + 1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_7 [(short)9] [(short)9] [5U] &= ((/* implicit */signed char) (!(var_6)));
                    var_15 = ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
                }
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_16 = ((/* implicit */int) var_11);
                    var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(max((((/* implicit */int) (signed char)26)), (-1412558774))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                {
                    var_18 *= ((/* implicit */signed char) (+(min((((var_6) ? (2054694570005067812LL) : (2054694570005067825LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
                    arr_19 [i_4] [i_5] |= ((/* implicit */signed char) max((min((-719356627), ((-(1943461378))))), (((/* implicit */int) (unsigned short)65529))));
                    var_19 -= ((/* implicit */unsigned int) max((arr_15 [i_4]), (((((arr_13 [i_4] [i_6]) <= (arr_13 [i_4 - 1] [i_4 - 1]))) ? (max((((/* implicit */unsigned long long int) 7516192774LL)), (arr_13 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) (+(-2054694570005067810LL))))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_13 [i_5] [i_4 + 1]))));
                }
            } 
        } 
    } 
}
