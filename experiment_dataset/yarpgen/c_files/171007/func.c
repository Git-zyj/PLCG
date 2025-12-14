/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171007
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
    var_13 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) var_5)))) ? (var_8) : (var_8)))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(14136007910315086378ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8)))))) ^ (((unsigned long long int) max((-7611570924287935645LL), (((/* implicit */long long int) var_3))))))))));
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13))))) || (((/* implicit */_Bool) 2126726209781500977ULL)))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_11)), (var_0))))) : (((((/* implicit */int) min(((unsigned char)141), (((/* implicit */unsigned char) var_12))))) << (((var_0) - (13768828025793076273ULL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15260))) : (11308981117400953253ULL)));
                    var_17 = ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_3 [i_0] [i_1]))))) & (((/* implicit */int) arr_3 [(unsigned short)9] [0])));
                    var_18 = (+(((((/* implicit */_Bool) arr_1 [i_0] [9])) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) 7137762956308598355ULL))))));
}
