/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112444
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_11 = ((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) + (((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                            var_12 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) < ((~(var_10)))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((9090187215971925778ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned char)44)))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9090187215971925784ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_0);
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(var_6)))), (((((/* implicit */_Bool) 9090187215971925784ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))));
                var_16 += (+(var_2));
                arr_20 [i_5] = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
}
