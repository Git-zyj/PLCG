/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105085
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
    var_19 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_2]) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) 1910444037U)))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0])), (((((/* implicit */int) var_6)) * ((-(((/* implicit */int) arr_2 [i_1])))))))))));
                }
            } 
        } 
        arr_10 [(unsigned char)0] &= ((/* implicit */int) (unsigned char)133);
        var_21 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [5U]);
        var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) -583830348)) ? (7726399570746857633ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
        var_23 = ((/* implicit */int) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) % (var_14))), (11955793112892184448ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) (short)32767);
        arr_14 [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_7 [i_3] [i_3] [i_3])))));
    }
}
