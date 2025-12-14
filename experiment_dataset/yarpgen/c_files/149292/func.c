/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149292
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
    var_16 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) -8782262513648412984LL))) >> (((/* implicit */int) ((_Bool) arr_4 [i_0])))));
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)9982)) ? (((/* implicit */unsigned long long int) 3067985312712293092LL)) : (1807465452519324240ULL))) - (((/* implicit */unsigned long long int) ((((((int) var_8)) + (2147483647))) >> (((/* implicit */int) ((unsigned char) var_10))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)9982)) ? (6523681681687467910LL) : (((/* implicit */long long int) 1817999456U))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)8] [i_3] = (unsigned char)22;
                                var_20 *= ((/* implicit */short) max(((unsigned char)148), (((/* implicit */unsigned char) ((signed char) min((((/* implicit */short) var_4)), (var_1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
