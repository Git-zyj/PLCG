/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124939
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
    var_19 += ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) == ((((_Bool)1) ? (749749826U) : (((/* implicit */unsigned int) 613364518))))))) * (-264877142))))));
                                var_21 |= ((/* implicit */unsigned long long int) (unsigned short)19113);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_22 -= ((/* implicit */short) 244982955946614711ULL);
                                var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) -19LL)) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [(unsigned char)10] [i_1 + 2] [(unsigned char)8] [i_5] [(unsigned char)8]) == (((/* implicit */unsigned long long int) -3621445831830293667LL)))))) : (644973562446485883ULL))) : (((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_12 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned char)12] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0] [i_5])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) (unsigned char)86);
                }
            } 
        } 
    } 
}
