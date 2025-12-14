/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170837
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */int) arr_4 [i_0]);
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_0])))))));
                    arr_10 [i_0] [15LL] [i_1] [i_0] = var_10;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((((573812952082057819LL) + (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))) >= (min((arr_13 [i_0] [5] [i_2] [i_2] [i_4] [(_Bool)1]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [(short)3])))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [13U] [i_0])) : (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) : (arr_5 [i_0] [i_0])))));
                                var_14 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (min((var_0), (511222183381837699LL)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((short) min((((/* implicit */long long int) max((arr_16 [10LL] [10LL]), (((/* implicit */int) (unsigned char)183))))), (min((((/* implicit */long long int) var_9)), (2305843009213661184LL)))))))));
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        var_16 += ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */int) (short)-392)) & (((/* implicit */int) (short)-16174)))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) <= (4743450784448505148LL))))) >= (var_1))))));
                        arr_23 [i_0] [i_6] [i_6 + 2] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((short)6819), (var_7)))) + ((+(((/* implicit */int) var_6))))));
                    }
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((4743450784448505156LL), (((/* implicit */long long int) (unsigned char)72)))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-70))))))))));
                    var_18 = ((/* implicit */int) (!(((4743450784448505158LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-67)))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_27 [(_Bool)1] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (var_2)))) ? (((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-43)) : (1055478082)))));
                    arr_28 [i_0] [i_0] [i_0] [22] = ((/* implicit */long long int) arr_3 [i_7]);
                }
                var_19 ^= min((((((/* implicit */int) (!(((/* implicit */_Bool) (short)20794))))) + (((/* implicit */int) arr_7 [i_0] [20U] [i_1])))), (((/* implicit */int) (short)6819)));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_1]))) | (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((((/* implicit */_Bool) (short)6824)) ? (268435454LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))))) + (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_0);
    var_22 ^= ((/* implicit */short) min((max((((/* implicit */long long int) var_7)), (var_1))), (((/* implicit */long long int) ((var_9) >> (((var_9) - (3710118050U))))))));
    /* LoopNest 3 */
    for (long long int i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) max((((((_Bool) (signed char)-67)) ? (((((/* implicit */_Bool) arr_36 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [19] [i_9] [i_9]))) : (4743450784448505140LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7024337066152300978LL)))))))), (((/* implicit */long long int) ((7368865158183728064LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8]))))))));
                    arr_40 [i_8] = (i_8 % 2 == zero) ? (((/* implicit */long long int) ((int) ((arr_35 [i_8] [i_8 - 1] [i_8 + 1]) >> (((arr_35 [i_8] [i_8 - 2] [i_8 - 1]) - (997428838))))))) : (((/* implicit */long long int) ((int) ((arr_35 [i_8] [i_8 - 1] [i_8 + 1]) >> (((((arr_35 [i_8] [i_8 - 2] [i_8 - 1]) - (997428838))) + (957508050)))))));
                    arr_41 [i_8] = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20779))) : (-4743450784448505158LL))), (((/* implicit */long long int) var_11)))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [18LL])) : (((/* implicit */int) var_5))))), (min((arr_11 [i_8] [i_8] [i_10] [i_10] [5LL]), (((/* implicit */unsigned int) arr_8 [i_8])))))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        arr_44 [i_11] [i_10] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-20779)), (max((arr_0 [i_8] [i_10]), (arr_2 [i_8])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [21] [i_8])) ? (arr_2 [i_8]) : (((/* implicit */int) arr_24 [i_9] [i_8]))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)82)), ((short)32767)))) ? (((0LL) / (((/* implicit */long long int) 67108608)))) : ((~(arr_13 [i_8] [5U] [i_8] [i_10] [i_10] [(short)9])))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((((/* implicit */int) var_5)), ((~(((/* implicit */int) arr_24 [i_8 + 1] [i_10])))))))));
                    }
                }
            } 
        } 
    } 
}
