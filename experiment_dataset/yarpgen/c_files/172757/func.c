/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172757
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) min(((+(((/* implicit */int) var_18)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)16))))));
                    var_21 = ((/* implicit */signed char) var_2);
                    var_22 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_17))));
                    var_23 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((var_10) + (((/* implicit */int) var_7)))) - (((((/* implicit */int) (unsigned short)10)) + (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        for (signed char i_4 = 3; i_4 < 9; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_24 &= ((/* implicit */short) max(((unsigned char)245), (var_3)));
                    var_25 = ((/* implicit */unsigned char) -3531459558181677257LL);
                    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
}
