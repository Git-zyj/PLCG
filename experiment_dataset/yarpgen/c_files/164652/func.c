/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164652
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
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) ((-1) != (((/* implicit */int) (short)-2677)))))))) > (var_7)));
    var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_0)) / (((((/* implicit */int) (signed char)-105)) * (((/* implicit */int) (signed char)101)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)53)) != (((/* implicit */int) (signed char)-101))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 = (-(max((((/* implicit */int) (signed char)-101)), (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) arr_3 [i_3] [i_1])) : (((/* implicit */int) (signed char)91)))))));
                            var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 0ULL)))) ? (16947381866909622707ULL) : (0ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((-2008631475910037720LL) >= (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) & (63LL)))) ? (-70LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                arr_17 [i_4] [i_5 - 1] [(signed char)12] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 9ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-74LL) : (((/* implicit */long long int) (-2147483647 - 1)))))));
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */long long int) (+(max((((/* implicit */int) (unsigned short)63)), (-383411057)))));
            }
        } 
    } 
}
