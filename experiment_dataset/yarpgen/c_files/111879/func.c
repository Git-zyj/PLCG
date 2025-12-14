/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111879
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
    var_16 *= var_6;
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)123)))), (((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_15), (((/* implicit */short) (signed char)-12)))))) : ((~(var_11)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        arr_12 [i_3 + 1] [i_1] [i_3 + 2] [i_3 + 3] [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))) ? (min((((/* implicit */int) (unsigned char)123)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_0 [(unsigned short)11])))))) : ((-(((/* implicit */int) ((_Bool) arr_9 [i_0] [(unsigned char)5] [i_0] [i_0])))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_3) * (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 4] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5336))) : (arr_10 [(signed char)10] [i_3 + 4] [(signed char)10] [(unsigned char)2] [i_3 + 1] [i_3 + 1]))));
                    }
                    for (long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [i_4 - 1]);
                        var_19 += ((unsigned char) var_8);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 570865698605578605ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-70))));
                        var_20 = ((/* implicit */unsigned int) var_12);
                        var_21 = ((unsigned int) var_0);
                        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_5 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 2] [i_5 + 3]))) : (var_13)));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1] [i_2] [i_6 + 2]))));
                        var_24 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [(unsigned char)17] [i_6 - 1] [i_6]))) | (arr_7 [(short)16]))) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)22] [i_6 + 1])))));
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_6 + 1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_6 + 3])) <= (((/* implicit */int) arr_6 [i_6 + 1]))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_28 [i_6] [i_6 + 3] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [20U] [i_2]))) == (((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
                            var_26 &= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_27 [i_6])) > (((/* implicit */int) (unsigned short)39969))))));
                        }
                    }
                    var_27 ^= (signed char)70;
                }
            } 
        } 
    } 
    var_28 *= ((/* implicit */unsigned int) min((((/* implicit */int) (short)-32760)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        {
                            arr_38 [14U] [i_9] [i_9] [i_10 - 1] [i_10 - 1] [i_11] = ((/* implicit */unsigned int) ((1818145272U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_9] [i_9] [(unsigned char)8] [i_9])) ? (((/* implicit */int) min((((/* implicit */short) var_14)), (arr_32 [i_8])))) : ((-(((/* implicit */int) (signed char)-79))))));
                            var_30 *= ((/* implicit */unsigned char) (!(((_Bool) min((arr_21 [i_8] [i_9] [i_8] [i_10] [(unsigned short)20]), (((/* implicit */unsigned int) (unsigned char)219)))))));
                            arr_39 [i_11] [i_10 - 1] [i_9] [i_8] [i_8] = ((/* implicit */long long int) arr_33 [i_9] [(unsigned char)5] [i_9]);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_2 [(unsigned char)16] [i_8] [i_8])), (arr_16 [i_8] [i_8] [(signed char)4] [i_8] [(signed char)4]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_8])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9]))))))))) << (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) arr_29 [i_8])))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)26)), (arr_34 [i_8])))))))));
            }
        } 
    } 
}
