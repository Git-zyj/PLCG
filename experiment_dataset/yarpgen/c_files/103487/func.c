/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103487
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 4; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) var_7)))) ? (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_2 + 1] [i_3 - 3])))) : (((var_9) - (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2] [i_3] [i_2 + 3] [i_3 - 2]))))));
                        var_10 = ((/* implicit */_Bool) min((var_10), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4024873843U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))) : (563029832U))))))));
                        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6U))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_14 [i_4] [i_1] [(_Bool)1] [i_3] [i_1] |= ((/* implicit */signed char) ((0LL) << (((/* implicit */int) (unsigned char)52))));
                            var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (4024873848U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2 - 2] [i_2] [i_2] [i_2 + 3] [i_3 - 1]))))))));
                            arr_15 [i_2] = ((/* implicit */short) (signed char)47);
                            arr_16 [1ULL] [i_1] [i_2] [i_3] [i_2] [i_2 + 4] [i_2] = ((/* implicit */unsigned char) var_3);
                        }
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4598118661337286346LL)) ? (2485044947422925164ULL) : (((/* implicit */unsigned long long int) 2260370393221201251LL))))) ? (3614498293U) : (((/* implicit */unsigned int) ((/* implicit */int) ((11115536494419607841ULL) <= (((/* implicit */unsigned long long int) 1167205369U)))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((max((1040384U), (var_1))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0])))))))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))) > (((((/* implicit */_Bool) 7798475006937904954ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (1289182458U))))) ? (-1052586752316174106LL) : (-8162628576881028673LL)));
        arr_19 [i_0] = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (495173455913292685ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60390))) | (-6723305464436971354LL))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)223))))) : (((((/* implicit */_Bool) -9223372036854775803LL)) ? (16183267367656004383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9394))))));
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */int) (unsigned short)18761)) - (((/* implicit */int) var_0)))))));
        var_13 = ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)223))))) + (arr_2 [3LL] [i_5] [i_5]));
        arr_23 [i_5] [i_5] = ((/* implicit */int) var_5);
        arr_24 [4ULL] |= ((/* implicit */unsigned int) var_0);
    }
    var_14 = var_3;
}
