/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125699
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((min((arr_7 [4] [i_2] [i_1] [i_0]), (((/* implicit */int) (unsigned char)239)))), ((+(arr_7 [(signed char)5] [(signed char)5] [i_0] [i_0])))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)239)) >> (((arr_9 [i_0] [10LL]) - (1416699733))))), (((/* implicit */int) (signed char)-2))))) | (((((/* implicit */_Bool) (unsigned char)254)) ? (2588460926U) : (((/* implicit */unsigned int) -529865848))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)99)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1634944486)))));
                            arr_17 [i_0] [9LL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_5]) << (((((/* implicit */int) (unsigned char)86)) - (86)))))), ((-(17541604772532994145ULL)))));
                            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [10]))));
                        }
                    } 
                } 
                var_22 |= ((/* implicit */unsigned int) (signed char)44);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (1256695226)));
}
