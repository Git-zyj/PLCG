/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189183
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
    var_11 = 127479347985868423ULL;
    var_12 = ((/* implicit */unsigned short) var_0);
    var_13 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = 18446744073709551597ULL;
                var_15 = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */int) var_1))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) - (13581884333167072223ULL)))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16ULL)) || (((/* implicit */_Bool) 18446744073709551597ULL)))))) > (18446744073709551597ULL))))));
                var_18 &= var_1;
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)43))))) - (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            }
        } 
    } 
}
