/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176592
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
    var_19 -= ((/* implicit */int) 2982748014268735305ULL);
    var_20 ^= (~(((/* implicit */int) var_0)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) arr_4 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((((((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1])) != (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1])))), ((!(((/* implicit */_Bool) (unsigned char)74))))));
                                arr_15 [i_1] [i_1] [i_2] [11ULL] [i_2] [11ULL] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_0 [i_0]))) ^ (((/* implicit */int) ((unsigned short) var_5))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_12 [i_4] [17LL] [i_2] [i_3] [i_4] [i_4]))))) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) var_14))))));
                                arr_16 [i_1] = ((/* implicit */int) ((((unsigned int) (unsigned char)84)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                                var_23 &= ((/* implicit */int) (unsigned char)181);
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) var_18)))) - (((((/* implicit */int) arr_14 [i_2])) - (((/* implicit */int) arr_14 [i_2]))))));
                    var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)181)) * (((/* implicit */int) (unsigned char)77))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
        var_26 = ((/* implicit */short) var_1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_27 ^= ((/* implicit */long long int) var_14);
            arr_21 [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4655547413260484302ULL)))))));
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) | (13791196660449067337ULL)));
        }
        for (int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_6])) ? ((((~(((/* implicit */int) (unsigned char)85)))) - (((/* implicit */int) ((((/* implicit */_Bool) 1692887154)) || (((/* implicit */_Bool) arr_23 [i_0 - 1]))))))) : (arr_7 [i_6])));
            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            arr_27 [14ULL] [14ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (((((/* implicit */int) max((arr_12 [i_0] [(short)13] [i_0] [18] [i_0] [15LL]), (var_11)))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)72)) : (arr_0 [(unsigned short)18]))))) : (min((((/* implicit */int) arr_2 [i_0 + 1])), ((-(((/* implicit */int) (short)21788))))))));
            var_30 ^= ((/* implicit */unsigned char) ((13791196660449067334ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1008)))));
        }
    }
    var_31 = ((/* implicit */int) var_14);
    var_32 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_18)))), (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_18))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (unsigned char)162)))))))));
}
