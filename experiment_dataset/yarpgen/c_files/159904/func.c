/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159904
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
    var_11 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 -= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((int) 1140139377706239367ULL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(2647093754U))))))), ((-(((/* implicit */int) max((arr_8 [i_0] [i_0] [i_1] [16LL]), (((/* implicit */short) arr_2 [(signed char)6] [11LL])))))))));
                    arr_9 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)52777);
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_8)) ? (1647873541U) : (2647093754U))))), (((/* implicit */unsigned int) ((_Bool) arr_6 [i_0])))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 3) 
    {
        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned int) var_1))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_3] [4] [i_3] [i_3])), (2647093753U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))) : ((-(3302993044491650819ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 1647873541U))) ? (-1080570287) : (((/* implicit */int) min((arr_8 [i_3] [i_3 + 2] [i_3] [i_3]), (((/* implicit */short) arr_3 [i_3] [(short)12]))))))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_10))));
        var_16 = ((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3] [i_3 - 2] [(signed char)13]);
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) (+((-(15403697839122626366ULL)))));
        var_17 = ((/* implicit */short) max((var_17), ((short)1331)));
    }
}
