/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187554
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) <= (((((/* implicit */int) var_2)) * (((/* implicit */int) var_15))))))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34705))) == (var_4)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)34)) > (((/* implicit */int) (unsigned short)55627))))), (5371166285094841867ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)55644)) <= (((/* implicit */int) var_11))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((max((((17073992991824302236ULL) | (((/* implicit */unsigned long long int) 6510359857165866180LL)))), (((((/* implicit */_Bool) (short)3146)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) | (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2]))))), (((/* implicit */unsigned int) arr_6 [(unsigned short)9] [i_1] [i_1 - 2])))))));
                            var_24 ^= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_4 [i_1] [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)30830)))))))));
                            arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_2] [i_3 - 1] = ((/* implicit */_Bool) 4294967295U);
                        }
                    } 
                } 
                var_25 = min((((/* implicit */long long int) (unsigned short)30830)), (arr_7 [i_1 - 2] [(unsigned short)2]));
            }
        } 
    } 
}
