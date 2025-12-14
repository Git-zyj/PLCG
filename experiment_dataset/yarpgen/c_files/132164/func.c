/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132164
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34912)))))) & (min((9014136338496781312LL), (((/* implicit */long long int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1])))))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (short)17633))))) ? (((min((((/* implicit */long long int) var_5)), (6635127749322073671LL))) + (min((var_6), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2])))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : ((-(var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)63391)))))) : ((~(max((-8152917909126966359LL), (((/* implicit */long long int) var_2))))))));
}
