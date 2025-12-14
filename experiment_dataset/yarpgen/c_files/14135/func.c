/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14135
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
    for (signed char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_10 += ((/* implicit */unsigned char) arr_1 [i_2]);
                            arr_12 [(unsigned char)2] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) (unsigned short)48089);
                            var_11 = ((/* implicit */int) (signed char)28);
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) max((var_12), (max((((/* implicit */unsigned int) max((((-1461292070) + (((/* implicit */int) var_9)))), (((/* implicit */int) max(((unsigned char)45), (arr_10 [i_0] [i_0] [(unsigned char)10] [i_1] [i_1]))))))), ((-(min((((/* implicit */unsigned int) (unsigned short)17446)), (arr_11 [i_1] [i_1] [14U])))))))));
                arr_13 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17447)) ? (4194288) : (((/* implicit */int) var_9))))) ? (((arr_1 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(unsigned short)1])))))))));
            }
        } 
    } 
    var_13 ^= var_9;
    var_14 = var_8;
}
