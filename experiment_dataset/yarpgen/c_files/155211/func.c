/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155211
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((min((((/* implicit */unsigned int) (unsigned char)89)), (1901338875U))), ((+(((unsigned int) (_Bool)1)))))))));
            var_21 = ((/* implicit */short) min((min((arr_4 [i_0 - 1] [i_0]), (arr_4 [i_0 + 2] [i_0]))), (min((arr_4 [i_0 - 1] [i_0]), (arr_4 [i_0 + 1] [i_0])))));
            arr_5 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0])), (arr_0 [i_0] [i_1]))))) : (min((var_10), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))), (((/* implicit */long long int) ((((((int) var_5)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) 1901338892U)) || (((/* implicit */_Bool) (unsigned short)18758))))))))));
            var_22 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 2])) : (arr_4 [i_0 - 1] [i_0]))) + (min((((/* implicit */int) arr_0 [i_0] [i_0 + 1])), (arr_4 [i_0 - 1] [i_0]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) (-(((-1300030331) - (-632173149)))));
            var_24 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_18))) / (var_9))) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1901338875U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))) : (2978296245U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1901338875U)))));
        }
        for (unsigned int i_3 = 2; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_14 [i_0] = ((/* implicit */short) ((unsigned int) arr_4 [i_0 - 1] [i_0]));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_25 += ((/* implicit */signed char) ((((arr_8 [i_0 + 1]) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_5] [i_5])) + (73)))));
                            var_26 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_9 [(signed char)22] [i_0]))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [(signed char)22])) ? (((((/* implicit */int) arr_18 [i_3])) / (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_7)))))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2978296245U))))) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0])), (var_12))))))) : (((/* implicit */int) min((arr_3 [i_0]), (var_2))))));
                var_29 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_20 [i_3 - 2] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_20 [i_3 - 2] [i_0] [i_0] [i_0 + 2])) : (((/* implicit */int) var_2)))));
                arr_24 [i_0] [i_0] [18ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0 + 2] [8U] [i_0] [i_0 - 1])) != (((/* implicit */int) ((unsigned char) var_0))))))) - ((+(1706792471027596158ULL)))));
            }
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_16 [6LL] [i_0] [12] [i_0 - 1] [6LL])) : ((-(((/* implicit */int) (unsigned char)147))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_19 [i_0 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_0 - 1]))))))))));
            var_31 = ((/* implicit */_Bool) var_12);
        }
        var_32 += ((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (arr_11 [i_0] [i_0] [8U] [i_0])));
    }
    var_33 = var_10;
    var_34 -= ((/* implicit */unsigned int) var_12);
}
