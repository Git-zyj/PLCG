/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165233
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
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_0 - 1] [i_1 + 1]), (arr_4 [i_0 + 2] [i_1 + 1])))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2])), (18175770498727577206ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (short)-29859)))) || (((/* implicit */_Bool) var_2))))))));
                arr_6 [i_1 - 1] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1481220379756343105ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 3])))))));
                var_18 = ((/* implicit */short) 18175770498727577206ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            {
                arr_12 [(short)16] |= ((/* implicit */short) (-(524160U)));
                arr_13 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-12126))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)6423))) / (-1035659132832788052LL)))), (arr_4 [i_2] [16LL])))));
                var_19 = ((/* implicit */short) arr_9 [5LL]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (18175770498727577200ULL) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) max(((short)-6427), ((short)-1545)))))))));
    var_21 = ((/* implicit */long long int) (-(5352434020188908512ULL)));
}
