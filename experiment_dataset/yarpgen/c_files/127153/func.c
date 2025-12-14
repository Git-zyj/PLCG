/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127153
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) (_Bool)1);
                        var_21 = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))))), ((signed char)127)));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned char) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2])))));
                    }
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])))) ? (min((((((/* implicit */int) var_6)) | (arr_4 [i_0]))), (((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)6])))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) != (((/* implicit */int) (unsigned char)80))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 2]))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)28)) / (((/* implicit */int) (_Bool)1))));
        var_24 += ((/* implicit */int) arr_1 [8U]);
        var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)48333), (((/* implicit */unsigned short) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6LL]))) : (var_19))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */int) ((unsigned char) var_18))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)32767))))))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_10 [i_0] [(short)5] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5))) * (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) max((((/* implicit */unsigned char) (signed char)61)), (arr_7 [i_0] [i_0] [i_0])))))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(unsigned char)6] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((max((2615809377042642395LL), (((/* implicit */long long int) 1531464102)))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [(unsigned char)2])))))))) : (((var_3) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    arr_21 [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3469953892U)))) | (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)127)))) : (arr_0 [i_5] [i_4])))));
                    var_27 += ((/* implicit */long long int) ((((/* implicit */int) arr_17 [12ULL] [i_5] [12ULL])) <= (((((/* implicit */int) arr_1 [0ULL])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4] [i_5] [(signed char)12] [(_Bool)1])) || (((/* implicit */_Bool) var_2)))))))));
                    arr_22 [i_4] [(unsigned char)14] [i_5] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_2 [i_4] [i_5])))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [12LL])) ? (((/* implicit */int) var_18)) : (arr_4 [(short)10]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) max((var_1), (var_1)))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */short) min((((((arr_0 [i_4] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52875))))) * (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) var_10))));
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_29 += ((/* implicit */unsigned short) (+(((((var_11) ? (var_1) : (((/* implicit */long long int) var_19)))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */int) arr_36 [i_7] [i_8] [i_9])) * ((+(((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) arr_35 [i_7] [i_8] [i_8] [i_9] [i_9] [i_10] [i_11])) : (((/* implicit */int) var_17)))))))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)17203)) ^ (((/* implicit */int) var_10))));
                        }
                        var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_34 [i_10] [i_9] [i_8] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)61))) : (var_1))) | (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) ((unsigned char) ((1152921504606846944ULL) < (((/* implicit */unsigned long long int) 1621640901)))))) : (((/* implicit */int) ((unsigned short) ((var_4) || (((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_7] [i_10 + 1] [i_9] [i_10]))))))));
                        var_33 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned short) arr_25 [11ULL]))) - (((/* implicit */int) ((short) arr_36 [i_7] [i_7] [i_7])))))));
                    }
                } 
            } 
        } 
    }
    var_34 = var_5;
    /* LoopNest 2 */
    for (short i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        for (signed char i_13 = 4; i_13 < 20; i_13 += 1) 
        {
            {
                arr_46 [i_12] [i_13] [i_12] = ((/* implicit */_Bool) ((arr_42 [i_12 + 1]) * (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_16)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_42 [i_13])))) : (((/* implicit */int) ((signed char) var_19))))))));
                var_35 = ((/* implicit */signed char) ((((long long int) arr_45 [i_12 + 1] [i_13])) ^ (((/* implicit */long long int) ((var_13) ? (arr_45 [i_12 + 1] [i_13]) : (arr_45 [i_12 - 1] [i_13]))))));
                arr_47 [i_13] = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_16)) ? (arr_43 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) min((var_10), (var_10))))))));
            }
        } 
    } 
}
