/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118202
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((((/* implicit */short) min((((/* implicit */unsigned char) var_3)), ((unsigned char)2)))), (arr_1 [i_0 + 1]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [7LL]);
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_1 - 2])) >= (((/* implicit */int) arr_0 [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) && (((/* implicit */_Bool) -7321333991660102260LL))))) : (((/* implicit */int) ((arr_10 [i_1 - 1] [i_1 - 2]) >= (arr_10 [i_1 + 1] [i_1 - 1])))))))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_5))));
        }
        arr_11 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(var_10)))), ((~(((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)7]))) : (var_8)))))));
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_19 = ((arr_19 [i_1] [i_3 - 2] [i_4] [i_1] [i_4] [i_5 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4 + 3] [i_1 - 1] [i_1] [i_1] [i_1]))));
                            var_20 |= ((/* implicit */_Bool) (((~(var_11))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 1])))));
                            arr_22 [i_4] [i_5] [i_4] [i_3] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)44347)) ^ (((/* implicit */int) arr_16 [2LL] [4] [(unsigned char)2] [i_4]))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_21 = min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_4])) < (1576944667)))), (((arr_7 [i_3 - 2]) ? (((/* implicit */int) arr_14 [i_5] [i_3 + 1])) : (((/* implicit */int) arr_14 [i_5] [i_3 - 2])))));
                            arr_25 [i_7] [i_1] [i_4] [i_1] [i_1] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (((-2147483647 - 1)) <= (arr_13 [i_7])))) - ((~(((/* implicit */int) arr_6 [i_5] [i_1]))))))), (2251799811588096LL)));
                        }
                        arr_26 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_4)), (arr_24 [i_1] [i_4] [i_4] [i_5] [i_4] [i_1])));
                        arr_27 [20LL] [i_3] [i_4] [i_5] [20ULL] |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((554528075), (((/* implicit */int) var_9)))))))) & (((/* implicit */int) var_6))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((unsigned int) min((arr_12 [i_4]), (((/* implicit */unsigned int) var_4))))))))));
                    }
                } 
            } 
        } 
        arr_28 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) (unsigned short)53884))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 - 2]))))) : (max(((-2147483647 - 1)), (((/* implicit */int) arr_6 [3U] [i_1 - 1]))))));
    }
    var_23 = ((/* implicit */_Bool) var_10);
    var_24 = ((/* implicit */signed char) (unsigned short)1463);
}
