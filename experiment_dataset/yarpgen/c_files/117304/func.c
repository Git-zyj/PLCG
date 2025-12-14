/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117304
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
    var_11 = ((/* implicit */int) (_Bool)1);
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (unsigned short)36772))));
    var_13 = ((/* implicit */int) var_10);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) max((5704531750347052339LL), (((/* implicit */long long int) (short)10095))))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 2] [i_0] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_2 [i_0 - 1] [i_0 - 2])))) != (((((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_4)) : ((-2147483647 - 1))))) / (max((arr_3 [i_1] [i_0]), (((/* implicit */long long int) arr_0 [i_0 + 2] [i_1 - 1]))))))));
                var_15 = ((/* implicit */_Bool) 2147483647);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_1 - 2] [i_0 + 1]));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62714))) : (arr_3 [i_0 + 2] [i_2 + 3])));
                    arr_8 [i_0] [i_2] = ((long long int) arr_1 [i_2 + 2]);
                    var_18 = ((/* implicit */unsigned long long int) (!(var_2)));
                }
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
                {
                    var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (short)48)))));
                    var_20 = ((/* implicit */unsigned short) (unsigned char)0);
                }
                var_21 = ((/* implicit */_Bool) (-(var_8)));
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min((max((arr_2 [i_1 - 1] [i_0 - 2]), (((/* implicit */unsigned int) arr_10 [i_0 + 2] [i_1])))), (var_0)));
            }
        } 
    } 
}
