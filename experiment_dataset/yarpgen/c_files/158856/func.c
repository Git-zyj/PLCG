/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158856
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_10 *= ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned short)12737)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)13240)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7065301273084019609ULL)) ? (((/* implicit */int) arr_2 [(signed char)5])) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) min((arr_2 [(unsigned char)10]), (((/* implicit */short) (unsigned char)202))))) : (((/* implicit */int) (short)-4806))))) * (min((var_6), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [(unsigned short)13] [i_1] [i_1])))))))));
            arr_7 [(unsigned char)3] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])), (var_1)))) ? (((13906607226424804719ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))));
            var_11 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7065301273084019609ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11381442800625532006ULL)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) ((signed char) var_3))))), (((((/* implicit */int) arr_5 [i_0] [i_1])) >> (((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) + (84)))))));
            arr_8 [i_0] [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) == (((/* implicit */int) arr_5 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (11381442800625532007ULL) : (((/* implicit */unsigned long long int) var_4)))));
        }
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (unsigned char)136))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((((7065301273084019609ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned short)42722)) : (((/* implicit */int) arr_5 [(unsigned char)9] [i_2]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((signed char) var_0))), ((short)127))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_17 [i_3] [i_2] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])))));
                    arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [3ULL] [i_2]))) & (arr_0 [i_3] [i_4])));
                    arr_19 [i_2] [(unsigned char)2] = ((/* implicit */short) arr_12 [i_2] [i_2]);
                    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((11381442800625531991ULL), (((/* implicit */unsigned long long int) -637173959145340883LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [(unsigned short)8])))))))) ? (((((/* implicit */_Bool) min((arr_12 [14ULL] [14ULL]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-15375)) && (((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_2])))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) min((arr_2 [i_4]), (((/* implicit */short) var_3))))), ((-(var_6))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 637173959145340857LL)) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_3] [(signed char)10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) ((unsigned char) var_3)))))))))));
                }
            } 
        } 
        arr_20 [i_2] = ((/* implicit */long long int) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */short) (unsigned char)140)), ((short)127))))))));
    }
    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        arr_24 [i_5] [i_5 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) var_0)))), (((/* implicit */int) (unsigned short)65024)))))));
        var_16 = ((/* implicit */signed char) ((unsigned short) ((((unsigned int) arr_10 [i_5 - 1] [(unsigned char)2])) > (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_5))))))));
        var_17 = ((/* implicit */short) ((var_1) << (((/* implicit */int) (unsigned char)38))));
    }
    var_18 = ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) (signed char)83))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_3)))) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((unsigned short) var_9)))));
}
