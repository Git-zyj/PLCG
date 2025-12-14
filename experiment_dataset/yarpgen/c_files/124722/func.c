/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124722
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
    var_13 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) (signed char)-1)))) % (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-30512)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (262115288585079183LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) : (((/* implicit */long long int) var_12))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_15 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
        }
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) var_0))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((((((/* implicit */int) (signed char)-103)) + (2147483647))) << (((/* implicit */int) arr_1 [i_0]))))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)8]))) | (((long long int) var_5))))));
                            arr_18 [i_2] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_2])) ? (((/* implicit */int) (unsigned short)17720)) : (((/* implicit */int) var_0)))) / (-1879065312)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_5)))))));
                            var_18 ^= ((/* implicit */long long int) arr_1 [i_3]);
                            var_19 = ((/* implicit */long long int) arr_7 [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_3] [i_7]);
                            var_21 ^= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                            arr_23 [5LL] [5LL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_3] [i_6] [i_7])) || (((/* implicit */_Bool) arr_3 [i_7] [i_3] [i_0])))) ? (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65523)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))))));
                            var_22 = ((/* implicit */long long int) arr_20 [(unsigned char)11] [i_3] [i_2] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    arr_27 [i_0] [i_2] [i_3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_9 [i_8]))))) ? ((-(((/* implicit */int) arr_9 [i_8])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_2] [(unsigned short)6] [i_8] [i_9] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1832541979288452511LL)) ? (((/* implicit */int) arr_3 [i_3] [i_3] [i_3])) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_3 [i_0] [i_3] [i_3]))))));
                        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(3077259261828054420LL)))) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (unsigned short)21179))));
                        arr_32 [i_2] [i_2] [(unsigned char)3] [i_8] [(unsigned short)9] = ((/* implicit */unsigned char) var_3);
                        arr_33 [i_9] [i_8] [i_3] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (arr_16 [9] [i_8] [i_3] [i_2] [i_0])))) & (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (arr_29 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned char) var_4)))))))));
                    }
                    var_24 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) -21LL)) ? (((((/* implicit */_Bool) 1642949514)) ? (8848471186567569856LL) : (arr_30 [i_0] [(unsigned char)18] [i_3] [i_8] [i_3] [i_2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_7))));
                        arr_37 [i_0] [15LL] [i_0] [(_Bool)0] [i_8] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3378006166816486370LL)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (unsigned char)213))))))) ? (((/* implicit */int) min(((short)15508), (((/* implicit */short) var_10))))) : (((/* implicit */int) var_7))));
                    }
                }
            }
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            var_26 *= arr_39 [i_0] [6LL];
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-93)) || (var_4)));
        }
        for (short i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            var_28 -= ((/* implicit */unsigned char) arr_41 [i_0] [10LL] [14U]);
            var_29 = ((/* implicit */unsigned short) var_12);
            var_30 ^= ((((/* implicit */int) var_0)) != (((((/* implicit */_Bool) 14775705336667759005ULL)) ? (((/* implicit */int) arr_41 [i_0] [i_12] [i_12])) : (((/* implicit */int) var_11)))));
        }
    }
    var_31 = ((/* implicit */signed char) var_5);
}
