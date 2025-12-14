/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140103
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */short) (+(3119150911U)));
                    var_15 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) (unsigned short)16384)) ? (281474976710624ULL) : (var_13))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26695))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(short)8])) ? (18446462598732840985ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                }
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) % (arr_2 [i_0] [i_0])))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0])), (var_1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) var_2);
                                var_17 = ((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned long long int) (~(arr_10 [i_3 - 1]))))));
                                var_18 += ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)153)), ((~(((((/* implicit */_Bool) 10835336428940659732ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
                                var_19 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) (_Bool)1)), (217980720)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (var_0)));
                    arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4] = ((/* implicit */unsigned long long int) arr_17 [i_3 - 1] [i_4] [i_4] [i_4]);
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (18446462598732840991ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (((((/* implicit */_Bool) 10835336428940659740ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (281474976710624ULL)))));
                    arr_28 [i_3] [i_4] [i_4] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_4] [i_4] [i_3]) : (18446462598732841003ULL)));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    arr_33 [i_4] = var_13;
                    var_22 = (!(((((/* implicit */_Bool) arr_2 [i_4] [i_3 - 1])) || (((/* implicit */_Bool) var_0)))));
                    arr_34 [i_3] [i_4] = var_10;
                }
            }
        } 
    } 
    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((24ULL) < (18446462598732840991ULL)))), ((~(((/* implicit */int) (unsigned char)227))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) max((((/* implicit */short) var_12)), (var_6)))))));
}
