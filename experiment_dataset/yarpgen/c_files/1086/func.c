/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1086
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_3] [i_2 + 1] [i_3] = ((/* implicit */_Bool) 16413496151377738108ULL);
                        var_15 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) (signed char)124)))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 2]))) <= (13716630133494222011ULL))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (var_12)))) : (((/* implicit */int) ((short) arr_5 [i_0] [i_2] [i_3]))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) max((arr_11 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2]), (arr_11 [3LL] [i_2 - 2] [i_2 - 2] [(_Bool)1] [i_2 + 2] [i_2 - 2])))))))));
                            var_18 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1] [i_1]);
                        }
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_18 [9LL] [i_6] [i_2 + 1] [(_Bool)1] [(_Bool)1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47568)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (short)-24097))));
                            var_19 = ((/* implicit */signed char) arr_13 [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 7; i_7 += 2) 
                        {
                            var_20 = (~(((/* implicit */int) (short)-26631)));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 1042960014755919066LL)) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) (short)24097)) % (arr_4 [i_0] [i_2] [i_5] [i_7 + 3])))));
                            var_22 = ((/* implicit */long long int) ((int) arr_11 [i_0] [i_7 + 4] [i_2 - 2] [i_0] [i_2 - 2] [i_1]));
                            arr_23 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_7] [i_2] [i_0] [i_0]));
                            var_23 = arr_17 [i_7 + 2] [i_1] [i_2] [i_5] [i_7 + 4];
                        }
                        var_24 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)5] [i_5])) ? (arr_16 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0])))))), (((((/* implicit */unsigned long long int) var_0)) | (2033247922331813507ULL)))))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_1] [i_1]))) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])))))))), ((~(((2033247922331813507ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_2 - 1] [i_1] [i_2 - 1]))))))))))));
                    }
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        arr_27 [5U] [i_1] [8LL] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_0] [(signed char)9] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_5 [5LL] [i_1] [i_2 - 2]) : (var_2)))) : (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [5ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_2 - 1] [4]))))))));
                        arr_28 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24094)) ? (((long long int) arr_9 [i_0] [i_1] [i_2] [i_8])) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2 - 1])))))) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) ((short) min((arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)0]), (((/* implicit */unsigned long long int) (short)24094))))))));
                        var_26 &= ((((/* implicit */int) ((signed char) ((int) arr_6 [i_0] [(short)6] [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */int) var_10)));
                    }
                    arr_29 [i_1] [(short)2] [i_2] [i_2] = ((/* implicit */int) arr_25 [i_0]);
                    var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) ((short) ((unsigned char) 897009663274730956LL)))) : (((/* implicit */int) ((short) var_4)))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 3; i_9 < 10; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)108))) : (arr_26 [i_0] [i_1] [i_2] [i_1])))))));
                        var_29 = ((/* implicit */long long int) ((short) arr_17 [i_9 - 2] [i_2 + 1] [1LL] [1LL] [i_0]));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) 
                    {
                        arr_34 [8U] [8U] [i_2 - 1] [i_10] [i_10] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 2033247922331813508ULL)) ? (((/* implicit */int) (short)-24085)) : (((/* implicit */int) arr_12 [(short)8] [i_1] [i_2 + 2] [i_10] [(short)8]))))));
                        var_30 = ((unsigned long long int) (~(((/* implicit */int) var_3))));
                        arr_35 [6U] [1ULL] [i_2 - 1] [i_10] = ((/* implicit */unsigned long long int) ((short) arr_4 [i_10] [i_10 + 1] [i_10] [i_10 - 1]));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_10 - 1] [i_2] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_2 - 2] [i_10 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2 - 2]))));
                        var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_2 + 2] [i_2 + 2] [i_2 - 2])) ? (arr_24 [i_2 + 2] [i_2 - 1] [i_2 - 2]) : (arr_24 [i_2 - 2] [i_2 + 2] [i_2 - 2])));
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_3))))) ? ((+(((unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
