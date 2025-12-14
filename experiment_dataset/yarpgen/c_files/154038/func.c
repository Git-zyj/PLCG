/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154038
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
    var_19 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                    arr_6 [i_0] = ((/* implicit */long long int) var_0);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) min((((((/* implicit */long long int) (-(arr_1 [i_0])))) + (((long long int) var_8)))), (((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_3)))))))));
                        var_22 -= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                        var_23 -= ((/* implicit */_Bool) (unsigned char)192);
                        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [(_Bool)1] [i_1 + 2]))) : (var_12))), (((/* implicit */unsigned int) (unsigned char)64))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_15))));
                            arr_14 [i_0] [i_0] [i_3 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-21343)) : (((/* implicit */int) (signed char)64))));
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_4 - 1] = ((/* implicit */signed char) (-2147483647 - 1));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3 - 2] [i_0] [i_3] [i_3 - 2] = ((/* implicit */signed char) arr_1 [i_0]);
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_3 - 2] [(signed char)10] [i_1 + 2] [i_3 - 2])) > ((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3 + 1] [i_5 + 2])))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)98);
                            var_27 = ((/* implicit */signed char) arr_17 [i_3 - 1] [i_5] [i_5 - 1] [i_5] [3ULL]);
                        }
                    }
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        var_28 = ((((/* implicit */_Bool) ((((-575363719) + (2147483647))) >> (((arr_1 [i_2]) + (394915951)))))) ? (((((/* implicit */int) arr_21 [i_6 + 1] [i_1 - 1] [i_2] [i_6 - 1])) * (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_21 [i_1] [10U] [i_1] [i_1 - 1])));
                        arr_24 [i_0] [i_0] [i_0] [i_6] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [(_Bool)0])));
                    }
                    for (signed char i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_7 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_23 [i_0] [i_0])))));
                            var_29 = ((arr_1 [i_0]) | (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-21362)))));
                        }
                        var_30 = (((((-(var_11))) <= (arr_27 [i_0] [(unsigned char)6] [i_1 - 2] [i_1 - 3] [i_2] [i_7]))) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21332))))));
                    }
                    var_31 = ((/* implicit */unsigned int) var_3);
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)21362)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_3))))))))));
                }
            } 
        } 
    } 
}
