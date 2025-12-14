/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167625
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
    var_20 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 *= ((/* implicit */unsigned char) var_13);
        var_22 = ((/* implicit */signed char) arr_1 [i_0]);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((211177293301159241LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)46038)) ? (4021532111912602660ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10821332586731007872ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19497)))))))))) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) ((short) 0ULL)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) >> (((((895248258) / (((/* implicit */int) (unsigned short)46044)))) - (19427))))) >> (((((((/* implicit */int) (unsigned char)72)) >> (((/* implicit */int) (unsigned short)0)))) - (56)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) ((long long int) ((long long int) -1)));
                var_25 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_2]);
                arr_8 [i_0] = ((((/* implicit */int) arr_5 [3] [(unsigned char)5] [(unsigned char)5])) >> ((((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (var_2))))) - (18446744073709530035ULL))));
            }
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_26 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-79)) ? (16497310969190884155ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */int) arr_12 [i_0])) - (38869))))) >> ((((+(arr_11 [i_0] [i_0] [i_0] [i_0]))) - (7384133857037193240ULL)))))) : (((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-79)) ? (16497310969190884155ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> (((((((/* implicit */int) arr_12 [i_0])) - (38869))) + (37441))))) >> ((((+(arr_11 [i_0] [i_0] [i_0] [i_0]))) - (7384133857037193240ULL))))));
                        var_27 = ((/* implicit */short) ((min((arr_13 [(unsigned short)4] [i_1] [(unsigned short)4] [i_3] [0ULL] [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_4] [i_0])))) | (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [8LL] [i_3] [i_3] [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [1] [i_3] [i_4])))))));
                        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-86)) + (2147483647))) << (((var_19) - (3980802200U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (-6748186163711213072LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0] [12])))))) : (arr_11 [i_0] [(signed char)4] [i_0] [16ULL]))) * (((/* implicit */unsigned long long int) max((1856211146U), (((/* implicit */unsigned int) arr_5 [(unsigned short)2] [i_1] [(unsigned short)2])))))));
                        var_29 = ((/* implicit */unsigned char) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_7 [(signed char)15] [(signed char)15]))));
                        var_30 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)480)) <= (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) (+(var_18)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_14 [i_0] [(signed char)2] [i_3] [i_4])))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [(short)9] [(short)9] [16LL] [14LL])), (arr_12 [4ULL]))))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((short) max((((((/* implicit */int) var_1)) / (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned char) arr_11 [i_0] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]))))));
            var_31 = ((/* implicit */short) var_12);
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 15U)) || (((/* implicit */_Bool) 2740059381830959216LL)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_7] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [(unsigned char)2])) >> (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_5 [i_0] [(unsigned short)9] [i_6]))))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0] [(unsigned char)2])) + (2147483647))) >> (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_5 [i_0] [(unsigned short)9] [i_6])))))));
                        arr_24 [i_0] [i_0] [i_0] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) ((unsigned char) ((long long int) arr_16 [i_0])));
                        var_33 = ((/* implicit */long long int) arr_0 [i_6] [i_6]);
                    }
                } 
            } 
        }
    }
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (max(((+(((/* implicit */int) (signed char)-75)))), (((int) var_6)))) : (((((/* implicit */int) var_11)) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))))));
}
