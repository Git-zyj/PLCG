/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143233
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = (((((((-(((/* implicit */int) (unsigned short)27297)))) % (((((/* implicit */_Bool) 8268113631087468925LL)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 2])) : (((/* implicit */int) (signed char)-126)))))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 2])))) + (65))) - (26))));
                arr_6 [i_1] [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4264550595734190185LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50225))) : (-8268113631087468925LL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-109), ((signed char)14))))) == ((~(arr_2 [i_2] [i_2] [i_2])))));
        var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)18]))))));
        arr_9 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)-2)), (4294959104U)));
    }
}
