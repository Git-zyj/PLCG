/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148701
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (var_0)))) * (((/* implicit */int) var_15)))))));
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */unsigned int) min(((+(8589930496LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = (~((-(((unsigned long long int) var_8)))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1])) - (21081)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */short) var_8)), (arr_7 [i_3] [i_3] [i_3]))), (arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))) : (((long long int) var_5)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [0LL])))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [(unsigned short)13] [i_1] [(unsigned short)13] [i_3]))))) : (arr_12 [i_0 - 1] [i_0 + 1])));
                            var_23 &= var_15;
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0 - 1] [i_2 - 1] [i_2 + 2] [i_3] [i_2 - 1] [i_2 + 2] [i_2 - 1])) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1]))))) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_3] [i_3]))) : (-8589930497LL)))))));
                            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_14);
                        }
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((arr_9 [i_0] [i_1] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_3 [i_0])) < (var_10))) ? (((/* implicit */int) (unsigned short)127)) : (((((/* implicit */int) arr_6 [i_3] [i_2 - 1] [i_1] [i_0])) ^ (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0 - 1] [i_1])))))))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_2 + 2] [i_2] [i_2])))) ^ ((-(((/* implicit */int) arr_8 [i_2] [i_2 - 2] [4LL] [4LL]))))));
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (+(max((arr_1 [i_0 + 1] [i_0 - 2]), (((/* implicit */long long int) arr_14 [i_2 + 1] [i_1] [(_Bool)1] [i_6] [i_0 - 1]))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) min(((unsigned short)6144), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)0))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) min((((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned char)255)))) ^ (((/* implicit */int) ((short) var_9))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (arr_9 [i_0 - 1] [i_6] [(short)0] [7LL])))))))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_7]))));
                            var_30 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [(short)3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_6]))) ^ (arr_3 [i_0 - 2])))) : (arr_12 [i_1] [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0])) / (((/* implicit */int) var_9)))))))))));
                            var_31 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_1 [i_0] [i_1]) <= (var_12))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */int) ((arr_9 [i_0] [i_0 + 1] [8U] [i_2 - 1]) + (arr_9 [i_0] [i_0 + 1] [i_1] [i_2 + 1])));
                            arr_27 [(short)16] [i_1] [(short)16] = ((((/* implicit */int) var_15)) & (((/* implicit */int) arr_20 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1])));
                            var_33 = ((/* implicit */long long int) arr_16 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8]);
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32768))))), ((((_Bool)1) ? (-8589930492LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_1] [i_2 - 2] [i_9] [i_9])) % ((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2] [i_9]))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [14ULL] = ((/* implicit */int) ((short) (_Bool)1));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_5 [i_0])))) ? ((-(arr_5 [i_2 + 2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_9] [(_Bool)1])) : (((/* implicit */int) var_13)))))));
                            var_36 = ((unsigned short) (+(((((/* implicit */int) arr_11 [i_0 - 2] [(unsigned short)12] [i_2] [i_9])) ^ (((/* implicit */int) var_1))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)8064), (((/* implicit */unsigned short) arr_20 [i_10 + 1] [i_2] [i_2] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))))) || ((!((_Bool)1)))))) : ((-(((/* implicit */int) (unsigned short)65535))))));
                            arr_33 [i_0 - 2] [i_1] [i_2] [i_10 + 1] = ((/* implicit */unsigned long long int) arr_29 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] [i_10]);
                        }
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)8064)))) != ((-(((/* implicit */int) var_8))))));
}
