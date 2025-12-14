/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116638
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
    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (1500422931924429848ULL) : (6243943081705535706ULL)))) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) var_11)))) : (((/* implicit */int) var_11))));
    var_15 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (-(arr_1 [i_0 - 2]))))));
        var_17 ^= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_8)), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_12)))))) % (((((((/* implicit */int) var_0)) < (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned long long int) 6811927983368922445LL)) : (min((((/* implicit */unsigned long long int) var_11)), (var_4)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) max((var_1), (var_13)))))))));
                        var_19 *= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) arr_9 [i_0] [(unsigned short)16] [(unsigned short)16])) < (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3]))))) : (max((((/* implicit */unsigned int) var_13)), (arr_4 [i_0] [i_1 - 1] [i_3])))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_18 [i_0 + 1] [i_1] [i_2] [i_2] [i_3] [i_4] = 2397009490188709243ULL;
                            var_20 = (+((((_Bool)1) ? (((/* implicit */unsigned long long int) -9134703214074753868LL)) : (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_2])) ? (((/* implicit */unsigned long long int) 3013117232U)) : (1500422931924429840ULL))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_1]));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] [i_5]))) >= (((((((/* implicit */int) arr_19 [i_0 + 1] [i_1] [i_2] [i_3] [i_5])) + (2147483647))) << (((((/* implicit */int) var_0)) - (50)))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_2) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((short) arr_0 [i_3]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [11LL] [i_1 + 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14053))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_9))))))) : (((/* implicit */unsigned long long int) ((arr_4 [i_0 - 1] [i_2] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((unsigned char) (+(((var_6) ? (((/* implicit */int) arr_2 [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_2]))))))))));
                            var_25 = ((/* implicit */short) (~(((var_13) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_6 - 1])) : (((/* implicit */int) var_11))))) : (arr_20 [(signed char)18] [i_1] [i_1 - 1] [i_2] [i_2] [i_3] [i_6 - 1])))));
                            var_26 = ((/* implicit */unsigned short) var_4);
                            arr_23 [i_0] [i_1 - 1] [i_2] [i_6] [i_6 - 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : ((~(arr_1 [i_2]))))), (((/* implicit */unsigned long long int) (unsigned char)53))));
                        }
                    }
                } 
            } 
        } 
    }
    var_27 = ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_13)))), (((/* implicit */int) min(((unsigned short)11866), (((/* implicit */unsigned short) (signed char)106)))))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) var_13))))));
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                {
                    var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_8 - 1] [i_9 + 2]))))) ? (((/* implicit */unsigned long long int) (-(2393406256U)))) : (((1500422931924429844ULL) >> (((11223744143629166298ULL) - (11223744143629166242ULL))))));
                    arr_33 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [i_7] [i_8] [i_9])) : (((/* implicit */int) arr_30 [i_7] [i_8] [i_9 - 1])))))), (((/* implicit */int) ((arr_3 [i_8 - 1] [i_8 + 1] [i_9 + 1]) != (arr_3 [i_8 + 2] [i_8 + 1] [i_9 - 1]))))));
                }
            } 
        } 
    } 
}
