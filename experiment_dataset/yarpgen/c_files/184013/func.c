/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184013
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)64197)) + (((/* implicit */int) (short)13086)))) + (((/* implicit */int) (short)16384)))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (-2216418473394884050LL)))) || (((/* implicit */_Bool) var_19))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -244500239)) ? (-244500256) : ((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 1049394842U))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 4; i_2 < 13; i_2 += 4) 
                {
                    arr_9 [i_1] [i_1] [(unsigned short)11] [i_1] = ((/* implicit */int) 18446744073709551615ULL);
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) (unsigned short)21640);
                        arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_8 [i_1 - 3]);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_2 - 3] [i_2 - 1] [(signed char)12]), (arr_4 [i_2] [i_2 - 4] [i_2])))) ? (((arr_4 [i_2] [i_2 - 4] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 4] [i_2 - 1] [i_2] [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (-630636048) : (((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (6190031247094263480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((-33784752), (((((/* implicit */int) arr_10 [(signed char)2] [i_1] [i_4] [i_4 + 1])) + (((/* implicit */int) (unsigned char)226))))))), (min((((/* implicit */unsigned long long int) var_2)), (403171339618431846ULL)))));
                        var_26 = ((/* implicit */long long int) min(((+(((/* implicit */int) ((signed char) var_17))))), (((((/* implicit */_Bool) 10924170635190147636ULL)) ? (var_15) : (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_17 [7] [i_1] = ((/* implicit */short) (_Bool)1);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (signed char i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_1 - 3] [i_1] [i_6] [i_1 - 1] [i_1 - 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned short)23927)) > (((/* implicit */int) (short)20008))))))), (((unsigned long long int) ((((/* implicit */int) arr_10 [i_0 + 1] [(unsigned char)2] [i_5] [i_6 + 4])) == (-1505121575))))));
                            var_27 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -2135237385)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-562949953421312LL))), (((/* implicit */long long int) (~(var_2))))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned long long int) max(((+(var_12))), (((/* implicit */int) arr_18 [i_0 - 2] [i_0] [i_0]))))) : ((~(min((((/* implicit */unsigned long long int) 4294967295LL)), (0ULL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_1)))), (var_12)))) ? (((/* implicit */int) var_13)) : (var_15)));
    var_30 = ((/* implicit */unsigned short) max((var_30), (min((((/* implicit */unsigned short) ((unsigned char) (_Bool)1))), ((unsigned short)65523)))));
}
