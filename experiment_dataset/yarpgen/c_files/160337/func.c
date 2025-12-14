/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160337
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62395)) || ((_Bool)1))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28142)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37395))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (unsigned short)28137)), (2431930831471502538ULL))), ((-(16014813242238049086ULL)))));
                    var_17 = (~((~(arr_5 [i_1] [i_1] [i_1 + 1] [i_1 - 2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)-25471)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3])))))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)195)))))) & ((~(2431930831471502528ULL))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-125)))))));
        var_19 = ((/* implicit */signed char) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_1))))) >> (((min((((/* implicit */int) (short)-6261)), (16128))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)65530)) < (((/* implicit */int) (unsigned char)59)))))))));
    }
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */signed char) var_14)), (var_8))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)222))))) / (max((var_13), (((/* implicit */unsigned long long int) var_14))))))));
}
