/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121110
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)71))))), (var_4))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) (-(((var_9) & (min((((/* implicit */unsigned long long int) 1073741823)), (var_7)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (8748238466504649795ULL)));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) 
            {
                var_13 = ((/* implicit */unsigned int) arr_18 [i_4] [i_4 - 2] [i_4]);
                arr_19 [i_4] = ((/* implicit */signed char) ((unsigned short) max((arr_11 [i_0] [i_0]), (((9698505607204901841ULL) << (((var_3) - (17575356614293756961ULL))))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) <= ((+((-9223372036854775807LL - 1LL))))));
                var_15 = (i_4 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_18 [i_4] [i_4 - 2] [i_4])) << (((((/* implicit */int) (short)-22779)) + (22796)))))) : (((/* implicit */short) ((((/* implicit */int) arr_18 [i_4] [i_4 - 2] [i_4])) << (((((((/* implicit */int) (short)-22779)) + (22796))) - (12))))));
            }
            for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((arr_2 [i_0] [13U]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_1] [7LL]), (((/* implicit */unsigned long long int) (unsigned short)9176))))) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_17 [i_0] [4LL] [i_0]), (((/* implicit */unsigned short) (short)22768))))))))))))));
                var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)1)) <= (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61)))))))))) > (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (10315718254037194865ULL))), (((/* implicit */unsigned long long int) var_5))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */_Bool) ((8131025819672356759ULL) - (((/* implicit */unsigned long long int) 821224232))));
            var_18 = ((/* implicit */short) (_Bool)0);
            arr_25 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 2146959360))) ? (((arr_21 [i_0]) & (-382993997))) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (arr_21 [i_6]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_19 |= ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (10315718254037194880ULL))))));
                            arr_33 [i_0] [i_7] [i_0] [i_7] [4U] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) (-(((/* implicit */int) var_4))))))));
                            arr_34 [i_7] [i_0] [(unsigned short)8] [i_8 - 1] [i_7] [i_0] [i_7] = ((/* implicit */unsigned short) max((max((arr_32 [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8]), (var_6))), (((/* implicit */unsigned int) min(((unsigned short)6797), (((/* implicit */unsigned short) arr_12 [i_0] [i_8 - 1] [i_7] [i_8] [i_8 - 1] [i_8 - 1])))))));
                        }
                        var_20 -= max((((/* implicit */short) (!(((/* implicit */_Bool) 0ULL))))), ((short)4604));
                        var_21 = ((/* implicit */long long int) (short)-32763);
                    }
                } 
            } 
            var_22 = ((/* implicit */long long int) max(((-((-(((/* implicit */int) (unsigned short)3564)))))), (((((/* implicit */int) arr_23 [i_0] [5LL])) | (((/* implicit */int) var_0))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
    {
        arr_37 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (-(var_6)));
        arr_38 [i_10] [(signed char)4] = ((/* implicit */unsigned int) ((var_9) >= (((/* implicit */unsigned long long int) ((long long int) var_5)))));
        arr_39 [i_10] [i_10] = ((/* implicit */int) var_9);
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), ((~(var_7)))));
}
