/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180218
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
    for (unsigned char i_0 = 4; i_0 < 6; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_10)))))) || (((_Bool) arr_3 [i_0] [i_0 - 3] [i_0]))));
                var_14 = max((((((/* implicit */_Bool) 4611686018360279040ULL)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1475320160U)) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_2 [i_0] [i_1])) + (136)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_2)))) > (((/* implicit */int) var_6)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_4 [i_4]))))) ? (((/* implicit */unsigned long long int) (-(2819647136U)))) : (12645203488486330388ULL)))));
                    var_16 = ((/* implicit */unsigned short) max((min((max((var_11), (var_11))), (((/* implicit */unsigned long long int) max(((unsigned short)55320), (arr_9 [i_2] [i_4])))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) max((var_4), (var_4)))) : (((((/* implicit */int) (unsigned short)4095)) >> (((((/* implicit */int) var_3)) - (130))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) (!((_Bool)1)))), ((((!((_Bool)1))) ? (var_12) : (((unsigned int) var_10))))));
    var_18 = ((/* implicit */short) var_4);
    var_19 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */short) var_3)), ((short)31)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (short)31))));
}
