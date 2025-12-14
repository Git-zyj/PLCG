/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146921
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (2147483647) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */short) (-(((var_6) << (((((((/* implicit */_Bool) (short)-22887)) ? (((/* implicit */int) arr_3 [(signed char)11])) : (((/* implicit */int) var_7)))) + (25875)))))));
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))) >> (((((long long int) arr_4 [i_1])) - (768164685LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (arr_4 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
        }
        var_13 *= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)32767)) ? (13128598282726276480ULL) : (6228979505267883225ULL))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((arr_0 [i_3] [i_2]) + (4222619765673622587LL)))))), (arr_4 [i_0]))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */short) ((signed char) ((unsigned int) ((((/* implicit */_Bool) arr_13 [(signed char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3564831565U)))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (3175234654U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((unsigned char) 13128598282726276477ULL)))))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [(short)3] [(short)3] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_8 [i_0])), (arr_13 [14LL]))))) : (18446744073709551615ULL))) ^ (18446744073709551604ULL)));
                        arr_18 [i_5] = ((_Bool) min((((((/* implicit */_Bool) 797340946U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                    }
                    for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 4; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_7 - 2] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32757))) : (arr_0 [i_7 - 2] [i_3 - 2])));
                            arr_24 [i_0] [i_2] [i_3] [(unsigned short)4] [7ULL] = ((/* implicit */unsigned short) var_4);
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-27372))) / (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        }
                        for (short i_8 = 4; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) max((((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))), ((-(((/* implicit */int) var_7))))));
                            arr_29 [i_0] [i_0] [(unsigned char)2] [i_0] [i_8] = ((/* implicit */long long int) 12217764568441668391ULL);
                        }
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_5)))) ? (((unsigned int) arr_21 [i_0] [i_3 - 1] [i_3] [i_6])) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [2LL] [i_3 - 1] [i_6] [i_6])))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) ((((/* implicit */_Bool) 730135746U)) && (((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_0] [i_6])))))));
                        arr_30 [17ULL] [17ULL] [17ULL] = ((/* implicit */short) (~(((/* implicit */int) ((var_10) == (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))));
                    }
                    var_22 = ((/* implicit */_Bool) arr_27 [5U] [5U] [i_2]);
                }
            } 
        } 
    }
}
