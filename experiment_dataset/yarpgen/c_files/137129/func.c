/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137129
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)75)) - (((/* implicit */int) (unsigned char)0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_10), (var_7)))) ? ((+(((/* implicit */int) (signed char)-101)))) : (((/* implicit */int) (unsigned short)53103)))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_2)))))))));
                        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-55)), (arr_6 [i_1] [i_2 - 2] [i_3 + 4])))) + (((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_3 - 1]))));
                    }
                    arr_12 [i_0] [i_0] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 2] [i_2])) ? (((/* implicit */int) min((arr_6 [5] [i_2 + 1] [i_2]), (arr_6 [i_2] [i_2 + 1] [i_0])))) : (((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (min((var_5), (((((/* implicit */int) var_8)) + (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)181)))))))))));
}
