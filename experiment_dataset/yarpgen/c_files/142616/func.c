/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142616
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
    var_20 = var_17;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 12281112326787517530ULL))))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min(((+(-4104416241756437458LL))), ((~((+(-1468455741684025647LL)))))));
                                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1468455741684025637LL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1468455741684025642LL)) ? (1580425945883435964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)24108)) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16119)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14464027158789684892ULL)))))));
                            var_25 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 9745960247105415397ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
