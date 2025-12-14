/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130838
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
    var_16 = var_14;
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((signed char) (signed char)-34)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)33722)))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) % (min((var_8), (((/* implicit */long long int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) 9223372036854775807LL);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) (signed char)-63))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) & (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_14) : (arr_0 [(unsigned char)2] [i_1])))))));
                arr_8 [6LL] |= ((/* implicit */signed char) 18446744073709551600ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_18 = ((signed char) (+((-(((/* implicit */int) (unsigned short)64875))))));
                var_19 = ((/* implicit */unsigned short) arr_15 [i_3]);
            }
        } 
    } 
}
