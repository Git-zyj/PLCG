/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132866
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
    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_18)), (min((((/* implicit */long long int) var_0)), (var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (1002204612) : (((/* implicit */int) (signed char)126))))) && (((/* implicit */_Bool) (+(var_14))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (100809054U)))))))));
    var_21 = ((/* implicit */long long int) (-((+(max((131071), (131076)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_22 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) -131071)), (((unsigned int) arr_3 [i_0]))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            {
                var_23 = ((/* implicit */int) ((min((((long long int) (signed char)50)), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) >= (var_4)))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 1])) >= (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 1]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_15 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */int) arr_7 [18ULL])) % (((/* implicit */int) (unsigned char)156)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_2]))))))) == ((-(var_19)))));
                    var_24 = ((/* implicit */long long int) arr_12 [i_1] [(signed char)17] [i_3]);
                }
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_4] [i_2 + 2])) ? (((/* implicit */int) arr_12 [i_2 - 2] [i_2 + 2] [i_2 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)9])))))))) / (((unsigned long long int) arr_17 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2]))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_11))));
                    arr_18 [i_2] [(short)7] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -131051)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_2] [(unsigned char)10]))) : (arr_11 [i_1] [i_2] [i_2] [i_1])))))));
                }
            }
        } 
    } 
}
