/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183324
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((signed char) var_0)))))))));
                    arr_6 [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (((/* implicit */int) (unsigned short)63251))))));
                }
            } 
        } 
        var_13 = ((/* implicit */short) 11046111638114174797ULL);
    }
    var_14 = ((/* implicit */_Bool) (+(var_1)));
    var_15 = (((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 16383U)) : (18026288348575950407ULL))))) - (var_6));
}
