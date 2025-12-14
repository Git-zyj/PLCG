/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126197
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
    var_11 = ((/* implicit */unsigned int) var_7);
    var_12 = (unsigned char)109;
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) max((var_13), ((+(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 2] [i_1 + 2])) ? (arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2]) : (arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2])))))));
            var_14 = ((/* implicit */short) (+(((arr_3 [6] [i_1 + 1] [i_1 + 2]) ^ (arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2])))));
        }
        for (signed char i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_15 -= ((/* implicit */unsigned char) var_9);
            arr_8 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((unsigned char)254), ((unsigned char)84)))), (((((/* implicit */_Bool) 17736428591283658685ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11886)) || (((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) 12ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) -6756308922281002300LL))))))));
            var_16 = ((/* implicit */unsigned int) max((var_16), ((((_Bool)1) ? (640341896U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2819)))))));
        }
        arr_9 [12] |= ((/* implicit */long long int) max((min((2096152219), (((/* implicit */int) (short)-2820)))), (arr_0 [(short)16])));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) arr_0 [i_3]);
        var_18 *= ((/* implicit */unsigned short) min((7846780504786348016ULL), (((/* implicit */unsigned long long int) (short)31))));
        arr_12 [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_3] [(_Bool)1] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))));
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)150))))), (max((arr_6 [i_3]), (arr_6 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                {
                    var_19 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2829))))), (arr_11 [18])))), ((-(min((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)147))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)12483)))))));
        arr_22 [(unsigned char)16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2630325406U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12495))) : ((~(18446744073709551604ULL)))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))));
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
    {
        arr_25 [(short)0] = ((/* implicit */signed char) (unsigned char)147);
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1367001231160865202ULL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-19654))))) : (max((var_10), (((/* implicit */long long int) (short)12479))))))) ? (((long long int) arr_15 [i_7])) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((int) 7810952163470347094LL))))))))));
    }
}
