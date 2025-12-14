/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182007
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
    var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), ((-9223372036854775807LL - 1LL))))) ? (max((var_17), (((/* implicit */unsigned int) (unsigned short)65510)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) (unsigned char)32))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47191))) ^ (arr_1 [i_0 - 1])))) ? (min((((/* implicit */unsigned int) (unsigned char)0)), (arr_1 [(unsigned char)17]))) : (max((arr_1 [20]), (arr_1 [i_0 + 1])))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_1 [i_0 - 2]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)183))))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) (unsigned short)47191);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned short) 4194303U);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */int) max((min((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_0] [i_1]) : (arr_8 [i_0] [i_0]))), (((/* implicit */unsigned int) ((6917529027641081856LL) < (((/* implicit */long long int) 622963114U))))))), (arr_3 [i_1])));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (arr_3 [i_0 - 1]) : (max((var_2), (arr_7 [i_0] [i_1]))))));
                arr_14 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_0] [i_2 - 3])) ? (arr_10 [i_2 - 2] [i_0] [i_2]) : (((/* implicit */int) (unsigned short)25)))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    arr_17 [i_0] [i_0 - 2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((arr_8 [i_0 - 1] [i_0]) >= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)26)))))))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max(((+(arr_1 [i_0]))), (((((/* implicit */_Bool) arr_10 [0U] [i_1] [0U])) ? (2510432770U) : (3023647821U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) var_15)) <= (((/* implicit */int) var_10)))), (((((/* implicit */int) var_15)) == (((/* implicit */int) arr_11 [i_2])))))))))))));
                    arr_18 [i_0] [i_0] [i_0] [19ULL] = (~(((((/* implicit */_Bool) 4194303U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (arr_1 [i_0 + 2]))));
                    arr_19 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1] = ((/* implicit */unsigned char) 1784534516U);
                }
                arr_20 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((unsigned int) 153185877U)), (((/* implicit */unsigned int) max((arr_0 [i_0 - 3]), (var_11))))));
            }
            var_21 = (~(((((/* implicit */_Bool) 5152952549332802314LL)) ? ((-(556267507U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47191))))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) 4194303U)));
                        arr_27 [i_0 + 2] [i_0] [i_4] [i_5] = arr_24 [i_0] [i_1] [i_5 + 1] [i_0 + 1] [i_4 - 2];
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_23 += (unsigned short)25;
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_24 = ((/* implicit */int) ((unsigned char) (-(var_16))));
                arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 0ULL);
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                arr_37 [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_8]))));
                var_25 += (+(4141781419U));
            }
            var_26 &= ((/* implicit */unsigned short) (+(arr_15 [i_6] [i_6] [i_6] [i_6])));
        }
        for (unsigned short i_9 = 4; i_9 < 21; i_9 += 4) 
        {
            arr_41 [i_0] = ((/* implicit */unsigned char) ((((((long long int) (unsigned char)179)) > (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65510), (((/* implicit */unsigned short) var_9)))))))) ? (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3053639485U)) ? (arr_22 [14U] [14U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18349)))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_9] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0 + 1] [i_0 - 3] [i_9] [(unsigned char)12] [i_9 - 4])) : (26ULL))))) : ((+(((unsigned long long int) 1048560U))))));
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49770))) - (max((3505564188U), (4141781404U))))), (min((var_16), (((((/* implicit */_Bool) (unsigned char)135)) ? (arr_22 [i_0 - 2] [8U]) : (arr_38 [i_0] [i_0] [i_9]))))))))));
        }
        for (unsigned int i_10 = 3; i_10 < 20; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 20; i_11 += 3) 
            {
                arr_48 [18LL] [14U] [14U] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((unsigned int) arr_38 [i_0 - 2] [i_0 - 2] [i_11 - 2]))), (((((/* implicit */_Bool) (unsigned char)244)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) & (((unsigned long long int) arr_11 [i_0 + 2]))));
                arr_49 [i_0] [i_10 - 3] [i_11] [10U] &= ((/* implicit */long long int) 830114241);
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0 - 3])), (((((/* implicit */_Bool) arr_32 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (0U)))))) ? (arr_24 [i_12] [i_10] [i_12] [i_12] [i_12]) : (max(((+(2031783420U))), (var_17)))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned char i_14 = 1; i_14 < 21; i_14 += 2) 
                    {
                        {
                            var_29 &= ((/* implicit */unsigned int) (+((~(0LL)))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (min((arr_3 [i_13]), (max((arr_47 [i_10] [i_13 - 1] [i_12]), (((/* implicit */unsigned int) var_8)))))))))));
                            arr_59 [i_0] [i_0] [i_0] [i_13] [18U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)108))));
                        }
                    } 
                } 
            }
            arr_60 [i_0] [i_0] = ((/* implicit */int) arr_23 [i_10 + 1]);
            /* LoopNest 2 */
            for (unsigned int i_15 = 2; i_15 < 21; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 3; i_16 < 21; i_16 += 1) 
                {
                    {
                        arr_67 [i_0] [i_0] = ((/* implicit */unsigned short) min((((arr_22 [i_0 + 1] [i_0 + 1]) + (arr_22 [i_15] [i_16 - 2]))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_50 [i_0 - 3] [i_10 + 2] [i_15 - 2])), (arr_21 [i_10 - 1] [i_0] [i_0 - 1]))))));
                        var_31 = ((/* implicit */unsigned long long int) 883405111U);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (arr_50 [i_10 - 2] [i_10 - 2] [i_10 + 1])))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_10 [14U] [i_0] [i_0])) ? (1933766332U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)11))))) ? (arr_36 [i_0 - 3] [i_15 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [10U])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    }
                } 
            } 
        }
        arr_68 [i_0] [i_0 - 2] = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) * (var_1));
    }
    var_33 *= ((/* implicit */unsigned int) (unsigned char)244);
}
