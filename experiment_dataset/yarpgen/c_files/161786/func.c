/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161786
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
    var_20 ^= ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)17575)))) | ((-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-98)) && (((/* implicit */_Bool) 3283521468U)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((max((max((2064375477U), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10913)) ? (((/* implicit */int) (unsigned short)28866)) : (((/* implicit */int) (short)-29157))))))) / (((/* implicit */unsigned int) (+((-(65408))))))));
                    var_21 = ((/* implicit */short) (-((-(arr_8 [i_0] [i_1] [i_2])))));
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (unsigned char)238)))));
                    var_23 = ((/* implicit */unsigned char) (+((+((-(1325759205U)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_13 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))))), (((2101092888U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69)))))));
                        var_24 = ((/* implicit */unsigned short) (-((-(4503462188417024ULL)))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        arr_17 [i_1] [(signed char)8] = ((/* implicit */unsigned int) (-((-(796227223860932452LL)))));
                        arr_18 [i_0] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) 5867309166704380489LL);
                    }
                }
            } 
        } 
    } 
}
