/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118131
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
    for (signed char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_0 [(short)0])) ? (((/* implicit */int) (signed char)110)) : ((+(((/* implicit */int) arr_2 [i_2]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    arr_9 [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (16581712049426151331ULL) : (((/* implicit */unsigned long long int) var_8))))) ? (((7803926404892717607ULL) & (((/* implicit */unsigned long long int) 5467644147841073459LL)))) : (((16532389419026910554ULL) + (((/* implicit */unsigned long long int) arr_4 [8LL] [8LL] [i_2]))))))) ? (((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_6 [8U] [8U] [i_2]))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_4) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 1]))))) : (((/* implicit */long long int) max((((((/* implicit */int) var_7)) << (((((/* implicit */int) var_3)) - (235))))), (((/* implicit */int) ((_Bool) arr_4 [i_1] [i_2] [i_2]))))))));
                    var_12 |= ((/* implicit */long long int) arr_1 [(short)7] [i_1]);
                    arr_10 [i_0] [i_0] [i_2] [i_3 - 1] [i_3] [i_3] = ((/* implicit */signed char) var_9);
                    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_8 [(signed char)8])))))), (1152921496016912384ULL)));
                    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59504))) >= ((-(7803926404892717607ULL)))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    arr_13 [i_0 + 1] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 2])) - (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [(short)1]))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_4]))));
                }
            }
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 4] [i_1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_0 - 2]))))));
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                for (signed char i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_19 [i_5] [i_5] [i_1] [i_0] = min((((((/* implicit */_Bool) arr_18 [i_5 + 2] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 16U)) ? (10642817668816834002ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) (_Bool)1)));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))) + (var_10)))) || (((/* implicit */_Bool) (-(arr_5 [i_0] [i_6])))))) ? (((/* implicit */int) (signed char)-5)) : (-539162581))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */short) var_1);
        }
        for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 3) 
        {
            var_18 += ((/* implicit */long long int) arr_11 [i_7] [i_7] [i_0] [i_7] [i_0 + 2] [i_0]);
            var_19 *= ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)59502))))), (arr_5 [i_0] [i_7 + 1])));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                var_20 += ((/* implicit */short) (((!(((/* implicit */_Bool) 1103253881U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16532389419026910554ULL)) ? (arr_24 [i_0] [i_8] [i_9 + 3]) : (((/* implicit */int) arr_11 [i_0] [i_8] [i_9] [i_0] [i_0] [i_0]))))) : ((~(arr_23 [i_0] [i_8] [i_8])))));
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    var_21 += ((/* implicit */int) arr_18 [i_9 + 1] [i_8]);
                    var_22 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_6)) <= (arr_0 [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [(short)11] [(signed char)1] [i_10 - 1]))) : (((((/* implicit */_Bool) -7589034453662745382LL)) ? (arr_28 [i_0] [i_10] [i_0] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0])))))));
                    var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4396972769280LL)))) ? (2650792449305956792LL) : (((/* implicit */long long int) var_8))));
                    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                }
                arr_29 [4] [i_8] [i_9 + 3] [i_9 - 2] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) 8987004720500537461LL)) || (((/* implicit */_Bool) arr_22 [i_9 + 1] [i_0]))))));
            }
            /* LoopSeq 1 */
            for (long long int i_11 = 3; i_11 < 22; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((((unsigned int) (signed char)5)) << (((/* implicit */int) (unsigned short)0))));
                            arr_39 [i_0] [i_12] [i_11 + 1] [i_12] [i_13] = ((/* implicit */int) arr_25 [(short)6]);
                            arr_40 [i_12] [i_8] [i_11 - 2] [i_12] = ((/* implicit */int) var_6);
                            arr_41 [i_13] [i_12] [i_11] [i_12] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_4)));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((8771777250208108360ULL) - (8771777250208108342ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [(short)13] [(short)13])) && (((/* implicit */_Bool) var_10))))) : (arr_38 [i_0] [i_13] [9LL] [i_13] [i_0 - 4] [i_12] [i_0 - 4])));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    var_27 -= ((/* implicit */signed char) ((arr_24 [i_0 - 3] [i_0 - 4] [i_11 - 2]) ^ (((/* implicit */int) arr_36 [i_0 + 3] [i_0 - 3] [i_11 + 1] [i_11] [i_14]))));
                    arr_44 [i_0] [i_8] [i_11] [i_14] = ((/* implicit */int) var_7);
                    var_28 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0]);
                }
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_37 [20LL] [i_0 - 2] [i_15] [(short)2] [i_11]) > (((/* implicit */long long int) arr_30 [i_11] [i_8]))))) >= (arr_24 [i_0 - 4] [i_0 + 2] [i_0 - 2])));
                    arr_47 [i_15] [i_8] [i_11] [i_0 - 4] [i_0 - 4] [i_15] = ((/* implicit */signed char) (-(3534466663U)));
                }
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_16 = 2; i_16 < 21; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (int i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        {
                            arr_56 [i_19] [i_18] [i_17] [i_0 + 3] [i_16] [i_0 + 3] = ((/* implicit */long long int) (-(arr_38 [i_19] [i_18] [i_18] [i_0] [i_17] [i_0] [i_0])));
                            arr_57 [i_0] [1] [i_0] [i_17] [i_18] [i_0] [i_19] = ((/* implicit */int) arr_21 [i_18] [i_16]);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */int) var_10);
        }
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 2) 
        {
            arr_60 [i_20] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) (-(arr_15 [i_20] [i_20] [i_0])))), (min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_20]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(1420177394)))), (((unsigned int) 4294967266U)))))));
            arr_61 [i_0] [i_20] = ((/* implicit */int) (signed char)-5);
            arr_62 [i_0] = (-(((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_33 [i_0] [17LL] [i_20] [i_20])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [9LL]))))) : (((/* implicit */int) ((_Bool) 4294967295U))))));
            arr_63 [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
        }
    }
    var_31 = ((/* implicit */long long int) ((unsigned char) (-((+(((/* implicit */int) var_3)))))));
}
