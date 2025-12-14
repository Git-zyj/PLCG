/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184024
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))) & (2939739288872141975ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) (+(max((arr_4 [i_2 - 1] [i_2]), (((/* implicit */unsigned long long int) var_14))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned int) ((int) (_Bool)1))))));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_1 - 3] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_5 [i_1 - 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) max((arr_2 [i_1 - 3] [i_1 - 3] [i_1 - 3]), (((/* implicit */long long int) (unsigned char)255)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 3; i_4 < 21; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_0 - 2])) ? ((-(((/* implicit */int) (short)-12009)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                            var_20 = ((/* implicit */_Bool) ((int) 2769934084887740087ULL));
                            arr_16 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_1 [(short)19]);
                        }
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            arr_21 [(short)1] [i_0] [i_1] [i_3] [i_4] [i_6 + 4] [i_6 + 3] = ((/* implicit */_Bool) (-(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_12)))))));
                            var_21 = ((unsigned char) (+(((unsigned long long int) var_14))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_6] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((min(((unsigned char)79), (((/* implicit */unsigned char) var_11)))), (max((((/* implicit */unsigned char) var_11)), ((unsigned char)165))))))) : (max((arr_9 [i_0] [i_0 - 1] [i_3]), (((/* implicit */unsigned int) var_13))))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), ((-((~(((/* implicit */int) (_Bool)0))))))));
                            arr_24 [i_0] [(signed char)17] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (short)12009)) << (((((/* implicit */int) (unsigned char)123)) - (116)))))), ((~(arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_0 - 3] [i_1 - 1])))));
                        }
                        for (signed char i_8 = 2; i_8 < 23; i_8 += 4) 
                        {
                            var_25 = ((unsigned long long int) ((((/* implicit */_Bool) max((arr_12 [i_4] [i_1 - 1] [i_1] [i_1] [16U] [16U]), (((/* implicit */short) var_12))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-12014)) : (((/* implicit */int) (unsigned short)26445)))))));
                            var_26 = ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) max(((short)-12009), (((/* implicit */short) (_Bool)1))))))))) : (var_8));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 2; i_9 < 23; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 73657146491907377ULL)) ? (((/* implicit */int) (_Bool)0)) : (1777169582))))))))));
                            arr_31 [6LL] &= ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_4] [i_4] [(unsigned short)12] [i_4 - 3] [i_4])) < (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_15 [i_4])))), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_23 [i_10] [i_10] [i_4] [i_4] [i_4 + 3] [i_0 + 2])) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))))));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_3]));
                        }
                        arr_35 [i_4] [i_1 - 1] [i_3] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_30 [i_4] [i_1 + 1] [i_3] [i_4] [i_0 + 2] [i_1 - 2] [i_0 + 2])) : (var_1))) << (((var_8) - (4516617712899742130ULL)))));
                    }
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) && (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58742))) > (var_5)))));
                    var_31 += ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_5)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_3])), (arr_2 [i_0 - 3] [i_0 + 1] [i_0 + 1])))))))) : (((((/* implicit */_Bool) arr_29 [i_1 - 3] [(unsigned short)4] [i_0 - 1] [12] [(unsigned short)4] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) var_13)))));
                }
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 23; i_12 += 2) 
                    {
                        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) < ((-(((/* implicit */int) var_10)))))))) : (min((12328885692305910512ULL), (((/* implicit */unsigned long long int) arr_17 [(unsigned char)6] [i_1 - 3] [i_11] [i_11] [i_11]))))));
                        var_33 = ((/* implicit */int) (unsigned char)208);
                    }
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12009)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
                    var_35 ^= ((/* implicit */unsigned char) 7384433583210891251ULL);
                }
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)536)) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))))) ? ((~(arr_4 [i_0 + 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45484))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) > (((unsigned long long int) min((((/* implicit */long long int) (short)10373)), (5234834330059521332LL))))));
    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)11009), (((/* implicit */short) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
}
