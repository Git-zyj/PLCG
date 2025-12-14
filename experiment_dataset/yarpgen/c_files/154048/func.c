/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154048
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((524287) >> (((var_11) + (1286581635))))) % (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 = ((int) 1045926712);
                            arr_11 [i_0] [i_0] [i_3] [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_2 - 2] [0])) != (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_1 + 2]))));
                            arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_3] [i_0])), (((var_2) | (((((/* implicit */int) var_9)) & (((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                var_16 += ((/* implicit */signed char) ((903570285) % (((int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_0] [i_0] [i_1])))))));
                var_17 = ((/* implicit */signed char) ((((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1] [i_0] [i_0])) + (80))))) < (((/* implicit */int) (signed char)71))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_4] [i_0] [5] = ((/* implicit */signed char) ((int) var_8));
                            /* LoopSeq 4 */
                            for (signed char i_6 = 3; i_6 < 21; i_6 += 4) 
                            {
                                var_18 = ((/* implicit */int) arr_7 [i_0 + 1] [i_5] [i_6]);
                                var_19 = ((/* implicit */signed char) arr_6 [i_6 + 1] [12]);
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_5] = -903570286;
                                var_20 = ((/* implicit */signed char) max(((+(arr_6 [i_0 + 1] [i_1 + 3]))), ((~(((/* implicit */int) arr_22 [0]))))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                            {
                                arr_26 [i_0] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */int) (signed char)125)) == (((var_8) / (var_4)))));
                                var_21 = ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-87)) >= (((/* implicit */int) (signed char)-1)))));
                            }
                            for (signed char i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (signed char)63))));
                                var_23 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) ((arr_21 [i_0] [i_1] [14] [i_0] [i_0 + 2]) != (((/* implicit */int) (signed char)-21)))))));
                                arr_29 [i_0] [i_4] [i_8] = ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_8]);
                                var_24 = var_11;
                            }
                            for (signed char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                            {
                                arr_32 [i_0] [i_1] [i_0] [i_5] [i_4] = (i_4 % 2 == zero) ? (((int) ((arr_15 [i_4] [i_4]) << (((((arr_10 [i_4] [i_0 - 1] [i_4] [i_0 - 1] [i_5 - 1]) + (949908958))) - (2)))))) : (((int) ((arr_15 [i_4] [i_4]) << (((((((((arr_10 [i_4] [i_0 - 1] [i_4] [i_0 - 1] [i_5 - 1]) + (949908958))) - (2))) + (789000748))) - (24))))));
                                var_25 = ((((/* implicit */int) ((268435452) > (((/* implicit */int) (signed char)-74))))) - (((/* implicit */int) arr_30 [i_4])));
                                arr_33 [i_0] [i_0] [i_4] [4] [i_0] = ((/* implicit */signed char) min((((int) arr_1 [i_5 - 2])), (((arr_1 [i_4]) - (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                            }
                        }
                    } 
                } 
                arr_34 [i_1] [i_0] |= ((/* implicit */signed char) (((-((-(var_7))))) / (var_2)));
            }
        } 
    } 
    var_26 = ((((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-60)))))) & ((~(((/* implicit */int) var_3)))));
}
