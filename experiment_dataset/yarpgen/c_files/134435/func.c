/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134435
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
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_9), (9699423012192083628ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) max((max((var_2), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((signed char) var_1)))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_11)))))) ^ ((~(-7421972446824613110LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((signed char) (!(arr_1 [i_1]))));
                var_17 = ((/* implicit */_Bool) (~(((arr_3 [i_0 - 3] [i_1 - 1]) & (arr_3 [i_0 + 1] [i_0 - 3])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)127)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) + (3247690140U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1681)))))));
                            var_19 = ((/* implicit */unsigned char) max((((unsigned long long int) (+(((/* implicit */int) arr_2 [i_3] [1] [i_0]))))), (((/* implicit */unsigned long long int) var_5))));
                            var_20 = ((/* implicit */signed char) ((_Bool) max((((unsigned long long int) arr_6 [9ULL] [i_2] [i_2] [i_3])), (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) (unsigned char)152))))))));
                        }
                    } 
                } 
                arr_9 [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 3])) && (((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1])))))) < (min((max((arr_4 [i_0] [i_0] [(short)4] [i_0]), (((/* implicit */unsigned int) (unsigned char)6)))), (((/* implicit */unsigned int) arr_7 [i_0] [i_0]))))));
                var_21 = ((/* implicit */_Bool) var_14);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (((((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-13)))) % (((/* implicit */int) max(((signed char)3), (((/* implicit */signed char) var_0)))))))));
    var_23 = ((/* implicit */long long int) var_7);
}
