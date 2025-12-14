/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187308
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned short)4] [0ULL] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_6)))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) + (var_1))))))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55615)) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9921)) && (((/* implicit */_Bool) var_3)))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 2417434072U);
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (-(min((((13884513805219975015ULL) << (((((/* implicit */int) (signed char)-8)) + (54))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)25975)))))))));
                arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)18124)) ^ (-1)))))) ? (((/* implicit */unsigned long long int) var_1)) : (var_5)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (unsigned short i_3 = 4; i_3 < 9; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_12 = 1071433825;
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (unsigned short)55615))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_2] = ((/* implicit */unsigned short) 511327946885470506LL);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_5);
}
