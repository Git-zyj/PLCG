/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121040
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)0), (var_3)))) ? ((-(((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 2])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_0 [i_1 + 2] [i_1 + 3]))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])) - (((/* implicit */int) max(((unsigned short)10), ((unsigned short)24))))))) ? ((~(((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 3])))) : (((arr_2 [i_1 + 1] [i_1 - 2]) ? ((-(var_7))) : (((/* implicit */int) ((signed char) -1LL)))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_2), (((/* implicit */short) var_10))))) % (((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1 + 2]))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((signed char) var_8));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_14 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) / (((/* implicit */int) var_10))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_2]), (arr_5 [i_3])))) ? (((/* implicit */int) min((var_2), (((/* implicit */short) arr_2 [i_2] [i_2]))))) : (((((/* implicit */int) var_10)) % ((-(((/* implicit */int) var_2))))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) max((arr_5 [i_3]), (arr_5 [i_2]))))));
                var_17 = ((/* implicit */short) ((long long int) (!(arr_7 [i_3] [i_3] [i_3]))));
                arr_9 [i_3] [i_2] = ((/* implicit */signed char) max(((-(((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_2])))))), (((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_3)))) + (2147483647))) << (((((/* implicit */int) ((signed char) (_Bool)1))) - (1)))))));
            }
        } 
    } 
}
