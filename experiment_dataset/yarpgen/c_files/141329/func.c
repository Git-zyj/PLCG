/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141329
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
    var_11 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8306861300167246918LL))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)203)), (872882608)))) & ((~(304731446886615634LL)))))) ? ((~(((/* implicit */int) (unsigned char)170)))) : ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_14 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (unsigned short)42092)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned short)39834))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 23; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((long long int) ((signed char) arr_5 [i_2])));
                var_16 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) / (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)25226))))) : ((+(var_1)))))));
            }
        } 
    } 
}
