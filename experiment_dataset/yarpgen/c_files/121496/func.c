/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121496
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 += (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_3)))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            arr_5 [12U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [0])) ? (((((/* implicit */_Bool) 17087253705796767654ULL)) ? (7811439305076641829LL) : (((/* implicit */long long int) 129024)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 129044)))))))));
            arr_6 [i_0] [(signed char)5] = ((/* implicit */unsigned long long int) max((((signed char) arr_4 [i_0] [i_0] [i_0])), (((/* implicit */signed char) ((7811439305076641815LL) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
            arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ? (max((-129019), (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (9905988114026784868ULL) : (((/* implicit */unsigned long long int) 129034))))) ? (max((3085417056U), (((/* implicit */unsigned int) 1508760447)))) : (((/* implicit */unsigned int) (-(var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_3] [i_2] [i_2]);
                    var_14 = ((/* implicit */unsigned char) -129008);
                    var_15 *= ((/* implicit */short) (((-(((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_2])))));
                }
                arr_16 [i_0] = ((/* implicit */long long int) ((653575848) & (((int) var_11))));
                arr_17 [i_0] = ((/* implicit */signed char) arr_3 [i_0] [(unsigned short)3] [i_3]);
            }
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_16 = ((/* implicit */int) min((var_16), (-653575866)));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (var_4)))) == (129032)));
                        var_18 ^= ((/* implicit */short) (~(var_12)));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_9 [i_7]))));
                    }
                    var_21 *= ((/* implicit */unsigned char) var_7);
                }
            }
            var_22 -= ((/* implicit */long long int) ((signed char) (-(((((/* implicit */_Bool) var_8)) ? (arr_22 [i_0] [i_2] [i_2] [i_0]) : (((/* implicit */unsigned int) 129014)))))));
            arr_24 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) (-(arr_21 [i_2]))));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((1008529160) << (((1209550252U) - (1209550251U)))));
        }
        for (int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_23 -= ((/* implicit */int) (_Bool)1);
            arr_28 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((long long int) 1209550238U)) != (((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_0] [i_8]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))) << ((((~(var_0))) - (8348313055087343611LL)))));
        }
        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            var_24 += ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_32 [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((((((arr_26 [i_0] [i_9] [i_9]) >> (((var_12) + (1140079918))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_9])) ? (((/* implicit */int) (unsigned char)148)) : (var_12)))))) - (1032222602ULL)))));
        }
        var_25 = ((/* implicit */signed char) ((_Bool) min((arr_2 [i_0] [i_0] [i_0]), (arr_23 [6ULL] [i_0] [i_0] [12] [i_0] [i_0] [i_0]))));
        arr_33 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) & (-7811439305076641840LL)));
    }
    var_26 = ((/* implicit */unsigned int) -129012);
}
