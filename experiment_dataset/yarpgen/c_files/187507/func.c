/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187507
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
    var_18 = min((((min((var_3), (var_10))) % (((/* implicit */long long int) (~(var_6)))))), (((/* implicit */long long int) ((int) (~(((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) (!(((var_3) == (((/* implicit */long long int) ((/* implicit */int) min((var_17), (((/* implicit */unsigned short) var_15))))))))));
                arr_5 [i_0] [(unsigned char)15] [i_0] = ((/* implicit */int) (-(min((var_10), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((_Bool) min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) var_2)))));
                var_20 = ((/* implicit */unsigned int) ((_Bool) ((short) (!(((/* implicit */_Bool) var_0))))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_6)))))) == ((-(((int) var_12)))))))));
                arr_12 [(unsigned short)1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) & ((~(((/* implicit */int) var_5))))))), (((unsigned int) ((((/* implicit */_Bool) 716213202)) && (((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
}
