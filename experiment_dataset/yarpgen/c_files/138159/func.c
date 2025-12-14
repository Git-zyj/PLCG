/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138159
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)10] [i_1] = var_5;
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) -1))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (arr_2 [i_0] [i_1])))) : (((/* implicit */int) var_2))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)45801)))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_16 = ((/* implicit */short) arr_1 [i_0]);
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_0]);
                    arr_9 [4U] [i_1] = ((/* implicit */short) var_0);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_6 [i_3] [i_1] [i_0])) : (((/* implicit */int) var_9)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) + (var_4)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2])))))));
                            var_19 = ((/* implicit */short) ((signed char) (unsigned char)88));
                            var_20 = ((/* implicit */unsigned char) ((int) (_Bool)0));
                        }
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_16 [i_1] [i_1] [i_2] [5] [i_2] = 14364379597951741908ULL;
                            arr_17 [i_0] [i_1] [11LL] [11LL] [i_0] [i_1] = (signed char)-14;
                        }
                        var_21 = ((/* implicit */int) (unsigned short)57245);
                        arr_18 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_6 [i_3] [i_1] [i_0]))))), (max((var_6), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]))))))));
                        arr_19 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)187)) - (((/* implicit */int) (unsigned char)163))))))) / (max((var_14), (((/* implicit */unsigned long long int) var_12))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_6))) * (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 8556380160LL)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (unsigned char)72)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 2147352576U))))))))));
                        var_22 -= arr_13 [i_0] [i_1] [i_0] [i_0] [(signed char)7];
                        var_23 -= (unsigned char)168;
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_1]) + (15496391167034019334ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (11715202975144079157ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) 23U)) : (var_10)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_2]))) + (var_5))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))))))) : (min((min((var_5), (((/* implicit */long long int) (signed char)-30)))), (((/* implicit */long long int) arr_13 [i_7] [i_2] [i_2] [i_1] [i_0]))))));
                        arr_25 [i_1] [i_1] [4LL] = ((/* implicit */long long int) ((unsigned long long int) var_9));
                        var_25 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_0] [i_7])))) ? (((long long int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_0] [4] [i_0]), (arr_7 [i_0] [i_1] [i_2])))))));
                        var_26 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)6] [i_7] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) var_2))))) ? (-1793057757) : ((+(((/* implicit */int) var_12)))))));
                    }
                }
            }
        } 
    } 
    var_27 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_10)))))));
    var_28 = ((/* implicit */unsigned int) var_12);
}
