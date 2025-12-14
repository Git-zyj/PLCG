/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10636
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) + (var_17))))))), (var_17)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25641))))) > (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [0LL] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)2])) : (((/* implicit */int) var_4)))))))) > (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [(unsigned short)18])) ? (((281474976710655LL) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_3] [i_3] [(unsigned char)5] [i_0] [i_0]))))) : (((/* implicit */long long int) (~(29996917))))))));
                                var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [(_Bool)1]))))) ? (((((/* implicit */int) arr_13 [i_0 + 1] [(signed char)4] [i_0 - 1] [i_1] [i_1 + 2] [i_2 + 1])) >> (((((/* implicit */int) arr_13 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_1 - 2] [i_2 + 1])) - (75))))) : ((~(((/* implicit */int) (short)1363))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [(unsigned char)22] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)7133), (((/* implicit */unsigned short) var_16))))) && (((/* implicit */_Bool) min((-281474976710656LL), (-5215917069203045922LL))))))), (min((((/* implicit */long long int) (signed char)27)), (-281474976710653LL)))));
                                arr_20 [i_0] [i_0] [i_2] [i_2] [i_5] [i_6 - 1] [i_2] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                                var_20 = ((/* implicit */signed char) arr_2 [i_6 + 1]);
                                var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (281474976710655LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) & (((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_2])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1922))) : (max((-3974519528684767842LL), (((/* implicit */long long int) (+(arr_15 [i_0] [i_1]))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)105)), (var_0))) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_2 + 1]))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_0] [i_2])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (arr_0 [i_0]))))))));
                }
                arr_21 [20U] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (short)-32741)), (3974519528684767843LL))) << (((((/* implicit */int) ((unsigned short) ((1767160345U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) - (47641)))));
                arr_22 [4LL] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -281474976710656LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                var_23 = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
}
