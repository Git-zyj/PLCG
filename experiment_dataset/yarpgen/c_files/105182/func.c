/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105182
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
    var_18 *= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)2796))))) || (((/* implicit */_Bool) var_4))))), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (var_17))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)199)))))))));
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-8501)) >= (((/* implicit */int) var_16))))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))), (var_11)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((int) (signed char)-41));
                    var_20 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 17U)) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])) >> (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [6LL] [i_0])) < (((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [i_1])))))));
                }
                arr_9 [i_0] [i_1] &= ((/* implicit */unsigned int) (unsigned short)7680);
                var_22 = ((/* implicit */signed char) max(((unsigned short)21954), ((unsigned short)43582)));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_2 [i_3])))) || (((/* implicit */_Bool) ((signed char) arr_0 [i_0]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_14 [i_0] [6ULL] [4ULL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2538437095744206928LL)) ? ((-(-190772483))) : (((/* implicit */int) (unsigned short)43571))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17269))))))));
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned char)6)) << (((((/* implicit */int) (short)-17266)) + (17281))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                {
                    var_25 |= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    arr_19 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((short) (-(arr_17 [i_5] [i_1] [i_0]))));
                    arr_20 [i_0] [i_1] [(unsigned short)6] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0]);
                    arr_21 [i_0] [i_1] [i_5] = ((/* implicit */int) var_4);
                }
                for (unsigned int i_6 = 3; i_6 < 8; i_6 += 3) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) var_13)) - (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)124)), (min(((unsigned short)7676), (((/* implicit */unsigned short) var_1))))))))))));
                    arr_26 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_0))))), (var_17)))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_2)))))))) % (var_11)));
}
