/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124441
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_7))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16362)) ? (7969316053777416111LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) == (max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (var_10)))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)6357)) % (((/* implicit */int) (unsigned short)6357)))))));
            }
        } 
    } 
    var_15 -= var_6;
}
