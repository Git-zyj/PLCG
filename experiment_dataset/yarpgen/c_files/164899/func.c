/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164899
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
    var_14 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_13))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)96)), (var_3))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) var_0);
                    var_16 = ((/* implicit */signed char) (-((-(((/* implicit */int) (short)-8220))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) 437897940067264203LL);
            arr_10 [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_3))));
        }
    }
}
