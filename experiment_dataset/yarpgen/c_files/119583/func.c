/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119583
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
    var_17 |= ((/* implicit */short) (unsigned char)111);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_1))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((int) arr_10 [i_4] [i_3] [11ULL] [i_1] [i_0]));
                            }
                            for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_10)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min(((unsigned short)36402), (((/* implicit */unsigned short) var_2)))))))));
                                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0 + 4] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) max((arr_5 [i_0 + 1] [i_2] [i_0 + 1]), ((unsigned char)112)))) : (((((/* implicit */int) (unsigned short)65535)) + (var_13)))))) : (max((((/* implicit */unsigned long long int) arr_11 [5ULL] [i_1] [i_0 + 4] [i_0 + 4] [i_0] [(unsigned char)13])), ((+(var_1)))))));
                            }
                            var_20 = ((/* implicit */signed char) arr_8 [i_0] [i_2 + 1] [i_1] [i_0]);
                            var_21 = ((/* implicit */long long int) var_6);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_13 [i_0 + 4] [i_1] [i_2 - 1] [i_2 - 1] [i_3])) < (max((((/* implicit */unsigned long long int) var_7)), (var_15)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_23 |= ((/* implicit */int) ((unsigned long long int) arr_9 [i_0 - 1] [i_0 + 4] [i_7 - 1] [i_8 - 2]));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) & (var_8))), (((/* implicit */int) ((signed char) var_9)))))) ? (((/* implicit */long long int) min((((/* implicit */int) min(((unsigned char)97), ((unsigned char)246)))), (var_12)))) : (((long long int) arr_27 [i_8] [(unsigned char)12] [i_6] [(unsigned short)9] [(unsigned char)12] [i_0 + 4]))));
                                var_25 = ((/* implicit */unsigned int) (unsigned char)208);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_1 [i_9 + 1] [i_6])) : (((/* implicit */int) (signed char)103)))), (((/* implicit */int) (signed char)4))));
                        var_26 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned short)25063)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_1] [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [(unsigned short)14] [i_9]))))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 5624665719444446231ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 4] [i_1] [i_1] [i_10 - 1]))) : (arr_25 [i_10 - 1] [i_0])))));
                    arr_34 [7ULL] [i_0] [i_0] [i_0] = ((_Bool) arr_9 [i_1] [i_10 - 1] [i_10 - 1] [i_0 - 1]);
                    arr_35 [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_0] [(signed char)10] [i_10]))))) | (((arr_25 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99)))))));
                    arr_36 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)255)) ? (4030241361910639793ULL) : (((/* implicit */unsigned long long int) min((6069295060638242364LL), (((/* implicit */long long int) (unsigned char)132))))))), (3112331568601741726ULL)));
    var_29 = ((/* implicit */long long int) var_8);
}
