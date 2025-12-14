/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18543
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
    var_13 ^= ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 1) /* same iter space */
                    {
                        var_14 = var_12;
                        arr_11 [i_0] [(unsigned short)6] [i_0] [i_0] [i_0 - 2] [i_0 - 3] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))));
                        var_15 = ((/* implicit */_Bool) arr_5 [1LL] [i_0]);
                    }
                    for (long long int i_4 = 2; i_4 < 7; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) var_7))) * (max((((/* implicit */long long int) (_Bool)1)), (var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (max((((/* implicit */unsigned int) (_Bool)1)), (4070893775U))))))));
                        arr_16 [0ULL] [i_0] [0ULL] [(short)6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2 + 1])) ? (arr_1 [i_1 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_2 - 1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((((long long int) (signed char)-5)) & (((/* implicit */long long int) ((unsigned int) var_0)))));
                            arr_21 [(unsigned short)8] [(unsigned char)6] |= var_8;
                        }
                    }
                    for (long long int i_6 = 2; i_6 < 7; i_6 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((_Bool) var_12)))))));
                        arr_25 [i_0] [i_1] [i_2 - 3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))))))) * (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -9094765865476955452LL))))))));
                    }
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_4))));
                    var_18 = ((/* implicit */long long int) var_1);
                    var_19 |= ((/* implicit */signed char) max(((~(((/* implicit */int) (signed char)31)))), (((/* implicit */int) arr_6 [i_2] [i_0]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_10);
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (var_10))))));
}
