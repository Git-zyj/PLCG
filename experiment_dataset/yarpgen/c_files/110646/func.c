/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110646
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1])))) ? (max((var_5), (((/* implicit */long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (arr_0 [i_0]))))))) ? ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (var_15))))) : (((/* implicit */unsigned long long int) var_2))));
                arr_6 [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) (+((((_Bool)1) ? (((/* implicit */long long int) 913409436U)) : (660893430998720428LL)))));
                var_19 = ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_0 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 362666145))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) max((((/* implicit */signed char) var_9)), (arr_2 [i_0] [i_1])))) + (((((/* implicit */int) arr_2 [i_3] [i_1])) + (((/* implicit */int) arr_10 [i_2] [i_2] [i_1] [i_0 + 1]))))))));
                            var_21 += ((/* implicit */signed char) arr_8 [i_0]);
                            var_22 = ((/* implicit */unsigned short) min((((unsigned int) var_3)), (((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1)))))))));
                            var_23 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)14)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_8)))) : (((254U) << (((((/* implicit */int) (unsigned char)138)) - (133))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (264U) : (var_13)))) ? (7U) : (((/* implicit */unsigned int) var_8))))));
    var_26 = ((/* implicit */long long int) var_15);
}
