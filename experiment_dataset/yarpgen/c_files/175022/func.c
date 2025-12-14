/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175022
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
    var_18 |= ((/* implicit */_Bool) ((unsigned int) (!((((_Bool)1) && (((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) * (var_13))) / (((/* implicit */unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_0)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_1] [i_2 + 1] [i_3 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) -1484838561)) : (13709693206143772374ULL))) : (max((13709693206143772374ULL), (var_8))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            arr_14 [i_0 - 1] [i_1] [i_2] [i_2] [i_4] = (+(((/* implicit */int) ((unsigned char) 1484838560))));
                            arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_8);
                            var_19 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (arr_6 [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2])))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_2 - 1] [i_3 + 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_2] [i_5])) - (440352383U)));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(var_10)))))) || (((/* implicit */_Bool) max(((-(var_13))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_13))))))));
                            var_21 = min((((/* implicit */unsigned long long int) (-(var_11)))), (((arr_17 [i_2 - 1] [i_3 + 1] [i_0 - 3] [i_3 + 1]) - (arr_17 [i_2 - 1] [i_3 - 1] [i_0 - 2] [i_3]))));
                            arr_19 [i_2] [i_2] [i_5] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) (+(var_14)));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
        {
            var_22 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))))), (((((((/* implicit */_Bool) 1149742693)) ? (((/* implicit */unsigned long long int) arr_22 [i_7])) : (arr_24 [i_6 + 2] [i_7]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
            var_23 = var_14;
        }
        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
        {
            arr_27 [i_6] [i_8] [i_8] = ((((/* implicit */_Bool) (+(arr_22 [i_6 - 2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) * (2097151U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((8440840681916467325ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_6] [i_8])))))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) var_0)), (2141625422)))))));
            var_24 -= ((((/* implicit */_Bool) ((((/* implicit */long long int) 696689173U)) % (((((/* implicit */_Bool) (unsigned char)119)) ? (-2192520382426048925LL) : (((/* implicit */long long int) 2141625422))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1149742693)) ? (min((((/* implicit */unsigned long long int) var_13)), (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))))));
        }
        var_25 = ((/* implicit */long long int) ((min((arr_20 [i_6 + 1] [i_6]), (-1774810225))) != (((int) arr_20 [i_6 + 1] [i_6]))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_24 [i_6] [i_6 - 1]) * (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6] [i_6 - 2] [i_6 + 1])) ? (arr_21 [i_6] [i_6 - 2]) : (arr_21 [i_6] [i_6 - 2]))))));
    }
}
