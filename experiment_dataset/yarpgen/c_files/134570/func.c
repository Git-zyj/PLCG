/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134570
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_10 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_4] [i_4] [i_3 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_5 [i_0]), (arr_1 [i_0]))))))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)193)), (var_8)))) ? (max((((/* implicit */long long int) (_Bool)1)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [8LL] [i_1] [i_1] [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_2 + 1] [i_1 + 3])) : (((/* implicit */int) var_2))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((unsigned char) arr_1 [(_Bool)1])))))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)2])))))))))));
                                arr_14 [0LL] &= ((/* implicit */unsigned char) arr_1 [(signed char)9]);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (short)21856)) * (((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])), (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_13 &= ((unsigned int) (!(((/* implicit */_Bool) max((14U), (((/* implicit */unsigned int) (_Bool)1)))))));
    var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) (unsigned short)15544)) : (((((/* implicit */_Bool) var_9)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6))))))), (((long long int) -1662476713762656170LL))));
}
