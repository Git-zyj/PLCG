/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185446
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
    var_16 -= ((/* implicit */unsigned short) 5997430099126517016LL);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((((((-5997430099126517004LL) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_7))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)480)) > (((/* implicit */int) var_14))))))));
                    var_18 &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4032026579U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (5997430099126517021LL)))), (arr_7 [i_0] [i_1] [i_2]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)212)) * (((/* implicit */int) (unsigned short)16837))))) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (signed char)-36)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_0);
}
