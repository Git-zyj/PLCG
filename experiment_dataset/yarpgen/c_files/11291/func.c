/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11291
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)165))))) ? ((((!(((/* implicit */_Bool) (unsigned char)92)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)165)))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-112)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [19U] [19U])) || (((/* implicit */_Bool) (unsigned short)24513)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_12 = ((((/* implicit */int) (signed char)-113)) * (((/* implicit */int) arr_8 [i_0 - 3] [i_0 + 2])));
                            var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)85)) >> (((arr_9 [i_0 + 2] [i_3 + 1]) - (2067003416U)))));
                        }
                        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_16 [16LL] [i_3] [i_2] [i_2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)31689))))));
                            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29273)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned char)101)))))));
                        }
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (signed char)-77)))) << (((((((/* implicit */int) (short)-29273)) ^ (var_2))) + (798974550)))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((arr_0 [i_0 - 2] [i_0 - 3]) & (arr_0 [i_0 - 1] [i_0 - 2])))));
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_4 [i_0 - 2] [i_1] [i_2])) : (var_3))))));
                            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_0] [i_1]))));
                            var_20 &= ((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 - 1]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_17 [(unsigned char)0] [i_2] [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3]) : (arr_17 [i_2] [i_2] [i_2] [i_3 - 1] [(signed char)4] [4LL] [i_3])));
                            var_22 |= ((/* implicit */unsigned char) (_Bool)1);
                            var_23 = (~(1501598969U));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_18 [(short)5] [i_2] [i_3 - 1] [i_2] [i_1] [i_1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -765461982)))))) : (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */long long int) 4294967284U)) : (var_5)))));
                        }
                    }
                } 
            } 
        } 
        var_25 &= ((/* implicit */signed char) (((+(arr_0 [i_0 + 1] [i_0]))) >> ((((((-2147483647 - 1)) + (((/* implicit */int) arr_16 [11LL] [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 1] [(unsigned short)17])))) + (2147483531)))));
    }
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_26 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14443))) : (arr_10 [11U])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_8] [i_8] [(short)17] [i_8] [(short)17] [(unsigned short)1]))))) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_25 [i_8] [i_8]))));
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) ((((((158714572871614260LL) - (var_3))) == ((-(var_0))))) ? (arr_0 [i_8] [(unsigned short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) max((max(((unsigned char)28), (((/* implicit */unsigned char) arr_16 [i_8] [3LL] [i_8] [i_8] [i_8] [i_9])))), (((/* implicit */unsigned char) ((signed char) (_Bool)0)))))))));
            var_28 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_1 [i_8])) ^ (((/* implicit */int) (_Bool)1)))));
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((_Bool) max((arr_17 [i_8] [(_Bool)1] [i_9] [i_9] [i_9] [i_8] [i_8]), ((~(((/* implicit */int) (signed char)-54))))))))));
        }
        var_30 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30813)) ? (((/* implicit */int) arr_21 [(signed char)9] [i_8] [(signed char)9] [i_8] [i_8] [i_8])) : (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [(signed char)3] [(_Bool)1])))))) && (((/* implicit */_Bool) max(((~(4236013264905251817LL))), (((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_25 [i_8] [i_8])), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) -660816798)) ? (((/* implicit */unsigned int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [11U])) : (arr_0 [i_8] [(_Bool)1]))))))) ? (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [13LL] [(signed char)9] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) : (max((((/* implicit */long long int) (_Bool)1)), (8721516481930967910LL))))) : (min((((/* implicit */long long int) arr_2 [i_8])), ((((_Bool)1) ? (((/* implicit */long long int) 1544787448)) : (6798326816648044329LL)))))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (arr_27 [(short)11] [i_10])));
        var_33 = ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))));
    }
}
