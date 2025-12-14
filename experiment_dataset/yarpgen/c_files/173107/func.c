/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173107
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 2791425603U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38541))) : (1503541715U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((((-(1503541705U))) - (2507867546U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 4; i_2 < 18; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) var_2);
                    var_17 = min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0));
                }
                for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) var_8);
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_10))));
                                var_20 *= ((/* implicit */long long int) (short)-1);
                                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (short)25460))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */signed char) ((short) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_1))))) <= (((/* implicit */int) ((2507867546U) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((long long int) var_13)))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */short) max(((unsigned short)1), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -328320453)) ? (((/* implicit */int) (short)-18893)) : (((/* implicit */int) (signed char)-57))));
    var_26 = ((/* implicit */int) max((var_26), ((+((((!(((/* implicit */_Bool) (short)18892)))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)-1)))) : ((+(((/* implicit */int) (short)63))))))))));
}
