/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16420
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)-75))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */int) (short)15006)) > (2147483647)))))), (((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) var_4)))))));
                    var_20 = (short)-15016;
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */long long int) (-(((/* implicit */int) (short)15006))))) | (var_18));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-15044)) ? (((/* implicit */int) (short)-15006)) : (((/* implicit */int) (short)-15016))));
                var_23 *= ((/* implicit */short) ((max((((unsigned long long int) (unsigned short)7)), (((/* implicit */unsigned long long int) var_10)))) == (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
            }
        } 
    } 
    var_24 = ((var_0) % (var_0));
}
