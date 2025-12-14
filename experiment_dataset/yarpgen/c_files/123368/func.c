/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123368
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] = min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-127)) <= (((/* implicit */int) max(((unsigned char)101), (((/* implicit */unsigned char) (signed char)-122)))))))), ((signed char)127));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (unsigned char)171);
                            var_16 = ((/* implicit */long long int) (_Bool)1);
                            /* LoopSeq 2 */
                            for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
                            {
                                arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((8935141660703064064ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))), (var_5))))) / ((+(min((var_9), (((/* implicit */unsigned long long int) var_7))))))));
                                arr_15 [i_0] [(signed char)5] [i_2] [(signed char)6] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) 576460752303422976LL)) : (var_9))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) - (max((((unsigned int) (signed char)127)), (((/* implicit */unsigned int) (signed char)-127))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(15171159436772661281ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-124)), (arr_5 [i_4] [i_1] [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_14))))))))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                            {
                                arr_20 [(signed char)4] [4U] [i_2] [(signed char)8] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) ^ (min((8064ULL), (((/* implicit */unsigned long long int) (signed char)28))))));
                                var_19 = ((/* implicit */short) ((signed char) var_0));
                                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))), (max((0U), (((/* implicit */unsigned int) (unsigned char)171))))));
                                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-122)), ((unsigned char)85))))))) : (((/* implicit */int) (!(var_7))))));
                                arr_22 [i_0] [i_1] [i_2] [10U] [i_3] [i_5] = ((/* implicit */unsigned char) ((_Bool) ((_Bool) (unsigned char)255)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(4294967295U)))), (max(((~(var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))));
}
