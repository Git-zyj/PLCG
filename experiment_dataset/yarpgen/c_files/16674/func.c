/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16674
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))), (9315482028774974988ULL)));
        arr_4 [i_0] &= ((/* implicit */short) ((_Bool) (signed char)-38));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_13 *= ((/* implicit */_Bool) max(((signed char)-38), (((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0]))))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_12 [i_0] [10] [i_1] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((max((9315482028774975005ULL), (((/* implicit */unsigned long long int) -722880819)))) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [(_Bool)0])), (3645340162U)))))) : ((+(var_7)))));
                arr_13 [i_1] [i_2] [(short)5] [i_1] = ((/* implicit */_Bool) arr_1 [i_0]);
                var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_1]))))), ((+(18446744073709551608ULL)))));
                var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1]))));
            }
            var_16 = (+(((/* implicit */int) var_11)));
            var_17 -= ((/* implicit */_Bool) var_10);
        }
        arr_14 [i_0] [i_0] = ((/* implicit */int) var_10);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = (~((~(((/* implicit */int) arr_16 [i_3] [i_3])))));
        var_19 = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_15 [i_3])))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_15 [i_3]))) * ((-(((/* implicit */int) arr_16 [i_3] [(_Bool)0]))))));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9680)) ? (1169050471U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))))));
    }
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (var_0)));
}
