/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109573
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
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_8 [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) && (((/* implicit */_Bool) 18446744073709551600ULL)))))))));
                var_15 = (((_Bool)1) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7719))));
                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) min((arr_7 [i_0 + 1] [i_1]), (var_4)))) : (((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 18446744073709551598ULL))))))));
                            var_18 = ((/* implicit */int) max((var_18), ((+(((/* implicit */int) (_Bool)1))))));
                            arr_16 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */_Bool) -3492773622929299678LL)) && ((_Bool)1))))))) ? (min((((16ULL) >> (((/* implicit */int) var_9)))), (((/* implicit */unsigned long long int) var_6)))) : (2ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((((/* implicit */int) var_4)) >> (((18446744073709551605ULL) - (18446744073709551604ULL))))), (((/* implicit */int) var_14)))))));
}
