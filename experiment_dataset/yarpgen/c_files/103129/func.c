/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103129
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((_Bool) var_8));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / ((+(((/* implicit */int) var_0))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_14 *= ((/* implicit */_Bool) arr_1 [i_1 - 1]);
        var_15 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    }
    for (short i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) && (((/* implicit */_Bool) var_6))))), (var_6))))));
        var_17 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_2)))) <= (((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_2 - 1])) - (23604)))))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3 - 1])) || (((/* implicit */_Bool) var_9)))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_15 [i_3] [i_3] [i_3 + 1]))));
            /* LoopSeq 4 */
            for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
            {
                var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                arr_20 [i_3] [i_5] = ((/* implicit */unsigned int) var_5);
                var_21 ^= ((/* implicit */short) var_2);
                var_22 += ((/* implicit */int) (unsigned char)31);
            }
            for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
            {
                var_23 = var_1;
                var_24 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
            }
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
            {
                arr_26 [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) % (arr_15 [i_7] [i_4] [i_3]))) < (((/* implicit */unsigned long long int) (~(-2989844942397369451LL))))));
                var_25 = ((/* implicit */unsigned char) arr_24 [i_3] [(unsigned char)2] [10ULL]);
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_26 += ((/* implicit */signed char) (-((+(((/* implicit */int) (short)0))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_10 [i_10]))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        var_28 += ((/* implicit */_Bool) 3552280890U);
                        var_29 = ((/* implicit */_Bool) var_10);
                        arr_36 [i_4] [i_8] [i_3] [i_11 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_3] [i_4]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_34 [i_3] [i_4] [i_4]))));
                        var_30 = ((/* implicit */_Bool) 2100880561U);
                    }
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_3] [i_4 - 1] [i_8])) ? (((/* implicit */unsigned long long int) (+(1515657229U)))) : (var_1)));
                }
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_32 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_5)))));
                    var_33 *= ((/* implicit */unsigned char) 1515657229U);
                }
                var_34 = ((/* implicit */unsigned long long int) ((((arr_16 [i_3]) > (((/* implicit */int) var_10)))) && (((/* implicit */_Bool) var_7))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_34 [i_3] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_34 [i_3] [(unsigned short)7] [i_4 - 1]))));
                var_36 = ((/* implicit */signed char) ((unsigned long long int) var_3));
            }
            var_37 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_33 [(_Bool)1])))));
            var_38 = ((((((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_4 + 1] [i_4])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))));
        }
    }
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-31758)) && (((/* implicit */_Bool) 742686406U))));
}
