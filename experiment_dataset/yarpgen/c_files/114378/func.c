/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114378
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
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)11291))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        var_21 = (signed char)-58;
        var_22 ^= ((/* implicit */_Bool) 1198521111);
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535)))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-59))))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_24 *= (-(3385150099U));
                        var_25 = ((/* implicit */unsigned short) (~((+(2916637770U)))));
                        var_26 = (~((+(((/* implicit */int) (unsigned short)32530)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                arr_20 [i_6] &= ((/* implicit */int) (unsigned short)1);
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) 
                    {
                        {
                            arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (+((~((-(((/* implicit */int) (unsigned short)47682))))))));
                            var_27 += ((/* implicit */short) (signed char)-58);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)255)))))))));
}
