/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13716
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (17993773380955342229ULL) : (((/* implicit */unsigned long long int) var_2))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (((var_7) ? (10564582225153803348ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) == ((+(133693440U)))));
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) var_13);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 *= arr_1 [i_0 + 1];
                                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) var_4);
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)123)), (14656258466554305699ULL)));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7882161848555748252ULL)) ? (arr_7 [i_0] [i_0] [i_5 + 1] [(unsigned char)14] [i_6 - 2]) : (arr_7 [i_0] [i_0] [i_5 + 1] [i_6] [i_6 - 2])))) ? (((((/* implicit */_Bool) 17519940325411721352ULL)) ? (((/* implicit */unsigned long long int) arr_7 [22U] [i_5] [i_5 + 1] [i_5] [i_6 - 2])) : (17519940325411721352ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) var_5);
}
