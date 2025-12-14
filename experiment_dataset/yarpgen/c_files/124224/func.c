/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124224
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (~((~(((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_5)))))))))));
                    var_11 = ((/* implicit */unsigned char) 8236117336059842173LL);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_3))))))) + (min((max((var_7), (((/* implicit */unsigned long long int) (unsigned short)21724)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))))));
    var_13 = ((max((((var_2) ^ (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (8388352) : (((/* implicit */int) (unsigned char)194))))))) + (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((/* implicit */int) (unsigned char)7))))));
}
