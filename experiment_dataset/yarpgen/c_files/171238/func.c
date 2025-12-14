/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171238
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
    var_10 = ((/* implicit */long long int) (short)27507);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [i_0])))) * (((arr_3 [i_0] [1U] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4593358767533891076LL))))) == (min((min((((/* implicit */long long int) arr_1 [i_0])), (arr_4 [i_0]))), (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 - 3] [i_1 - 1]))))));
                var_12 = ((/* implicit */short) ((((/* implicit */int) (short)7466)) == (((/* implicit */int) (short)9729))));
                var_13 = ((/* implicit */unsigned short) (unsigned char)45);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((arr_5 [i_2]) | (((/* implicit */int) arr_6 [i_2])))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((arr_5 [i_2]) > (((/* implicit */int) var_8))))) : ((-(((/* implicit */int) arr_6 [i_2]))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)568))) <= (6ULL)));
        arr_7 [i_2] = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2])) : (var_0))))), (((((/* implicit */_Bool) -8173775563435676633LL)) ? (((/* implicit */int) (unsigned short)62669)) : (((/* implicit */int) (unsigned short)568))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) > (0LL))))) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) ((short) max(((signed char)-83), ((signed char)-5)))))));
        var_17 += ((unsigned short) ((((/* implicit */int) arr_6 [(unsigned char)8])) < (((/* implicit */int) arr_6 [(unsigned char)2]))));
    }
    var_18 = ((/* implicit */unsigned short) (signed char)-103);
}
