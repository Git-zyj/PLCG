/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153883
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (min((((/* implicit */unsigned long long int) (unsigned char)255)), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16806879078868652709ULL)))))));
    var_12 = ((/* implicit */_Bool) (unsigned char)234);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [19U] [(_Bool)1] = ((/* implicit */unsigned long long int) (short)512);
                    arr_11 [i_0] [i_2] = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)21))))))));
                    arr_12 [i_2 - 1] [i_2 - 1] |= ((/* implicit */unsigned int) ((((_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32100))))) : (((/* implicit */int) ((signed char) (unsigned char)0)))));
                }
            } 
        } 
    } 
}
