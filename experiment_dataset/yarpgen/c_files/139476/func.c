/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139476
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) var_5)) > (arr_5 [i_2 + 2] [i_2 - 1] [i_2 + 3]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [20] [i_2] [i_1] [i_2])) << (((arr_0 [i_2] [i_2 - 1]) - (9183959148668657047LL)))))) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */long long int) var_10))))) - (((arr_9 [i_2]) ? (var_0) : (((/* implicit */unsigned long long int) var_7))))))));
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_4 [i_2 - 1])))) ? (arr_4 [i_2 + 1]) : (((arr_4 [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)182)) != (((/* implicit */int) (unsigned char)73)))) && (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]))) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)8] [(unsigned char)8] [i_3])))))));
                arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7)))) : (((((/* implicit */_Bool) 4419052330515759815LL)) ? (5847233431918055772ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_3] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [(_Bool)1] [i_3])))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_20 [i_5] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_7 [11] [i_4] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_3] [i_3]))) >= (var_0))))) : (((arr_9 [i_4]) ? (arr_2 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) var_6))))) ? (((var_6) << (((((/* implicit */int) var_4)) - (47))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1])))))));
                    arr_21 [i_3 - 1] [i_3 - 1] [i_5] = ((((/* implicit */long long int) var_5)) <= (var_7));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_9))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
