/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167233
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
    var_10 = ((/* implicit */long long int) (short)-6462);
    var_11 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)175)) ? (0) : (((/* implicit */int) (short)0))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [(_Bool)1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned char)8);
                        var_12 = ((/* implicit */unsigned short) -1);
                    }
                    arr_12 [i_0] [i_1] [i_2 - 2] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_0 - 3])), (arr_6 [i_0] [i_1] [i_2]))))));
                    var_13 -= ((/* implicit */unsigned char) max((2373368300366311365ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8355840ULL)) ? (((/* implicit */int) (short)-1)) : (494851259)))) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) arr_5 [i_1] [i_1] [(_Bool)1])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
}
