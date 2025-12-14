/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149819
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((min((((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))), (((((/* implicit */int) (unsigned char)178)) - (((/* implicit */int) var_5)))))), ((+(((/* implicit */int) ((signed char) -6320440596661013601LL))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned char) max(((-(((((/* implicit */int) var_19)) << (((((/* implicit */int) (signed char)116)) - (116))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)74))))) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) var_5))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((144112989052600320ULL) > (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)45))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)161))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_15))))))))));
                                arr_14 [i_0] [i_1 + 1] [i_3] [i_3] [i_4] = var_1;
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((~(((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)114)))))))))));
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) (unsigned short)0)))));
            }
        } 
    } 
    var_24 *= ((/* implicit */unsigned long long int) (_Bool)0);
    var_25 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (_Bool)1))))) > (((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_0)))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)166))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (unsigned char)158)) + (((/* implicit */int) (_Bool)1))))))));
}
