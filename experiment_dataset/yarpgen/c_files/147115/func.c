/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147115
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) < (((/* implicit */int) (unsigned short)2)))))));
                    arr_11 [i_0] [i_0 + 2] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (16048235917866119911ULL)));
                    var_18 = ((/* implicit */_Bool) max((max((1201524637U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */int) (unsigned short)24120)))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)9)), (min((((/* implicit */unsigned long long int) 199972854)), (18446744073709551613ULL)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [3] [3] [3] [(unsigned short)14] [i_4] [i_2] [i_0]))))) / (((/* implicit */int) arr_6 [i_1] [i_0 + 4] [i_0 + 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-80))))));
                                arr_18 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                var_20 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)51139))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) >= (((/* implicit */int) (unsigned char)222))))))) | (var_5)));
    var_22 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) var_11)), (((((/* implicit */unsigned int) var_15)) * (var_5)))))));
    var_23 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -450068047)), (-3545114266654539271LL)));
}
