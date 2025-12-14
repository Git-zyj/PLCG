/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105072
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
    var_11 = var_10;
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) 5360730988750048139LL)) / (var_8)))))) != (((long long int) ((((/* implicit */int) (unsigned char)246)) >> (((((/* implicit */int) (short)-15079)) + (15081)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((((/* implicit */long long int) ((arr_0 [i_0]) % (arr_0 [i_0])))) ^ (((-5360730988750048139LL) / (((/* implicit */long long int) arr_0 [i_0])))));
        arr_2 [3U] [(short)0] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [(signed char)5]))))));
        arr_3 [(signed char)9] [i_0] = ((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))) >= (arr_0 [i_0]));
    }
    for (signed char i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_14 = (((!(((/* implicit */_Bool) arr_4 [i_1 - 1])))) || ((_Bool)1));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 - 4] [i_1 - 3]))))) ? ((+(-5360730988750048139LL))) : (max((((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 - 1])), (-512138749933309269LL)))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_3])) ? (-885401895) : (((/* implicit */int) (unsigned short)2)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 9U)))))))))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3099051841030123768LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-9223372036854775798LL)));
            }
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_17 [i_1 + 2] [i_1] [i_4] [i_5] = ((/* implicit */short) max((((((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 1] [i_1 + 2])) - (((/* implicit */int) (short)31263)))), (((/* implicit */int) max((arr_11 [i_4] [i_1 - 1] [i_1 - 1]), (arr_11 [i_4] [i_1 - 4] [i_1 + 2]))))));
                    arr_18 [i_1 - 1] [i_1] [i_2] [i_4] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)-79), ((signed char)-107)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_16 [i_5] [i_5] [i_4] [i_2] [i_1 + 1]))) : ((~(18446744073709551603ULL)))));
                    arr_19 [8] [i_1 - 2] [i_1] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (signed char)127))))) == (((unsigned int) arr_6 [i_1 - 1] [6ULL]))));
                }
                for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    arr_23 [i_1 - 1] [i_2] [i_1] [i_1 - 3] = ((/* implicit */short) ((((unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) ((arr_9 [i_1]) & (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */long long int) 885401884)) : (arr_8 [i_1 - 4] [i_1]))))))));
                    arr_24 [i_1] [i_2] [i_1] [i_6] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) -5LL)))));
                }
                arr_25 [13LL] [i_2] [i_1] [i_4] = ((/* implicit */short) (-(((arr_14 [i_2] [i_1 - 1] [i_1 - 4] [i_1]) * (arr_14 [i_4] [i_1 + 2] [i_1] [i_1 - 1])))));
                var_18 = ((/* implicit */signed char) ((((unsigned int) 197235566U)) << ((((+(arr_22 [i_1 - 4] [i_4]))) - (107287816U)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13687527292117169935ULL)))))));
                    var_20 = ((/* implicit */signed char) (!(arr_11 [(short)9] [i_1 - 4] [i_4])));
                    arr_29 [i_1 - 3] [i_1] [i_1] [i_1 + 2] = ((int) ((signed char) 885401884));
                    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1 - 4] [i_2])) || (((/* implicit */_Bool) (short)-6711)))))) + (((((/* implicit */_Bool) 3455027465U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15062))) : (6622899965156621347LL)))));
                    arr_30 [i_1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_1] [i_1 - 4]))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_34 [i_8] [i_1] [i_4] [i_1] [i_1 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_22 [i_1 - 4] [i_1 + 2]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)194))))) : (arr_22 [i_1 - 3] [(unsigned short)15])));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) & (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) arr_21 [i_1 - 2] [(short)17] [i_4] [i_8] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 3] [i_2] [i_4]))) : (3057048586033789973LL)))))));
                    var_23 = ((/* implicit */unsigned long long int) max((min((arr_13 [i_1] [i_1 + 1]), (arr_13 [14ULL] [i_1 - 1]))), (((/* implicit */signed char) ((arr_20 [i_1] [i_1 - 3] [i_1] [i_1 - 4] [i_1 - 4] [i_1 - 1]) == (arr_20 [i_1 + 1] [3ULL] [i_1] [(_Bool)1] [i_1 - 4] [i_1 - 3]))))));
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_15 [i_8] [i_8] [i_4] [i_4] [i_1 - 3]), (((/* implicit */unsigned short) (short)-18)))))));
                }
            }
            /* vectorizable */
            for (short i_9 = 3; i_9 < 17; i_9 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)220)) ? (974263151) : (1417122038)));
                var_26 = ((/* implicit */long long int) ((unsigned long long int) arr_32 [i_1] [i_1] [i_1]));
            }
            var_27 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)116)), (9223372036854775790LL)));
            arr_37 [i_1 - 1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -7096476179749985332LL))));
        }
        arr_38 [i_1] = ((/* implicit */long long int) ((unsigned short) min(((unsigned char)136), ((unsigned char)5))));
    }
}
