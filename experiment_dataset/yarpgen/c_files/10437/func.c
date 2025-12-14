/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10437
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) (short)-19615)))))));
        var_17 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */long long int) arr_1 [i_0])))))))), (((long long int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1])) % (((/* implicit */int) arr_3 [i_1] [i_1 + 3] [i_1 + 3])))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) var_2)))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), ((((!(((/* implicit */_Bool) arr_1 [i_1 + 4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1] [i_1]))) : (arr_1 [i_1 + 3]))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((arr_1 [(_Bool)0]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0])) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) & ((~(((unsigned int) var_7)))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (((arr_9 [i_3]) & (((/* implicit */unsigned long long int) var_0)))) : ((~(arr_9 [i_3]))))))));
        var_22 = ((/* implicit */signed char) max((var_22), (arr_6 [i_3] [i_3])));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_10 [i_4] [0] [5ULL]))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (arr_7 [i_3]))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_24 = var_0;
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_3] [i_4])), (262144U)))) | ((-(var_5)))));
                            arr_18 [i_3] [i_3] [i_3] [i_4] [i_3] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4294705155U) | (((/* implicit */unsigned int) -1073741824))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_7])) ? (arr_14 [i_3] [(unsigned char)1] [i_5] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_8])), (max(((unsigned short)52815), (((/* implicit */unsigned short) var_6))))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_14 [i_3] [i_8] [1U] [1U] [i_11]) : (arr_24 [i_11] [(unsigned char)1])))) && (((/* implicit */_Bool) arr_9 [i_3])))))))));
                            var_27 = ((/* implicit */short) arr_3 [i_10] [i_8] [i_8]);
                            var_28 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((arr_9 [i_3]) << (((((/* implicit */int) arr_6 [i_3] [i_8])) + (54))))) : (((/* implicit */unsigned long long int) var_3))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                for (unsigned int i_13 = 2; i_13 < 10; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) var_14);
                            var_31 = (((-(((unsigned long long int) arr_5 [i_3] [i_8] [i_12] [i_14])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))));
                        }
                    } 
                } 
            } 
        }
        arr_38 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) % (10963639223237582636ULL)))) ? (((3542442845U) - (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) >> (((var_5) + (5288466756578243847LL)))))) ? (((var_7) >> (((arr_16 [4U] [(short)8] [(unsigned short)0] [i_3] [i_3] [i_3] [i_3]) - (1268578868))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (-470525755)))))))) : (arr_37 [i_3])));
        arr_39 [i_3] = ((/* implicit */signed char) ((short) min((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_15 = 2; i_15 < 16; i_15 += 2) 
    {
        var_32 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_41 [i_15]), (arr_41 [i_15]))))) / (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) var_13)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_40 [i_15 + 1])))));
        arr_42 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_15 + 1])) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned char) var_8)), ((unsigned char)15))), (((/* implicit */unsigned char) arr_41 [i_15]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) 537298490)) <= (arr_40 [i_15 - 2]))))));
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
        var_34 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) >= (var_10))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        arr_46 [0ULL] [i_16] = ((/* implicit */short) ((unsigned char) ((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) var_7)))));
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)3136)) >= (((/* implicit */int) (unsigned short)52812))))) < (((((/* implicit */int) arr_45 [i_16] [i_16])) + (((/* implicit */int) arr_45 [i_16] [i_16])))))))));
        var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_41 [i_16])), (((((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62385)) << (((4294705151U) - (4294705146U))))))))));
    }
    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (-(var_7))))));
}
