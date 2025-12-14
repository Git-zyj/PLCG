/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15091
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_7);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [11U] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))) <= (arr_5 [i_1])))))) < (arr_6 [i_0]));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (unsigned short)0))));
                }
            } 
        } 
        var_18 &= ((/* implicit */_Bool) var_13);
        arr_10 [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0))))))));
    }
    var_19 &= ((/* implicit */signed char) ((unsigned short) max(((+(var_10))), (max((((/* implicit */int) (unsigned short)29)), (var_0))))));
    var_20 = ((/* implicit */unsigned char) ((var_16) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
}
