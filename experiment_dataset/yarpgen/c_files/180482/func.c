/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180482
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (arr_3 [15] [i_1 + 1] [i_1 + 1]) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_4 [i_0] [4] [i_1 + 1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 + 1]))))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_19 += ((/* implicit */unsigned char) ((arr_5 [(unsigned short)8] [i_1 + 1] [(unsigned short)8]) & (((((/* implicit */_Bool) arr_5 [14LL] [i_1 + 1] [14LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [18U] [i_1 + 1] [18U])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [(signed char)14])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_3] [i_3])))))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))))));
                        arr_11 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
                    }
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((var_10) + (178707480))))))));
                    var_22 = ((/* implicit */signed char) (~(((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [(unsigned short)9]);
                    arr_15 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_4 [i_4] [i_0] [i_0]))));
                    arr_16 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))));
                    arr_17 [i_0] [i_0] [(_Bool)1] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (!(var_2))))));
                }
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1 + 1]))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_12)) + (((/* implicit */int) arr_0 [i_1 + 1] [i_5]))))))) : (max((((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1)))))))));
                    var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_5] [i_5] [i_1 + 1])) ? (arr_13 [i_1 + 1] [i_1 + 1] [i_5] [i_5]) : (arr_13 [i_1 + 1] [i_5] [i_5] [i_5]))), (((/* implicit */long long int) (+(((/* implicit */int) (short)16948)))))));
                    var_24 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_5]))))), (var_14))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2709113243U)) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) (!((_Bool)1)));
                            var_26 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_14)));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_16))))))));
                        }
                        var_28 = ((/* implicit */long long int) arr_6 [i_0] [i_6 - 1] [9] [i_6]);
                    }
                }
                for (short i_8 = 2; i_8 < 17; i_8 += 2) 
                {
                    var_29 = ((/* implicit */unsigned short) (~(arr_24 [i_0] [i_0] [9U])));
                    var_30 = ((/* implicit */unsigned int) ((int) (~(min((((/* implicit */unsigned int) var_9)), (var_1))))));
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) var_6)) : (arr_3 [i_0] [i_1 + 1] [i_8])))))) ? (((/* implicit */long long int) min((max((arr_2 [0U] [i_1]), (((/* implicit */unsigned int) arr_6 [(short)5] [i_1 + 1] [i_1 + 1] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_8 - 2])) : (((/* implicit */int) var_12)))))))) : (arr_24 [(_Bool)1] [i_1] [i_0])));
                    arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [18] [(unsigned short)16])) : (5459424474322180359ULL)))) ? ((~(9223372036854775807LL))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_8 - 1] [i_8 - 1])))))))) ? ((~(max((((/* implicit */unsigned int) (unsigned short)60243)), (536870848U))))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)16)))))))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_13);
}
