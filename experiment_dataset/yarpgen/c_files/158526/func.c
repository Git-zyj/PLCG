/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158526
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */unsigned short) max(((-(((((/* implicit */int) (short)63)) ^ (((/* implicit */int) arr_3 [i_0])))))), (((((/* implicit */int) ((signed char) (short)-18066))) | (((/* implicit */int) (unsigned char)255))))));
                arr_5 [i_0] [(signed char)7] [i_1] = ((/* implicit */unsigned char) 6313350565452530845ULL);
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((unsigned short) 2147483638)))) ? (((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)66)))) - ((~(-1))))) : (((((/* implicit */int) (short)18095)) * (((/* implicit */int) (unsigned char)206))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_8);
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) 8050476590060218611ULL)) ? (min((((/* implicit */unsigned long long int) (short)-18096)), (8679210430556660063ULL))) : (((/* implicit */unsigned long long int) ((2269529802U) >> (((((/* implicit */int) (short)32754)) - (32748)))))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18042)))))));
}
