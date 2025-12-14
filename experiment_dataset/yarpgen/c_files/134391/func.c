/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134391
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) >> (((-140001750053337652LL) + (140001750053337659LL))))) | (-1447476420)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) ((((var_8) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55515))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))));
                var_18 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)12136)), (var_7))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10020)) & (((/* implicit */int) (_Bool)0)))))));
                arr_6 [(unsigned char)17] |= ((/* implicit */unsigned int) ((_Bool) min(((unsigned short)44463), (((/* implicit */unsigned short) (_Bool)1)))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)219)), (36028797018963712LL))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 4; i_2 < 9; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((max((9223372036854775807LL), (var_0))), (((/* implicit */long long int) (unsigned short)2030)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_21 = (signed char)77;
                                var_22 -= ((/* implicit */short) var_10);
                                arr_21 [(signed char)0] = var_2;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)55533))))) != (var_11)))));
}
