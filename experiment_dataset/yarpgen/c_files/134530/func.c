/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134530
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_10 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0] [(_Bool)1]);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (16699979311863979186ULL) : (((arr_0 [(signed char)16] [i_0]) ? (1746764761845572458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((_Bool) var_7)))));
                        }
                        var_20 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
                        var_21 ^= ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_5])) : (((/* implicit */int) var_6))));
                    }
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6433287474991018735ULL)) ? (11252736686383350025ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)231))))))));
                    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_16 [i_0] [i_1] [21ULL] [i_2] [i_2])) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((var_2) < (16699979311863979162ULL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) <= (((/* implicit */int) arr_16 [i_2] [i_1] [i_0] [i_0] [i_0])))))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1])))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((var_14) ? (min((((/* implicit */unsigned long long int) (!(var_5)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (15892529274874564654ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) max((((/* implicit */signed char) var_14)), (var_8)))), (max((var_13), ((unsigned char)208))))))))))));
}
