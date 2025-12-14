/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148277
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
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) & (((/* implicit */int) arr_0 [i_1] [i_1]))));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_2 [i_1]));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 17U)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [(unsigned short)19])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_8)));
        }
        for (short i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */signed char) var_2);
            arr_10 [i_2] [i_2 + 1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)9411))))));
        }
        for (short i_3 = 2; i_3 < 16; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_13 [i_0])) ^ (((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 4294967291U)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_1 [i_0]) % (((/* implicit */int) arr_0 [i_3] [i_3]))))), (arr_12 [i_4 + 1] [i_4 + 1] [i_4]))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_5] [i_4 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), (arr_12 [(unsigned char)15] [i_3] [i_0])));
                }
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) (unsigned short)11321);
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_21 = arr_18 [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1];
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) ((_Bool) (unsigned char)95)))))))))));
                        var_23 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((unsigned long long int) arr_3 [(short)12] [i_3] [i_4])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0]))))))));
                    }
                    for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        arr_29 [i_6 + 1] [i_4] [i_4] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(arr_20 [i_0]))))))));
                        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_3 - 1] [i_3] [i_3] [16] [i_3 + 1]))))) % ((+(((/* implicit */int) ((_Bool) arr_2 [i_3])))))))));
                        var_25 *= ((/* implicit */signed char) arr_26 [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)121)))))));
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (13853834721700221085ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4]))))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        arr_37 [i_0] [i_0] [i_4] [i_6] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_3] [i_3] [i_6]))) : (arr_25 [i_3 + 3] [i_4] [i_4] [i_6 - 1] [i_10])))));
                        var_29 = ((/* implicit */unsigned short) var_7);
                        arr_38 [i_0] [i_4] [i_4] [i_4] [i_6 - 1] [i_4] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_0] [i_3] [(signed char)8]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))));
                        var_30 &= ((/* implicit */short) min((arr_17 [i_4] [i_3] [i_4] [i_6] [i_10 - 1]), ((-(arr_17 [7ULL] [i_6] [i_4] [7ULL] [7ULL])))));
                    }
                }
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [(unsigned short)3]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 + 4] [i_3 + 4]))))))))) : (((unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_33 [i_11] [i_3] [i_0] [i_0] [i_0]))))))))));
            }
            arr_42 [i_0] [i_3 + 4] [(_Bool)1] = ((/* implicit */signed char) var_12);
        }
        arr_43 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_5)))) ? (((/* implicit */long long int) (~(((((/* implicit */unsigned int) -578614369)) & (4294967295U)))))) : (((((/* implicit */long long int) (~(-578614369)))) & ((~(arr_26 [i_0] [i_0])))))));
        var_33 = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (unsigned short)53458))));
    }
}
