/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178321
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
    var_13 = ((/* implicit */long long int) 2137664559U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                var_15 = ((/* implicit */long long int) (-(((((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) var_5)))) + (((/* implicit */int) var_5))))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((var_9) - (2777984089822116371ULL)))))), (((var_8) >> (((arr_5 [i_0] [i_0 + 3] [i_1 + 1]) - (8389230136099099695ULL))))))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) var_5);
                    var_18 = (+(((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_4 [i_0 + 4] [i_1 + 1]))));
                    var_19 = var_11;
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) arr_0 [7ULL]);
                }
                for (int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    var_20 = (signed char)-1;
                    arr_12 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_0 + 4] [i_1 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33852))) : (arr_7 [i_0 + 4] [2LL] [i_3 - 1])))));
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) (short)-16)), (9223372036854775807LL)))))) + (min((((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_0 - 1])), (var_6)))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(18066495020630162906ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13050600790407411252ULL)) || (((/* implicit */_Bool) var_12))))))))) ? (((276072352203068454ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)1), (var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((~(((/* implicit */int) (signed char)-22)))))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)47))))) || (((/* implicit */_Bool) ((((_Bool) arr_13 [i_0] [i_1 + 1] [i_4] [i_5])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) / (var_12))) : (((/* implicit */unsigned long long int) max((4294967295U), (arr_8 [i_5] [i_0 - 1] [i_5] [i_0 - 1])))))))));
                        arr_19 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 4] [i_0 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)5))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+((+(arr_4 [i_0] [i_0 + 4]))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) (((-(((/* implicit */int) var_4)))) - (((/* implicit */int) var_5))));
                            var_25 -= ((/* implicit */unsigned int) (~((~(var_2)))));
                            arr_27 [i_0] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 3249454359U)) : (arr_4 [i_1] [i_6]))));
                            arr_28 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)31)) : (arr_6 [i_0] [i_0] [i_4]))) * (((/* implicit */int) arr_17 [i_6] [i_6] [i_4] [i_0]))));
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)31))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_32 [i_8] [i_8] = ((/* implicit */long long int) var_3);
                            arr_33 [i_0] [i_8] [i_4] = ((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) (signed char)-81)) + (105)))))) ? (((/* implicit */unsigned long long int) ((3792256113641206781LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) : (var_9));
                            var_27 ^= ((/* implicit */long long int) (~((~(1045512955U)))));
                            var_28 = ((/* implicit */unsigned long long int) (signed char)-98);
                            arr_34 [i_4] [i_4] [i_4] [(unsigned short)13] [i_4] [i_8] = arr_1 [i_8];
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_11)), ((~(arr_23 [i_0] [i_0] [i_4] [i_0] [i_9]))))) & (((/* implicit */long long int) (~(1045512955U))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6408252082408650551LL)) ? (((/* implicit */unsigned long long int) var_2)) : (var_9)))) ? ((+(((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) ((signed char) var_9)))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)241)), (var_9))) : (((((/* implicit */unsigned long long int) (-(-558437265)))) | (2147418112ULL)))));
                        }
                        arr_38 [(_Bool)1] [(_Bool)1] [i_4] [i_6] = ((/* implicit */signed char) arr_31 [i_6] [i_4] [i_6] [i_0] [i_0]);
                        arr_39 [i_0] [i_1] [i_4] [i_0] [15LL] = ((/* implicit */signed char) max((max((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (var_5)))), (((((/* implicit */_Bool) (signed char)-48)) ? (-3792256113641206794LL) : (((/* implicit */long long int) 1760255578U)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (1045512958U)))), (arr_31 [i_0 - 1] [10U] [i_4] [6ULL] [10U]))))));
                    }
                }
            }
        } 
    } 
}
