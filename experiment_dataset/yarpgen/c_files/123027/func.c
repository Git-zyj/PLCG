/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123027
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((((var_1) <= (((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) arr_2 [(short)13] [(short)13])))))) ? (((int) ((signed char) arr_3 [i_0]))) : (((/* implicit */int) ((var_8) == (((/* implicit */int) arr_3 [i_0]))))));
                arr_7 [i_0] [i_0] [(signed char)16] &= ((/* implicit */int) arr_4 [i_1 - 2]);
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */short) (!(((((/* implicit */int) (unsigned short)7692)) == (((/* implicit */int) (unsigned short)7692))))));
                            var_12 &= ((/* implicit */short) max(((unsigned char)147), ((unsigned char)39)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 |= var_7;
    var_14 = ((/* implicit */short) ((_Bool) (((~(((/* implicit */int) var_0)))) > (((var_8) / (((/* implicit */int) (unsigned short)57844)))))));
}
