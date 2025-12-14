/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124001
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
    var_13 *= ((/* implicit */unsigned short) max(((+(((((/* implicit */int) var_5)) / (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) var_1)) - (5003)))))) ? (((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */int) (unsigned short)2949)) >> (((((/* implicit */int) var_1)) - (4985)))))))));
    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (1553430120817918290ULL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) || (((((/* implicit */_Bool) 16893313952891633325ULL)) || (((/* implicit */_Bool) var_9))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 778883633))) && ((!(((/* implicit */_Bool) arr_3 [i_0]))))));
        var_16 = ((/* implicit */unsigned char) var_8);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 ^= ((/* implicit */signed char) min((((((_Bool) var_4)) || (((/* implicit */_Bool) (~(-778883634)))))), (max(((!(((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))));
        arr_8 [i_1] [4] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1] [i_1]))))) & (max((var_2), (((/* implicit */long long int) var_6))))))));
        arr_9 [i_1] [13U] = ((/* implicit */_Bool) (~(1553430120817918291ULL)));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (16893313952891633325ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) (~(((var_3) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            var_20 = ((/* implicit */signed char) (-((~(var_3)))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_21 &= ((((/* implicit */_Bool) arr_19 [(unsigned short)6] [i_2] [i_3] [i_3 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)));
                        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) 2951202823U)) & (-146518801533746466LL)))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((unsigned char) ((var_4) <= (((/* implicit */long long int) -778883633)))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_0))))) ? (arr_5 [i_2] [(unsigned short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
            var_25 = ((((/* implicit */_Bool) var_12)) ? (((var_4) ^ (((/* implicit */long long int) -1691594664)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8))))));
            var_26 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_28 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 16893313952891633340ULL)) ? (((/* implicit */long long int) 399823131U)) : (9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9] [i_9] [i_2] [i_2])))));
            arr_34 [0ULL] [0ULL] [0ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 405771222U)) ? (-146518801533746466LL) : (((/* implicit */long long int) arr_15 [i_2] [i_2] [i_9]))))) ? (3346061400U) : (67107840U));
        }
        var_29 = ((/* implicit */int) max((var_29), ((+(((/* implicit */int) var_9))))));
    }
    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_10] [i_10])) ? (((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (max((var_3), (((/* implicit */long long int) (signed char)-90)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned char)4)))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            {
                                var_30 = ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63002))) | (3131331209U))) < (1343764474U)))) - (((/* implicit */int) ((signed char) ((var_6) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (~(((max((var_3), (((/* implicit */long long int) var_10)))) / ((+(var_3))))))))));
                            }
                        } 
                    } 
                    var_32 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_44 [i_10] [i_10] [i_10] [i_10]), (arr_44 [i_10] [i_11] [i_12] [i_12]))))));
                    arr_51 [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_6)), (var_3))), (((/* implicit */long long int) ((778883606) != (arr_40 [i_10] [i_10]))))))) ? (max((((((/* implicit */_Bool) arr_50 [i_10] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_35 [i_10] [i_11])) | (((/* implicit */int) arr_35 [i_11] [i_12]))))));
                    arr_52 [(signed char)1] [i_10] [i_10] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (arr_40 [i_10] [i_10])))), (arr_46 [i_12] [i_12] [i_12] [8LL]))) > (((((((/* implicit */_Bool) var_10)) ? (3346061393U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)))))));
                }
            } 
        } 
        arr_53 [i_10] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (var_2))))) <= (arr_37 [i_10] [i_10]))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((min((((/* implicit */long long int) var_1)), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_10] [(unsigned char)14] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))))));
    }
}
