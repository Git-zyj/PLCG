/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103079
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)24964))) ? (((/* implicit */int) (unsigned short)38774)) : (((/* implicit */int) min(((unsigned short)60057), ((unsigned short)35469))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65528))) : (((/* implicit */int) ((unsigned short) (unsigned short)24964)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = var_2;
                var_21 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_0 [i_0 - 1])), (((((/* implicit */int) max((arr_2 [i_0 + 2]), ((unsigned short)40572)))) * (((/* implicit */int) min(((unsigned short)43753), ((unsigned short)28611))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    var_22 += arr_1 [i_3];
                    var_23 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)28627))));
                }
            } 
        } 
    } 
}
