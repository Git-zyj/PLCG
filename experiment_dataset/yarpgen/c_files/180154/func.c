/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180154
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
    var_10 = ((/* implicit */long long int) ((max((var_8), ((~(var_8))))) | (1580237600)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) min((1257498092), (-1257498093))))));
                var_12 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1257498108)), (382471167451625426LL)))) : (((((/* implicit */_Bool) 15741997742241031582ULL)) ? (arr_2 [12ULL] [i_1] [i_1]) : (arr_2 [i_0] [i_0] [i_0]))))) ^ (var_6)));
                var_13 = ((/* implicit */int) arr_2 [i_1] [i_1] [(signed char)18]);
                var_14 = ((/* implicit */unsigned short) (+(2704746331468520050ULL)));
                /* LoopSeq 3 */
                for (short i_2 = 4; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    var_15 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_2] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))), ((-(var_8)))));
                                var_16 = ((/* implicit */unsigned long long int) -2117662732);
                            }
                        } 
                    } 
                }
                for (short i_5 = 4; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_8)))) ? (max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) 76156530)) ? (1767398387) : (var_0))))) : (((/* implicit */int) max((arr_15 [i_0] [i_1] [i_1] [i_0]), (arr_15 [i_0] [i_1] [i_5] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_18 = arr_14 [3] [3];
                                var_19 = (~((-(((5556905739083148743LL) % (((/* implicit */long long int) 10489063)))))));
                                arr_22 [i_0] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned char) var_4);
                                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (var_3) : (min((1257498081), (var_8))))), (var_1)));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_8])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2147483647)), (arr_2 [i_9] [i_8] [i_1]))))));
                        arr_30 [i_0] = ((/* implicit */int) 1499671513297472499ULL);
                        arr_31 [i_0] [i_0] [i_8] [i_8] [i_9] [i_9] = ((-1606315132) + (1767398402));
                        arr_32 [i_0] [i_1] [(signed char)14] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1] [i_1] [i_0])) ? (min(((+(((/* implicit */int) arr_28 [i_0] [i_1] [i_8] [i_9])))), ((-(var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (((arr_26 [i_9] [i_8] [i_1] [20]) ^ (((/* implicit */unsigned long long int) 5556905739083148765LL)))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        arr_35 [i_0] [8ULL] [i_8] [11LL] [i_10] [i_10] = ((/* implicit */signed char) -76156512);
                        arr_36 [i_10] [7] [i_10] = ((/* implicit */long long int) var_9);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (var_0)))) || (((/* implicit */_Bool) 5556905739083148743LL))));
                            arr_39 [(unsigned char)5] [i_10] [i_8] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1821985836)) ? (((/* implicit */int) arr_15 [i_11] [i_10] [i_1] [i_0])) : (((/* implicit */int) (short)0))));
                            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_37 [i_10] [i_0]))));
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) 1821985829))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_25 = ((/* implicit */int) min((var_25), ((+(((((/* implicit */_Bool) arr_25 [5] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)-24)) : (var_0)))))));
                            arr_42 [i_0] [i_10] [i_10] [i_1] [i_8] [11] [i_12] = ((/* implicit */signed char) (short)0);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)4003)) : (((((/* implicit */_Bool) arr_7 [i_8] [i_10])) ? (985033786) : (0)))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_29 [i_0] [i_8] [(unsigned char)11] [i_12])))) ? (((/* implicit */int) arr_28 [i_0] [7LL] [i_0] [i_12])) : (var_3)));
                        }
                        for (long long int i_13 = 3; i_13 < 19; i_13 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((unsigned char) (short)18617))), (arr_13 [i_0] [i_0] [i_0] [i_0])));
                            var_29 = ((/* implicit */long long int) min((((1257498096) ^ (-1947243652))), (min((-763546632), (-1257498096)))));
                            var_30 = ((/* implicit */unsigned char) -914857989);
                            var_31 = ((/* implicit */long long int) -1257498097);
                            arr_47 [i_8] [i_1] [i_10] [i_1] [i_13 + 1] [i_13] = max((((-331296946) % (((/* implicit */int) (signed char)120)))), (var_3));
                        }
                    }
                    var_32 = (~(((int) arr_18 [i_0] [i_0] [i_0] [i_8] [i_0])));
                    var_33 = min((21ULL), (26ULL));
                    var_34 -= ((/* implicit */int) (!(((arr_34 [i_8] [i_0]) != (arr_34 [i_1] [i_0])))));
                }
            }
        } 
    } 
    var_35 = ((var_4) >> (((((int) -763546618)) + (763546625))));
    var_36 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) * (((/* implicit */int) ((short) ((var_6) >> (((var_1) + (1532722659)))))))));
}
