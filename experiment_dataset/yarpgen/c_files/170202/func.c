/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170202
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
    var_14 = ((/* implicit */long long int) var_3);
    var_15 += ((/* implicit */unsigned long long int) var_1);
    var_16 = ((/* implicit */signed char) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((var_3) / (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (unsigned short)6))));
        var_18 -= ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : ((~(var_0)))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_12))))) + (arr_6 [(signed char)11]))) * (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_7)) : (var_5))), (((/* implicit */unsigned long long int) max((-7095108783680717549LL), (((/* implicit */long long int) arr_0 [i_1] [i_1])))))))));
        var_21 = (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) arr_5 [i_1] [i_1])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */short) var_2);
            var_22 = ((/* implicit */signed char) max((var_22), (arr_1 [17])));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_3))));
            var_24 = ((/* implicit */unsigned short) max((min((max((arr_4 [i_3]), (arr_3 [i_1] [i_3]))), (((/* implicit */long long int) max(((signed char)-67), (arr_2 [i_1])))))), (((/* implicit */long long int) var_2))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) var_11))))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_4 - 1])) ? (arr_7 [i_1] [i_4 - 1]) : (arr_7 [i_1] [i_4 - 1])));
            }
            for (unsigned char i_6 = 3; i_6 < 10; i_6 += 3) 
            {
                arr_22 [i_1] [i_4] [i_4 + 1] = ((/* implicit */_Bool) (~((-((+(((/* implicit */int) arr_17 [i_1] [i_1] [i_6] [i_6]))))))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(var_3)))), (((((/* implicit */_Bool) var_10)) ? (arr_19 [(signed char)6] [(signed char)6]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_7 [i_1] [i_4])))))));
                    var_29 = ((/* implicit */signed char) arr_20 [i_7] [i_7] [(unsigned short)0]);
                    var_30 = ((/* implicit */short) max((1973818515), (1973818515)));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1973818518)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28602))) : (16053606826733076579ULL)));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 + 1])) ? (arr_19 [4ULL] [i_6 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((arr_17 [i_1] [i_6 - 3] [(signed char)11] [i_4 + 1]) ? (((/* implicit */int) arr_17 [(signed char)10] [i_6 - 1] [2LL] [i_4 - 1])) : (((/* implicit */int) var_1)))) : (-1973818528))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_33 += arr_12 [(unsigned short)4] [i_4] [(unsigned short)4];
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)28585), (((/* implicit */unsigned short) (signed char)-58))))) ? (((/* implicit */int) min((var_1), (var_11)))) : (((/* implicit */int) ((arr_19 [i_1] [i_9]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [i_6] [(unsigned short)7] [(unsigned short)7]))) : (arr_19 [i_1] [i_9])))), (var_5)))));
                        var_35 = ((/* implicit */signed char) (-(((long long int) arr_13 [i_8]))));
                    }
                    for (int i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) 17218355032820689062ULL);
                        var_37 = (+((-(arr_4 [i_10 + 3]))));
                        var_38 = arr_13 [i_8];
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_39 -= ((/* implicit */_Bool) var_13);
                        var_40 = ((/* implicit */unsigned short) arr_0 [i_1] [(signed char)3]);
                    }
                    arr_35 [i_1] = ((/* implicit */int) var_4);
                }
                var_41 = arr_3 [i_6] [i_1];
                var_42 = arr_29 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1];
                var_43 = ((/* implicit */long long int) var_4);
            }
            var_44 = ((/* implicit */int) ((var_3) >= (((/* implicit */int) (unsigned short)37573))));
        }
        var_45 = ((/* implicit */unsigned long long int) var_3);
    }
    for (signed char i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_23 [i_12] [i_12] [i_12] [i_12] [(unsigned short)2] [i_12]))))));
        var_47 = ((/* implicit */unsigned char) max(((~((~(arr_32 [i_12] [(unsigned short)12] [(_Bool)1] [i_12] [(unsigned short)12]))))), (arr_3 [i_12] [i_12])));
        arr_39 [i_12] [i_12] = arr_3 [i_12] [i_12];
    }
    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) min((min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) var_2)))), (max((((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_2))))), (((int) var_8)))))))));
}
