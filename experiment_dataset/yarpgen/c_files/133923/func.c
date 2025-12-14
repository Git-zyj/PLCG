/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133923
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
    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(var_17)))) : (min((-9223372036854775795LL), (((/* implicit */long long int) var_1))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_7))))))));
        var_19 = ((/* implicit */unsigned long long int) (~((~(2147483647)))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-30078)) < (((/* implicit */int) (short)7034)))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_4 + 3] [i_4] [(unsigned char)16] [i_4]))));
                            var_22 = ((/* implicit */short) arr_13 [i_4] [i_4]);
                            var_23 = ((/* implicit */unsigned long long int) ((arr_14 [i_4] [(unsigned char)7] [i_4 + 2] [i_4] [(_Bool)1] [i_4 + 1] [i_4 - 2]) ? (((/* implicit */int) arr_10 [i_4] [(signed char)17] [i_4 + 3] [(signed char)17])) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_16 [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4 + 3] [i_4] [i_4 - 1] [i_4])) <= (((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4] [i_4 - 2]))));
                    }
                } 
            } 
            var_24 += ((/* implicit */unsigned char) (((((_Bool)1) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) var_12)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1913697418))))));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) arr_12 [i_2] [i_2])) ^ (((/* implicit */int) arr_12 [i_1] [i_2])))))));
        }
        var_26 = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_13 [i_1] [20])), (2047U))) | (((((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)59729)))) ? (((unsigned int) arr_8 [i_1] [i_1])) : (((/* implicit */unsigned int) (-(465414045))))))));
        arr_17 [i_1] = ((/* implicit */short) 746661735);
        var_27 = ((/* implicit */short) min((min((arr_15 [(unsigned short)13] [i_1] [i_1]), (((/* implicit */unsigned int) arr_9 [i_1] [i_1])))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
    }
    var_28 = ((/* implicit */signed char) -465414052);
}
