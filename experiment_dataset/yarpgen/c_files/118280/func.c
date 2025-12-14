/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118280
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
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_11 = ((/* implicit */_Bool) arr_4 [i_1]);
                var_12 -= ((/* implicit */_Bool) arr_0 [i_0]);
                var_13 = ((/* implicit */int) ((short) (_Bool)0));
                var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (arr_0 [i_2])))));
            }
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 8; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            arr_17 [i_4] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0 + 2] [i_3] [(short)5] [0ULL]))));
                            arr_18 [i_4] [i_3] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >> ((((~(((/* implicit */int) var_10)))) + (35820)))));
                            var_15 += arr_14 [i_4] [i_4 - 3] [i_4] [i_4 - 2] [i_4] [i_0 - 2] [i_0 - 2];
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_16 |= ((/* implicit */short) var_2);
                            var_17 = ((/* implicit */long long int) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [6U] [i_1] [i_3]))))))));
                            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)126))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11007))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_23 [i_7] [i_4] [i_4] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                        var_20 -= ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0 + 2]);
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
        {
            arr_27 [i_8] [(unsigned char)8] = ((/* implicit */unsigned long long int) var_7);
            arr_28 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0]))))) ? (((/* implicit */int) ((arr_9 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_21 [i_0] [i_8] [i_8] [i_8] [i_8]))));
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                arr_34 [i_9] [i_9] = ((/* implicit */long long int) arr_21 [i_0] [i_0 + 2] [(short)4] [(short)4] [i_0 - 3]);
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((long long int) -225499851026760890LL)))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(((arr_19 [i_0] [(unsigned short)8] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 2]))))))))));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */int) (~(var_6)));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [6] [i_0])) + (((/* implicit */int) arr_3 [i_0 + 3] [i_0]))));
        }
        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))))))));
    }
    var_26 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < ((+((~(var_5)))))));
}
