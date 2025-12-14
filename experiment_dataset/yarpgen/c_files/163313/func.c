/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163313
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
    var_19 = var_14;
    var_20 = ((/* implicit */unsigned long long int) var_3);
    var_21 ^= ((/* implicit */short) max((var_12), (((/* implicit */unsigned char) ((((3748862470355423992LL) & (((/* implicit */long long int) ((/* implicit */int) var_14))))) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_22 = (unsigned short)32768;
                    arr_8 [i_0] = ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32774)) ^ (((/* implicit */int) ((_Bool) 9889916308063394270ULL)))))) : (arr_5 [i_0]));
                    arr_9 [12ULL] [18LL] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (14624345527962193394ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [(unsigned short)8] [(unsigned short)8])) != (((/* implicit */int) arr_0 [i_1 + 1])))) ? (((/* implicit */int) arr_1 [(short)2])) : (((/* implicit */int) ((_Bool) arr_7 [(unsigned char)2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) max((14624345527962193377ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) var_15);
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((var_13) >= (3822398545747358216ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
