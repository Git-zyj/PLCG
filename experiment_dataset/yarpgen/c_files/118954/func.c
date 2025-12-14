/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118954
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58433)) % (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)103)))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 2] [i_1]))))) ? (var_3) : (((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])))))));
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)48))))));
            var_17 = ((/* implicit */unsigned short) -5729187891227228472LL);
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                var_18 |= ((/* implicit */signed char) ((min((arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1]), (((/* implicit */int) var_7)))) << ((((-(((/* implicit */int) var_9)))) + (6275)))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))), (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_8 [i_2] [15] [i_2]))))))))));
            }
            for (signed char i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_3 - 1])) ^ (((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_1]))));
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (signed char)-112)))))))) || (((/* implicit */_Bool) var_10))));
                        var_22 |= ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (((((/* implicit */int) (unsigned char)49)) / (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_3] [i_5 - 2] [i_3 - 1] [i_0 + 1]))))));
                        arr_17 [i_0] [11] = var_15;
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_5 - 1] [i_1]))) ? (((((arr_1 [i_4 + 2]) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_3] [(unsigned short)18] [(short)7] [(short)7] [i_4 - 1] [(unsigned short)18])) - (201))))) : ((+(((/* implicit */int) ((unsigned short) var_4)))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_6 = 3; i_6 < 18; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) max((var_15), (((/* implicit */int) (signed char)127))))) : (((2738536188U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))))));
                        arr_20 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_3 + 1] [i_6 - 3])))));
                        arr_21 [i_0] [i_1] [i_1] [i_3 + 1] [(unsigned short)18] [i_1] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > ((~(max((947512362U), (((/* implicit */unsigned int) var_1))))))));
                    }
                }
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)75)), (1590795442)))) && (((/* implicit */_Bool) (+(arr_7 [i_0 + 1] [i_0] [i_0] [i_0])))))))));
            }
            for (signed char i_7 = 1; i_7 < 18; i_7 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_15)), (4294967277U)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) - (((/* implicit */int) arr_2 [i_1]))))))) : (arr_15 [i_0] [i_1] [i_1] [i_1] [i_0]))))));
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned short)32918))))) ? (max(((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) -1036032385)))), (((/* implicit */unsigned long long int) (!(arr_3 [(short)17] [(short)17])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65232)))))));
                var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_7 - 1] [i_7] [i_7]))))) ? (((/* implicit */int) min((arr_13 [i_0] [i_1] [i_7] [i_7 - 1] [i_7] [i_7]), (arr_13 [i_0] [i_0] [i_7] [i_7 - 1] [i_0 + 2] [i_0])))) : (((((/* implicit */_Bool) -1045704369)) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] [i_7])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_7 + 1] [i_7] [i_0 + 2])))));
            }
        }
        var_29 = ((/* implicit */unsigned int) ((_Bool) -1590795436));
    }
    var_30 = ((/* implicit */short) (unsigned short)21703);
    var_31 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(1570369657)))))) ? (((/* implicit */int) min(((signed char)118), ((signed char)-32)))) : (((/* implicit */int) var_14))));
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4346647557207385061ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)96)) > (((/* implicit */int) var_1))))) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((var_1) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))))));
    var_33 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) ((unsigned char) 6942525032652902205LL))));
}
