/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12301
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_11 -= ((/* implicit */long long int) var_1);
                                var_12 = ((/* implicit */unsigned short) min((((6627630565670331988ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11819113508039219628ULL)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) (unsigned short)5933)) ? (((((/* implicit */_Bool) 1269848540U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_1] [i_1])))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1]))))));
                                var_13 = ((/* implicit */signed char) max((-8961988737881839089LL), (((/* implicit */long long int) (signed char)-13))));
                                var_14 -= ((/* implicit */unsigned int) ((int) 11819113508039219628ULL));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((6627630565670331987ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (unsigned char)253))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((int) 2746027853577440189ULL)))));
    var_18 = ((/* implicit */unsigned long long int) var_9);
}
