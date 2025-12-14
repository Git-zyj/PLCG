/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179550
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
    var_17 = ((/* implicit */signed char) max((((((((/* implicit */int) (unsigned short)65313)) | (((/* implicit */int) (unsigned short)355)))) << (((((((((/* implicit */_Bool) 2965622370084440726LL)) ? (((/* implicit */long long int) var_8)) : (var_5))) + (118856869LL))) - (19LL))))), (var_8)));
    var_18 -= ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = var_8;
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56206)) * (((/* implicit */int) arr_0 [i_0] [i_1]))))) | (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 2] [i_1 - 2] [i_0])), (var_1)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 3] [i_0 - 3])) >= (((((/* implicit */_Bool) 782185956)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((var_0) + (201380966)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) != ((+(arr_4 [i_0] [i_1] [i_0] [(unsigned short)7])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_14))));
                arr_13 [i_3] [(unsigned short)3] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_6))))) ? (946490805) : (((/* implicit */int) var_6)))))));
                var_23 &= ((/* implicit */unsigned short) arr_9 [i_3]);
            }
        } 
    } 
}
