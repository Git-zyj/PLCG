/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155522
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
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) (unsigned char)57)) == (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0 + 1] [i_0 + 1] |= ((/* implicit */unsigned int) (unsigned char)198);
        var_20 = ((((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)9))))), (var_11)))) - (((long long int) arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) arr_6 [i_4] [i_3]);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_1] [i_5] = ((/* implicit */unsigned short) (unsigned char)255);
                            arr_18 [i_1] [(_Bool)1] [(signed char)14] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (var_3) : (var_17))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_1] [(_Bool)1] [i_3] [i_4] [i_4] &= ((/* implicit */unsigned char) ((signed char) ((arr_19 [i_2] [i_3] [i_4]) ? (arr_21 [i_6] [i_2] [i_3]) : (((/* implicit */int) (_Bool)0)))));
                            var_22 = var_18;
                        }
                        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_1] [i_1] [(unsigned char)17] [i_3] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_2]))))) : (((/* implicit */unsigned long long int) arr_25 [i_1] [i_2] [i_2] [i_3] [i_1] [i_4] [i_7 - 1]))));
                        }
                    }
                } 
            } 
            arr_28 [i_1] [i_2] = ((/* implicit */signed char) -1LL);
        }
        var_23 += arr_1 [i_1];
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (((~(32505856U))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15181)))))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) 3482862987U);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) var_12)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((1554108382) == (((/* implicit */int) (unsigned short)8858)))))))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), ((~(var_8)))))));
    var_27 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((_Bool) var_12))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (var_17)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)8)) - (((/* implicit */int) (unsigned short)4096))))) ? (((/* implicit */int) ((unsigned short) var_3))) : ((~(((/* implicit */int) var_2))))))));
}
