/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107513
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0 + 2] [i_0])))) == (((((/* implicit */unsigned long long int) -531421935850438842LL)) * (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 1] [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (0LL) : (-1317771356280370774LL))) % (((((/* implicit */_Bool) 531421935850438835LL)) ? (-531421935850438842LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30791)))))));
    }
    for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_4 + 2] [6ULL] [i_4 + 2] = ((/* implicit */long long int) arr_14 [i_2] [i_2] [i_1] [i_4 - 1] [i_5] [i_1]);
                            arr_19 [i_1] [(short)6] [(short)6] [i_2] [i_5 + 1] = (i_2 % 2 == zero) ? (((long long int) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_1] [i_2]) << (((arr_13 [i_5] [i_2] [i_3] [i_4] [i_4] [i_2]) - (1867819634U)))))) ? (((var_7) | (((/* implicit */unsigned long long int) 2U)))) : (max((((/* implicit */unsigned long long int) var_11)), (var_8)))))) : (((long long int) ((((/* implicit */_Bool) ((((arr_12 [i_2] [i_1] [i_2]) + (9223372036854775807LL))) << (((((arr_13 [i_5] [i_2] [i_3] [i_4] [i_4] [i_2]) - (1867819634U))) - (472853835U)))))) ? (((var_7) | (((/* implicit */unsigned long long int) 2U)))) : (max((((/* implicit */unsigned long long int) var_11)), (var_8))))));
                            arr_20 [i_2] [i_2] = ((/* implicit */long long int) 13200072874615092961ULL);
                            var_21 = ((/* implicit */short) 17277151962311858712ULL);
                            var_22 = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
                        }
                    } 
                } 
            } 
            arr_21 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2765105110858135102LL))))))) ? (13560859657530506946ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 3302875245U))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1947720155650203997ULL)))) : (531421935850438841LL)))));
            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7805636232633384839LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (18446744073709551587ULL)));
        }
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_24 += ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [i_1]);
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) min(((_Bool)0), ((_Bool)1)))), (max((((/* implicit */short) arr_10 [i_1] [i_7] [i_8])), (arr_11 [i_1] [i_1] [i_1])))))) + (((/* implicit */int) ((_Bool) arr_4 [i_7])))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [(unsigned char)10] [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (min((arr_27 [i_6] [0ULL] [(_Bool)1] [i_6]), (var_8))))), ((~(2106481750399805258ULL)))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (max((((((/* implicit */_Bool) -1317771356280370789LL)) ? (5246671199094458654ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 4]))))), (((/* implicit */unsigned long long int) ((long long int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) arr_22 [(unsigned char)2] [(unsigned char)2] [i_6])) == (((arr_25 [i_6]) ? (arr_13 [i_6] [i_1] [i_1] [(short)10] [i_1] [i_6]) : (arr_23 [i_6] [i_6] [i_6])))))))));
            var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -531421935850438841LL)), (max((((0ULL) ^ (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) 292838677496178821ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : (13575970454242271156ULL)))))));
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */long long int) (signed char)120))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_6 [i_1]))))), (((/* implicit */unsigned long long int) max((max(((unsigned short)57344), (((/* implicit */unsigned short) arr_10 [i_1] [i_6] [i_6])))), (((/* implicit */unsigned short) (_Bool)1))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            var_30 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 4] [i_1] [i_1] [i_1]))) / ((~(2U)))));
            var_31 |= ((unsigned int) (signed char)121);
            arr_30 [(unsigned char)11] [i_9] = ((/* implicit */short) ((12945689925394835585ULL) + (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1 - 4] [i_9]))));
        }
        arr_31 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (292838677496178815ULL)));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (arr_34 [i_10])))) ? (min((((/* implicit */unsigned long long int) 4294967295U)), (arr_32 [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (8444249301319680ULL))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10 - 1])) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) arr_35 [i_10] [(short)15]))))) ? (arr_32 [i_10]) : (18446744073709551615ULL)))));
        arr_36 [i_10 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) arr_34 [i_10 - 1]))), (min((arr_34 [i_10]), (((/* implicit */unsigned long long int) var_14))))))) ? (((((/* implicit */_Bool) 14390075924120481365ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) 0ULL)))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65515), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_6))))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) max((((min((9223372036854775807LL), (((/* implicit */long long int) var_11)))) | (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11]))))), (((/* implicit */long long int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 3716322931749308255LL)))))))))))));
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (long long int i_13 = 1; i_13 < 18; i_13 += 2) 
            {
                for (short i_14 = 2; i_14 < 17; i_14 += 2) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10512365930481212593ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_16))))) ? (arr_48 [i_11] [i_11] [i_12] [i_11] [i_11] [13ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3173837651U))))))))) ? (((/* implicit */unsigned long long int) ((((((long long int) arr_43 [i_14] [i_12])) + (9223372036854775807LL))) >> (((((/* implicit */int) ((signed char) arr_32 [i_11]))) - (127)))))) : (((((/* implicit */_Bool) arr_44 [i_14 - 2])) ? (arr_34 [i_14 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                        arr_50 [i_11] [i_11] [i_11] [3LL] [i_11] = ((/* implicit */long long int) arr_37 [i_11] [i_11]);
                        var_35 = ((/* implicit */short) (_Bool)0);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            for (short i_16 = 0; i_16 < 19; i_16 += 2) 
            {
                {
                    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (2289037328278553797LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : ((((((_Bool)0) ? (arr_32 [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36126))))) % (min((arr_43 [i_11] [i_15]), (((/* implicit */unsigned long long int) arr_38 [i_11] [i_11]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65526))) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (short)25754))));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((unsigned int) 3152242144543075248ULL)))));
                        arr_58 [i_11] [i_11] [i_15] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_16] [i_17])) ? (((((/* implicit */int) arr_55 [i_16])) >> (((arr_48 [5LL] [i_11] [9ULL] [5LL] [i_16] [i_17 + 1]) - (2989928798U))))) : (((/* implicit */int) (unsigned short)10))));
                    }
                }
            } 
        } 
    }
}
