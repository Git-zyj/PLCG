/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159376
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) (unsigned char)164);
                    var_11 += ((/* implicit */unsigned char) var_5);
                    var_12 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_1 [i_0 + 4])))) < ((~(((/* implicit */int) (unsigned short)51559))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_5 [i_0 + 3])))) + (2147483647))) >> (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 317900316U)) ? (((/* implicit */unsigned int) var_2)) : (var_8)))) / (var_1))))))));
        arr_6 [i_0] = (unsigned short)16320;
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_7))))) : (var_1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_7))))) / (14308939049882151120ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16374)))));
}
