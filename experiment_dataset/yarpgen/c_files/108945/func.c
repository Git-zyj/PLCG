/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108945
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
    var_11 = var_6;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0]))))));
            var_13 ^= ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) max((arr_4 [i_1 - 1] [0U]), (var_9))))));
        }
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
            arr_11 [i_0] = ((/* implicit */short) arr_4 [i_0] [i_0]);
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 3) 
            {
                for (unsigned char i_5 = 3; i_5 < 14; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) ((((long long int) -1567607885)) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [(unsigned short)4] [i_5 - 1] [i_4] [i_0]) >= (((/* implicit */long long int) var_5))))))))))))));
                            arr_24 [i_6] [i_0] [i_4 - 1] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_3] [i_0] [i_5] [i_6]))) : (862583775U))))) ? (((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_23 [i_0] [i_0] [i_4 + 1] [i_5] [i_6 + 3] [i_6 + 1])) - (11995))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (862583769U) : (862583775U)))) || (var_4))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_3] [i_0] [i_5] [i_6]))) : (862583775U))))) ? (((((/* implicit */int) var_8)) << (((((((/* implicit */int) arr_23 [i_0] [i_0] [i_4 + 1] [i_5] [i_6 + 3] [i_6 + 1])) - (11995))) - (26599))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (862583769U) : (862583775U)))) || (var_4)))))));
                        }
                        arr_25 [i_4] [i_0] [i_4] [i_0] [i_0] [i_3] = ((/* implicit */short) min((((/* implicit */long long int) ((min((((/* implicit */int) var_9)), (var_6))) * (((/* implicit */int) ((unsigned short) var_2)))))), (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (arr_15 [i_3] [i_4 - 2] [i_5 - 2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (var_3)))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                var_15 += ((/* implicit */unsigned char) var_6);
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) 8733977197777021707ULL);
                            var_17 ^= ((/* implicit */unsigned int) min((((var_7) << (((((var_5) + (1957574369))) - (19))))), (arr_1 [(signed char)6])));
                        }
                    } 
                } 
            }
        }
        arr_32 [i_0] = ((/* implicit */short) var_9);
    }
    var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_3), (((/* implicit */short) var_1))))) ? (((((/* implicit */_Bool) var_10)) ? (862583775U) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-102))))))));
}
