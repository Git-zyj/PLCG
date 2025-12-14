/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179452
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4064U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)2048)) ? (4064U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1024)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_12))));
                var_14 -= max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 3163680039914222411ULL)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (_Bool)1)))));
                var_15 = ((/* implicit */short) var_5);
            }
        } 
    } 
    var_16 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18446744073701163008ULL))))))), (((unsigned long long int) min((((/* implicit */unsigned short) var_5)), (var_3))))));
    var_17 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) 31)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), ((!((_Bool)0)))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32766)) && (((/* implicit */_Bool) 4069U))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (_Bool)1))));
                var_20 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)12206)), (1204554211U)));
                var_21 ^= var_4;
            }
        } 
    } 
}
