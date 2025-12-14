/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16236
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
    var_14 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3658224928U)) ? (1111764981U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27950))))))));
    var_15 = ((/* implicit */unsigned long long int) ((_Bool) var_10));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 4) 
            {
                var_16 = ((/* implicit */long long int) arr_1 [i_2]);
                var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_1] [i_2])))) ? (((/* implicit */long long int) max((1111765009U), (((/* implicit */unsigned int) -1206740447))))) : (((((/* implicit */_Bool) (signed char)114)) ? (arr_0 [i_0] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [22]))))))))));
                /* LoopSeq 3 */
                for (unsigned short i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                    arr_13 [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 - 1] = ((/* implicit */short) (((~(arr_10 [i_0]))) + (((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (arr_10 [i_1 + 2]) : (arr_10 [i_3 + 1])))));
                }
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    arr_16 [23U] [i_2] [i_1] [i_0] = (unsigned char)224;
                    var_19 = (!(((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1] [(signed char)0])));
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-27954))))) ? (-5970326527115689726LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (1206740450) : (((/* implicit */int) var_5))))) : ((+(3183202316U))))))));
                    arr_17 [8] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)23))));
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    arr_20 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -5970326527115689706LL)))) ? (((((/* implicit */_Bool) 4235015402U)) ? (arr_0 [(short)15] [(short)15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39029))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1111764977U))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1206740470))))) : (((/* implicit */int) (unsigned short)65535)))))));
                    arr_21 [i_0] [i_1 + 1] [i_2] [(unsigned short)15] = arr_14 [10] [i_5] [i_5] [i_5];
                }
                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32177))) >= ((~(5970326527115689725LL)))));
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2]))) : (((var_2) ? (arr_12 [i_2] [i_1] [i_2] [i_2] [i_0]) : (((/* implicit */long long int) 59951913U)))))) <= (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)254))) : (1111764982U)))), ((((_Bool)1) ? (((/* implicit */long long int) 1206740464)) : (5970326527115689729LL)))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 573742877)) ? (-1606477710) : (-573742884))))))));
                arr_24 [18LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 3] [i_6])) ? (1111764954U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30)))))) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_1] [i_0])))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)15574))))) : ((+(arr_10 [i_1 + 1])))));
            }
            arr_25 [i_1] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1015569146U)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (short)27548))))))))));
        }
        for (long long int i_7 = 2; i_7 < 24; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (short)-27120))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_7])) ? (((/* implicit */int) (short)18802)) : (((/* implicit */int) (short)-7871)))))))) ? (252201579132747776LL) : (((/* implicit */long long int) var_11)))))));
            var_25 = var_5;
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 252201579132747777LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)3))))) : (((((/* implicit */_Bool) -252201579132747801LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) : (-3233203826283907694LL))))) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            arr_31 [i_8] = ((/* implicit */unsigned short) (+((((_Bool)1) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(short)2] [i_8] [i_0])) << (((var_6) - (6538003881619193845ULL))))))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) 125753689))));
        }
        arr_32 [(unsigned char)21] = ((/* implicit */long long int) (unsigned short)65535);
    }
}
