/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128621
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
    var_16 += ((/* implicit */unsigned short) -9104575134055072662LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (max((max((3670661813563657062LL), (-3670661813563657063LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)226)) > (((/* implicit */int) (unsigned short)22025))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)2))) ? (((/* implicit */int) (unsigned char)2)) : (1148795499))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (unsigned char)226);
                                arr_15 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)2643))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((unsigned char) max((1813563897), (min((((/* implicit */int) (unsigned short)65530)), (1813563897))))));
            }
        } 
    } 
    var_20 = (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) : (16582570562386180107ULL))))));
}
