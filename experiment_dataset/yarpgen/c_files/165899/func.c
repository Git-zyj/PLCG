/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165899
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
    var_20 = ((/* implicit */unsigned short) (signed char)88);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) (((+(var_17))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27428)))))) + (((long long int) ((((/* implicit */int) (unsigned short)27423)) - (((/* implicit */int) arr_1 [(unsigned char)2] [i_1]))))))))));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0 - 2] [i_1])) >> (((((/* implicit */int) arr_1 [i_0 + 1] [i_1])) - (98))))) << (((((((/* implicit */int) (unsigned short)38128)) | (((/* implicit */int) arr_1 [i_0 + 1] [i_1])))) - (38116)))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_19);
}
