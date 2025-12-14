/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132486
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_15 |= ((((/* implicit */_Bool) 9051831948410621257ULL)) ? (((/* implicit */int) (unsigned short)51272)) : (686387317));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)63), (((/* implicit */unsigned char) arr_5 [(signed char)7]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (9394912125298930358ULL))))))) >> (max((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))), ((((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))))));
                            arr_14 [i_3] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9394912125298930344ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)127))));
                            var_16 = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_0]))));
                        }
                    } 
                } 
                var_17 |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))));
                var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) 0))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */int) (((+(((/* implicit */int) (unsigned char)17)))) != (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) > (var_8)))) : (var_8))))))));
}
