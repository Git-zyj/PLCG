/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106285
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
    var_10 = ((/* implicit */unsigned long long int) ((signed char) max((var_0), (((/* implicit */int) min(((signed char)118), (((/* implicit */signed char) (_Bool)1))))))));
    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32758)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)101))))));
    var_12 ^= ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */int) var_9)), (max((var_4), (((/* implicit */int) var_3)))))));
    var_13 ^= (+(((/* implicit */int) (_Bool)1)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)32748)), ((unsigned short)14470)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((signed char) var_6)))));
                    arr_8 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), (arr_3 [i_2] [i_1 + 1])))), (var_4)));
                }
            } 
        } 
    } 
}
