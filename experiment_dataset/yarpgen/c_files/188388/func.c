/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188388
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
    var_10 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (2491328656U)));
    var_11 = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) 1803638639U)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (3141102469798517457ULL))), (((/* implicit */unsigned long long int) ((short) var_6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2893218541U)) ? (-2106003208) : (((/* implicit */int) (short)1792))))) : (((((((/* implicit */_Bool) (short)-4238)) ? (((/* implicit */unsigned int) 2106003207)) : (1803638666U))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (67108864U))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [(unsigned char)6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2491328656U)) ? (((/* implicit */unsigned long long int) 2147483647)) : (3399167023354926265ULL)));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
            {
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_5 [i_0] [i_1 - 1] [i_2 - 2])), (((short) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) >> (((((/* implicit */int) arr_0 [i_1 - 1])) - (125)))));
                    var_14 = ((/* implicit */unsigned char) ((2147483647) < (((/* implicit */int) arr_1 [i_3] [i_1 - 1]))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2 + 2] [i_3])) ? (((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_12 [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1]))))) : (var_6)));
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((3934091862U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3]))))))));
                }
                for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    arr_17 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) 3437692224U))))), (((((/* implicit */int) arr_5 [i_0] [i_1] [i_4 + 1])) << (((max((var_9), (2097151U))) - (2850898979U)))))));
                    var_17 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (short)-11134))) ^ (950988641U))) & (min((var_5), (var_8)))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (961637718U)));
                    var_19 = ((/* implicit */unsigned char) ((3343978642U) | (arr_21 [i_5] [i_2 - 2] [i_1 - 1])));
                }
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_19 [i_2])))) ? ((+(1443564028))) : (arr_19 [i_2])));
                var_21 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)24693))));
            }
            for (unsigned int i_6 = 3; i_6 < 10; i_6 += 4) /* same iter space */
            {
                arr_25 [i_0] [i_0] [i_0] [i_0] &= min((((unsigned int) min((3343978637U), (((/* implicit */unsigned int) 391665177))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_6 - 1] [i_1 - 1] [i_6 - 1]))))));
                arr_26 [i_6] [i_0] [i_0] = ((/* implicit */short) arr_21 [i_0] [i_1] [i_0]);
                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / ((+(((/* implicit */int) (short)15524))))));
            }
        }
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_7] [i_0]))) / (18446744073709551606ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            arr_36 [i_0] [i_7] [i_8] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (arr_35 [i_8] [i_8] [i_8] [i_9] [i_10] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned short) (_Bool)1)))))));
                            var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -970177412)) | (var_2)))))) ? (((((/* implicit */_Bool) min((var_4), (12513386594832670644ULL)))) ? (((/* implicit */unsigned long long int) min((var_1), (var_5)))) : (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6] [i_8])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) (short)-10439)))));
            var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) 3321403776U)) ? (7U) : (2144278795U))) | (((/* implicit */unsigned int) (~(1853817861))))));
        }
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (unsigned char)255)))))) <= (((((/* implicit */_Bool) 67895856)) ? (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((5933357478876880972ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 65520U))))))) : (((/* implicit */unsigned long long int) ((int) var_5)))));
}
