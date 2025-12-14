/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177696
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
    var_17 = ((/* implicit */unsigned char) (~(var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) / (var_3))) * ((+(((/* implicit */int) var_4))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_9)) & (((4167267221130445218ULL) - (14279476852579106406ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((((/* implicit */int) var_14)) & (((/* implicit */int) var_8)))))))));
                                var_20 = ((((((/* implicit */unsigned long long int) var_5)) * (var_6))) << (((var_5) - (6928862033445220431LL))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_5)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_5))) : (((/* implicit */long long int) var_12))))) ? (((((var_9) << (((((((/* implicit */int) var_16)) + (60))) - (26))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (2U))) - (3U))))) : (((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned short) ((var_9) / (var_10)));
                            var_22 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)30847)) % (((/* implicit */int) (unsigned short)63210)))) | (var_12)))) != (var_6)));
                        }
                    } 
                } 
            }
        } 
    } 
}
