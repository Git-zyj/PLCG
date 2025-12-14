/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155710
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0 + 1]), (var_1))))) * (max((arr_6 [i_3] [i_3]), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((((/* implicit */_Bool) 12545250824358005718ULL)) ? (arr_4 [i_0 - 1] [i_1] [(unsigned short)6] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29334))))) : ((~(288230101273804800ULL))))) : (7608126962941723610ULL));
                        arr_8 [i_3] = ((/* implicit */unsigned int) var_7);
                        var_15 = ((/* implicit */unsigned char) min((7608126962941723610ULL), (((/* implicit */unsigned long long int) min((3452842466U), (((/* implicit */unsigned int) (unsigned char)42)))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11484319365046339768ULL)) ? (((/* implicit */unsigned long long int) 9208023495234489534LL)) : (12545250824358005744ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11)))) : (arr_4 [i_3 - 1] [i_2] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) * (min((((/* implicit */unsigned int) (unsigned char)239)), (1073090178U)))))))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)36201))));
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(signed char)14] [i_2] [i_1] [i_0]))))) ? (((long long int) -9208023495234489535LL)) : (-935298862444385464LL)))), (((((/* implicit */_Bool) ((unsigned short) 4054007474560187028LL))) ? (max((arr_4 [i_0 - 2] [i_0 - 2] [(unsigned char)8] [i_0 - 2]), (((/* implicit */unsigned long long int) -4123208415879819358LL)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-117)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 2) 
                    {
                        arr_17 [i_5] [i_2] [i_1] [i_0 - 2] = ((/* implicit */long long int) ((3221877117U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_5 + 1] [i_2 + 1])))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5901493249351545883ULL))))) / (((/* implicit */int) (signed char)-98))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-110)) != (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))))));
                        var_20 = ((/* implicit */short) ((var_13) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1491284732U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)107))) : (-9223372036854775795LL))))));
                    }
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        arr_20 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) arr_16 [i_0] [0LL] [i_0] [i_6] [i_0 - 2] [13LL]);
                        arr_21 [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-95)) ? (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)59832)) & (((/* implicit */int) (unsigned short)36201))))), (arr_22 [i_0 - 1] [i_1] [i_2] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((1125899906842620ULL), (((/* implicit */unsigned long long int) arr_14 [i_0 - 2] [(unsigned char)12] [(unsigned char)0])))))))));
                        var_22 = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) min((853191825U), (((/* implicit */unsigned int) (unsigned short)59823))))), (((((/* implicit */long long int) ((/* implicit */int) arr_23 [19LL] [19LL] [i_2] [i_7 + 2]))) % (4653516106762136221LL))))));
                        arr_24 [(short)9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-107)) % (((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) arr_18 [i_7])) : (((/* implicit */int) (signed char)90))))))), (((((/* implicit */_Bool) min((-9223372036854775771LL), (((/* implicit */long long int) (signed char)107))))) ? (18035900228010188350ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36213)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_3)))))))));
                    }
                    var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)19929)), (var_6)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (arr_6 [i_0] [i_2])))) : ((-(var_11)))))), (max((((/* implicit */unsigned long long int) ((short) arr_7 [i_0] [11LL] [i_2]))), (18446744073709551591ULL)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_5);
}
