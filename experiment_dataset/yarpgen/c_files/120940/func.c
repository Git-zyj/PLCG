/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120940
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_9))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_7))));
                var_16 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [(unsigned char)14])))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) max(((unsigned short)62903), ((unsigned short)2633)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] = ((((((((/* implicit */_Bool) var_8)) || (var_0))) ? (var_1) : (((/* implicit */unsigned long long int) ((int) (unsigned char)23))))) | (((/* implicit */unsigned long long int) ((long long int) var_7))));
                            arr_12 [i_0] = min((((/* implicit */int) var_2)), ((+((-(((/* implicit */int) var_9)))))));
                            var_17 = ((/* implicit */short) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = max((((/* implicit */int) var_9)), ((~(min((((/* implicit */int) (unsigned char)239)), (-280980879))))));
}
