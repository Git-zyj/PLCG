/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153474
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
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-105)) && (((/* implicit */_Bool) var_0)))))) / (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_17)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) (+((-(min((((/* implicit */unsigned long long int) 2204600761U)), (var_17)))))));
        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) (~(19ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_22 += 136339441844224LL;
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                for (short i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (short)19581))));
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19980))) - (var_4)))) ? (((/* implicit */int) ((signed char) 4294967279U))) : (((/* implicit */int) var_13))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((((unsigned long long int) var_17)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (6745338519152656550ULL))))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_16)) : (var_3)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)67))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) / (var_4)))));
    }
    var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_18)))), (((/* implicit */int) (unsigned char)231))))), (min((((19ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))))), (((/* implicit */unsigned long long int) var_19))))));
}
