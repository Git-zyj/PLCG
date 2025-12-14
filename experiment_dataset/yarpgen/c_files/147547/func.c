/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147547
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_10 [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)113)) >= (arr_4 [i_1] [i_2])));
                    arr_11 [i_0] [i_1] [i_0] = max((((((/* implicit */int) (unsigned short)56233)) & (((/* implicit */int) arr_9 [i_2] [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)32)))));
                    var_12 = (-(min((var_8), (((/* implicit */unsigned int) (unsigned char)14)))));
                    arr_12 [i_0] [i_0] &= ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */int) ((unsigned short) (unsigned char)47)))))), (((((/* implicit */int) (unsigned short)9303)) ^ (((/* implicit */int) max(((unsigned short)56233), (((/* implicit */unsigned short) (unsigned char)223)))))))));
                    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) > (max((max((var_8), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_3))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((_Bool) max((max((((/* implicit */int) (unsigned char)227)), (var_9))), (((/* implicit */int) var_7)))));
    var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 672455546U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((6754458534149042026LL), (((/* implicit */long long int) (short)12624)))))) & (((/* implicit */long long int) (+(var_0)))));
}
