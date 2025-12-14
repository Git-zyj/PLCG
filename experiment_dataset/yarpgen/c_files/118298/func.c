/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118298
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
    var_16 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_1)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0))))) * (((arr_7 [i_2 - 3] [i_1] [i_2] [i_1 - 1]) / (arr_7 [i_2 - 3] [5LL] [i_2] [i_1 - 1])))));
                        arr_9 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))) ? (arr_2 [i_0 + 1] [i_2 - 4] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_3] [(unsigned char)7] [(_Bool)1]))))))) ? (((/* implicit */int) arr_1 [i_2 - 2])) : (((/* implicit */int) max(((signed char)-28), (((/* implicit */signed char) var_4)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (unsigned int i_5 = 2; i_5 < 7; i_5 += 1) 
                {
                    {
                        arr_16 [i_0 - 1] [i_0] [i_4] [i_5 + 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)1657)) | (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) 575352973U)) <= (var_0)))))))));
                        var_19 = ((/* implicit */int) min((((unsigned long long int) arr_10 [i_0] [i_1 - 1] [i_5 + 2])), (((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_5 + 1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [(unsigned short)6] [i_5 + 3])))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) (_Bool)1);
                            var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2038821914U)) ? (min((arr_2 [i_0] [i_0] [i_6]), (((/* implicit */long long int) arr_18 [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [9U] [(short)1] [i_6])) > (((/* implicit */int) var_9)))))))))));
                            var_22 -= ((/* implicit */_Bool) ((((arr_14 [i_6] [i_4 + 1] [i_0 - 1] [i_1 - 1] [i_5 - 1]) == (arr_14 [1U] [i_4 + 1] [i_0 - 1] [9U] [i_5 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_0] [i_4 + 1] [i_0 - 1] [i_5 + 2] [i_5 - 1])))) : (min((arr_14 [i_0] [i_4 + 1] [i_0 - 1] [i_0] [i_5 - 1]), (((/* implicit */long long int) var_9))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [9] [i_5] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
                            arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_15 [i_0]) : (((/* implicit */int) var_4))));
                            var_24 = ((/* implicit */unsigned int) arr_0 [i_4 - 1]);
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            var_25 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 3719614323U)) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)57777)) ? (((/* implicit */int) arr_22 [i_0] [i_0])) : (((/* implicit */int) var_9)))))))));
                            var_26 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)26213))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((var_4) ? (((/* implicit */int) arr_18 [i_5 - 1])) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [i_4 + 1] [i_5] [6U]))))))))));
                            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (994949852) : (((/* implicit */int) arr_18 [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                            arr_29 [i_0] [i_1] [i_4] [i_5 - 1] [i_8] [(unsigned char)2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (arr_19 [(unsigned short)3] [i_4] [i_4 - 1] [i_5 - 2])))) ? (arr_14 [(_Bool)1] [(short)6] [i_4 - 1] [i_4] [4U]) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16865923812500341267ULL))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            var_29 *= ((/* implicit */_Bool) ((0ULL) >> (((max((var_8), (((/* implicit */unsigned int) arr_28 [(signed char)2] [i_5 - 2] [i_9] [i_9] [i_9 + 1] [(signed char)2])))) - (76542438U)))));
                            var_30 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_1] [i_5]))))))), ((~(((/* implicit */int) ((((/* implicit */int) var_10)) < (arr_13 [i_0] [i_1] [(unsigned char)5] [i_5]))))))));
                            var_31 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((var_4) ? (arr_15 [i_0]) : (((/* implicit */int) var_10))))) || (((((/* implicit */_Bool) 3464286854U)) && (((/* implicit */_Bool) arr_21 [i_0] [i_0] [(unsigned short)1] [i_4 - 1] [i_5] [i_9] [i_9])))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (3818981868069707985LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_23 [i_0] [i_0] [i_4 - 1] [i_0] [i_5] [i_4 - 1]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((var_7) >> (((((/* implicit */int) arr_11 [i_1] [i_5] [i_4])) + (31465)))))))) : (((var_11) ? (((/* implicit */unsigned long long int) arr_31 [(_Bool)1] [i_4])) : (arr_26 [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                            arr_32 [i_0] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_0] [i_1] [i_4] [i_4] [i_0 - 1] [i_4]))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (!((_Bool)1))))))));
                        }
                    }
                } 
            } 
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) min((-1781675740), (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [i_1] [1U]))))) : (arr_23 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0 + 1])))) ? (arr_26 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_3 [i_0])))))));
        }
        for (int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_34 = ((/* implicit */signed char) ((_Bool) ((long long int) arr_0 [i_0 - 1])));
            var_35 *= arr_10 [i_0] [i_0] [i_0];
        }
        var_36 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)176))))) ? (arr_31 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0] [i_0]) < (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [7LL] [i_0])))))) | (((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)101))))));
    }
    for (short i_11 = 1; i_11 < 20; i_11 += 1) 
    {
        var_37 = ((/* implicit */int) var_13);
        var_38 *= ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_36 [i_11 - 1]))))));
        var_39 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned char) (short)22223))), (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11 - 1]))) : (arr_35 [i_11])))));
    }
}
