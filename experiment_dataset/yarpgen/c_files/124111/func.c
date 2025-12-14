/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124111
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
    var_20 = ((/* implicit */_Bool) var_16);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) var_10)))))) : (((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))))));
    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((((/* implicit */_Bool) (short)-32766)) ? (3775545129U) : (((/* implicit */unsigned int) 1476042017)))) >> (((((((/* implicit */unsigned long long int) -3085342743189520003LL)) ^ (var_0))) - (7266846629993693946ULL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1 + 3] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) min((var_14), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)64340)) ? (-3508591497578588859LL) : (-5511117654844248649LL)))))));
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)49784))));
                    arr_11 [i_0] [i_1] [i_0] [10LL] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)32767))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) (-((-(var_16)))));
}
