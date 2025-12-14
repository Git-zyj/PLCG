/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125605
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
    var_15 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) (-(min((min((((/* implicit */int) (unsigned short)15044)), (var_8))), (((var_10) ? (((/* implicit */int) var_11)) : (var_8)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */short) (((_Bool)0) ? (536870911LL) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (-536870912LL)))));
                                var_18 ^= ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) (((_Bool)0) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (min((((/* implicit */long long int) (unsigned char)137)), (536870911LL)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (2121901143)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)118))))) ? (max((723721737), (((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) (unsigned char)146))));
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)40697))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)15044)))))))));
                    var_21 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)134)) : (131071)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                arr_30 [(unsigned char)20] [i_7] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (unsigned short)15044);
                                arr_31 [i_5] [i_5] [i_7] [(signed char)3] [i_7] [i_9] [i_9] = ((((/* implicit */_Bool) (unsigned short)59132)) ? (((unsigned int) (-(((/* implicit */int) (signed char)40))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 6980446324650114959LL)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6480874113386252335ULL)) && (((/* implicit */_Bool) 536870911LL))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (_Bool)1))))));
    var_24 *= ((/* implicit */_Bool) min((((/* implicit */int) var_11)), ((-(((((/* implicit */_Bool) 187839955)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9))))))));
}
