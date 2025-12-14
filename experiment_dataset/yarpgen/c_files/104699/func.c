/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104699
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
    var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (((var_10) + (var_1)))))) : (((/* implicit */int) var_2))))));
    var_13 = ((/* implicit */unsigned char) 14382385528198388071ULL);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (max(((-(var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) var_11)) + (88))) - (30))))) / (((/* implicit */int) min(((unsigned short)12675), ((unsigned short)1032)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0])) ? (((var_10) ^ (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)120)) ? (5835990532227136932ULL) : (13680316174838867305ULL)))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45298)))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_0)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)104)) << (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) - (89)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (_Bool)0))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_16 &= ((/* implicit */unsigned short) ((unsigned int) (~(-1LL))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52865))) : (arr_5 [i_0] [i_0] [i_0])))));
            }
            arr_12 [i_0] = (!(((/* implicit */_Bool) 9239149347856422879ULL)));
            var_18 += ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 14379503329558609868ULL))) << (((arr_0 [i_0] [i_2]) - (4715803154979652757LL)))));
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_5 [i_0] [i_0] [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_4] [i_4]) : (arr_5 [i_0] [i_4] [i_4])));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
                {
                    arr_21 [i_0] |= ((/* implicit */unsigned char) arr_20 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 - 2] [i_6 - 3]);
                    arr_22 [i_6] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_0])) ? (1262787966) : (((/* implicit */int) var_11))))));
                }
                for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (arr_2 [i_5]) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0]))))) || (((/* implicit */_Bool) ((-8455295874463333485LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_5] [i_5] [i_7 - 1] [i_7] [i_5]))));
                        arr_31 [i_0] [i_4] [i_4] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_7 + 3] [i_5] [i_7 + 3] [i_7 + 3] [i_4])) ? (arr_20 [i_8] [i_7 + 3] [i_8] [i_4] [i_8] [i_7]) : (var_3)));
                        arr_32 [i_4] = ((/* implicit */unsigned short) arr_0 [i_4] [i_4]);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_7 [i_8] [i_8]) : (arr_7 [i_0] [i_0])))) <= (((((/* implicit */_Bool) (unsigned short)16256)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) var_9))))));
                    }
                    arr_33 [i_4] [i_4] = var_5;
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (var_10))) / (((/* implicit */unsigned long long int) var_9))));
                        arr_37 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6905030991653748473ULL)) ? (((/* implicit */int) arr_23 [i_0])) : (arr_7 [i_0] [i_4])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) 7975240234434882984ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_0] [i_4] [i_4] [i_5] [i_9] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_7] [i_0]))))))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_9] [i_7 + 2] [i_7] [i_7 + 2] [i_0])) ? (arr_25 [i_9] [i_9] [i_9] [i_7 + 3] [i_7]) : (arr_25 [i_7 + 3] [i_9] [i_7] [i_7 + 3] [i_5])));
                        arr_38 [i_0] [i_0] [i_0] [i_5] [i_4] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_7 + 1] [i_7] [i_9] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_7])) ? (1387016356) : (((/* implicit */int) (unsigned short)60930))))) : (var_10)));
                    }
                }
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2978837338U)) ? (((/* implicit */unsigned long long int) 1692044296)) : (((((/* implicit */_Bool) var_4)) ? (arr_25 [i_0] [i_0] [i_5] [i_0] [i_0]) : (10471503839274668643ULL))))))));
                var_27 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12675))) | (6888316434803642634LL));
            }
            arr_39 [i_4] = ((((/* implicit */_Bool) ((arr_28 [i_4] [i_4] [i_4] [i_4] [i_0]) ? (10471503839274668631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4]))) : ((-(10471503839274668625ULL))));
            arr_40 [i_4] = ((/* implicit */long long int) arr_13 [i_4]);
        }
        var_28 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        var_29 = ((/* implicit */int) max((var_29), (((int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (7975240234434882979ULL) : (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
}
