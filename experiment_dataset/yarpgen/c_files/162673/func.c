/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162673
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((6061845366151366517LL) % (((-6061845366151366531LL) % (-6061845366151366503LL)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 255048707U)) : (((2154203262289383963ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22809))) % (5708114601412996802ULL)))))));
    var_18 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [(short)8] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] &= arr_4 [i_2 + 1] [i_2 + 1];
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 8396674601680547055LL)) ? (((/* implicit */unsigned long long int) -271892267)) : (17875662499203682849ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))) ? (max((6061845366151366503LL), (((/* implicit */long long int) var_15)))) : (var_7))))));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7421511034766257005LL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (short)-8040))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6061845366151366502LL)) ? (((/* implicit */unsigned int) arr_0 [(short)0])) : (var_9)))) : (max((arr_7 [(short)0] [i_2] [(signed char)4]), (-8396674601680547055LL))))) & (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                                var_21 = ((/* implicit */short) ((min((((7933472025713098002LL) % (((/* implicit */long long int) var_15)))), (((-6061845366151366517LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))) % (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                                var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_13)) ? (16348316197425860957ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) 6061845366151366503LL)))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) % (((((/* implicit */_Bool) var_15)) ? (arr_11 [i_2] [i_1] [0ULL] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((7933472025713098002LL) << (((/* implicit */int) (_Bool)0))));
}
