/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174257
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((_Bool) arr_1 [(short)10])))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0])))))))) != (((/* implicit */int) ((((/* implicit */_Bool) 2046707418791587990LL)) || (((/* implicit */_Bool) 1672289568U)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_5 [2U] [2ULL] [i_0])))));
                            var_20 = ((/* implicit */unsigned char) (+(arr_11 [(_Bool)1] [(_Bool)1] [i_1] [i_3])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        for (unsigned int i_5 = 3; i_5 < 15; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_4])) * (((/* implicit */int) arr_15 [i_4]))))) * ((+(arr_14 [i_4]))))));
                var_22 = ((/* implicit */int) (-(((long long int) arr_19 [i_4]))));
                var_23 = ((/* implicit */signed char) arr_14 [i_4]);
            }
        } 
    } 
}
