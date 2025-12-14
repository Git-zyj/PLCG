/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137874
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 *= ((/* implicit */signed char) (+((((+((-9223372036854775807LL - 1LL)))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
        var_11 = ((/* implicit */unsigned short) var_7);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)65525), (var_9)))) / (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((var_7), (((/* implicit */unsigned long long int) (unsigned short)65535))))))) - (var_5)));
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            {
                arr_9 [i_1] [i_1] = ((long long int) arr_5 [i_1] [i_1] [i_1]);
                var_14 = ((/* implicit */_Bool) min((var_14), ((((+(((/* implicit */int) (unsigned short)5)))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 3] [2ULL] [i_1 + 3])) >= (((/* implicit */int) arr_5 [i_1 + 2] [12LL] [i_1 + 3])))))))));
                arr_10 [i_1] = ((/* implicit */unsigned long long int) (-(((arr_6 [i_1 + 3] [i_1] [i_1 + 2]) / (((/* implicit */int) (unsigned short)9))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    arr_13 [(short)3] [(_Bool)1] [i_1] [(short)3] = ((/* implicit */long long int) (((((+((~(((/* implicit */int) (unsigned short)65528)))))) + (2147483647))) << ((((((-(((/* implicit */int) ((_Bool) arr_11 [i_1]))))) + (32))) - (31)))));
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)16));
                    arr_15 [i_1 + 3] [i_3] [i_3] |= ((/* implicit */short) (unsigned short)65535);
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned short)13))));
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) arr_7 [i_1 + 1] [10] [i_1 - 2])) << (((var_8) - (13893855275600627220ULL))))) << (((/* implicit */int) ((_Bool) (unsigned short)28))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        arr_23 [i_1] [i_2] [i_4] [i_1] = ((/* implicit */signed char) (~((+((-(((/* implicit */int) (unsigned short)2))))))));
                        var_17 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) / (arr_20 [i_1] [i_1] [i_1 - 1] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65533)) < (((/* implicit */int) (unsigned short)0)))))))));
                        arr_24 [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2] [i_1 + 1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned short)65535))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2] [i_1 + 3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8)) || (((/* implicit */_Bool) (unsigned short)9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_1] [i_1] [1ULL])) ? (((/* implicit */int) (unsigned short)65514)) : (arr_19 [i_5 - 3] [i_1] [i_1] [i_1 + 1]))), ((-(arr_19 [i_5 + 1] [i_1] [i_1] [i_1])))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)3), (((/* implicit */unsigned short) arr_12 [i_1 + 2] [i_4]))))) ? (((var_5) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)17), ((unsigned short)7))))))))));
                        arr_27 [i_1] [i_2] [i_4] [i_4] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65512))) : (arr_4 [i_1] [i_2])))) || ((!(arr_7 [i_4] [i_4] [i_4])))))));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_30 [i_1] [i_1] [i_4] = ((/* implicit */long long int) var_3);
                        var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4)) || ((!((!(((/* implicit */_Bool) arr_5 [i_1] [i_4] [i_2]))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1 + 1])) / (((((/* implicit */int) (unsigned short)65508)) << (((((/* implicit */int) (unsigned short)40)) - (34)))))));
                    }
                    arr_31 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) (~(((((((/* implicit */int) (unsigned short)65525)) + (((/* implicit */int) (unsigned short)65531)))) - (((/* implicit */int) ((unsigned short) (unsigned short)9)))))));
                }
            }
        } 
    } 
}
