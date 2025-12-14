/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164120
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
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) ((min((((/* implicit */int) arr_13 [i_0 - 2])), (arr_5 [i_0 - 1]))) + ((+(((/* implicit */int) arr_13 [i_0 - 2]))))));
                            var_16 = ((/* implicit */_Bool) var_11);
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_3))))) ^ (((arr_9 [i_0 - 2] [i_0 - 2] [i_3] [i_4]) ^ (((/* implicit */long long int) var_14)))))) : (((/* implicit */long long int) (+(arr_7 [i_2] [i_1] [i_0])))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30297)) % (((/* implicit */int) (unsigned short)35233))));
                            arr_17 [i_0 - 1] [i_0] [i_0] [i_0] [(unsigned char)5] [5ULL] [5] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5] [i_3 - 1]))))));
                        }
                        arr_18 [i_2] [i_1] [i_2] [i_2] [i_3] [i_2] |= ((/* implicit */signed char) arr_12 [i_0 - 2] [i_1] [(unsigned short)9] [i_3] [i_0]);
                    }
                } 
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            arr_25 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned short)30307)) - (30283))))) << (((((/* implicit */int) (unsigned short)35218)) - (35218)))))) && (((/* implicit */_Bool) arr_22 [i_7] [6U] [i_7]))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_20 [i_7]), (((/* implicit */unsigned long long int) (unsigned char)34)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7])) ? (arr_21 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)26611)), (var_0)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)15652))))) : (max((((/* implicit */unsigned int) (signed char)19)), (arr_22 [i_7] [(signed char)11] [i_7 - 1])))))));
            var_19 = (i_7 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30318))))) ? (max((arr_22 [i_7] [i_7] [i_7]), (1176848274U))) : ((~(arr_22 [i_7] [i_7] [i_7 + 1]))))) ^ (((((/* implicit */_Bool) ((unsigned short) (signed char)-119))) ? (((arr_21 [i_6]) << (((arr_22 [i_7] [i_6] [i_7 + 2]) - (1259992591U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)177)))))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30318))))) ? (max((arr_22 [i_7] [i_7] [i_7]), (1176848274U))) : ((~(arr_22 [i_7] [i_7] [i_7 + 1]))))) ^ (((((/* implicit */_Bool) ((unsigned short) (signed char)-119))) ? (((arr_21 [i_6]) << (((((arr_22 [i_7] [i_6] [i_7 + 2]) - (1259992591U))) - (2183926110U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)177))))))))));
        }
        arr_26 [i_6] = ((/* implicit */unsigned char) (+((+(max((var_0), (((/* implicit */unsigned int) arr_23 [7ULL]))))))));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1950134119372144284ULL))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) 
            {
                for (unsigned char i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) arr_33 [(unsigned char)12]);
                        arr_35 [i_8] [i_9 + 2] [i_9 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) : (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-85)), (-1198913967)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)177)))))) : (1271154853U)))));
                    }
                } 
            } 
        } 
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((7623844945327034198ULL) - (7623844945327034187ULL)))))) ? (((/* implicit */int) arr_29 [i_6] [14] [i_6])) : (arr_24 [i_6])))) ? (((((/* implicit */_Bool) ((arr_33 [i_6]) ^ (arr_24 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)11803)))) : (((((/* implicit */_Bool) (unsigned short)38894)) ? (16496609954337407319ULL) : (((/* implicit */unsigned long long int) 448227369U)))))) : (((/* implicit */unsigned long long int) ((arr_22 [i_6] [i_6] [i_6]) ^ (arr_22 [i_6] [i_6] [i_6]))))));
    }
    var_22 = ((/* implicit */unsigned short) var_9);
}
