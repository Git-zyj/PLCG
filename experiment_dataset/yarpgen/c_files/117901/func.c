/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117901
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
    var_19 = ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_0))))))));
                var_21 = ((/* implicit */short) ((min((min((-1643570657), (arr_1 [i_0] [i_1]))), (((/* implicit */int) arr_2 [i_1] [i_1])))) - (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (min((((/* implicit */int) (unsigned char)105)), (var_18)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            {
                var_22 ^= ((/* implicit */unsigned int) ((9548468557870337193ULL) / (17113175423118205119ULL)));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_2] [i_3])), (1333568650591346494ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(var_17)))))))));
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) max((17113175423118205100ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_3)), ((short)0)))) / (((((/* implicit */_Bool) (short)-31907)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6)))))))));
                arr_13 [3] [i_3] |= ((/* implicit */unsigned int) arr_2 [i_3 - 1] [i_3 + 2]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_7))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))))))))));
                var_25 = ((/* implicit */unsigned int) 17113175423118205121ULL);
                var_26 -= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)52443)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))) : (14769523385266107500ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_16), ((unsigned short)25485)))))));
            }
        } 
    } 
    var_27 += max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))), (15472220166149605774ULL))));
}
