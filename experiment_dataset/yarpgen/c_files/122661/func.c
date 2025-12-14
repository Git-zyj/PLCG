/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122661
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (max((arr_5 [i_1 - 3] [i_1 + 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)42000))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (212993289U))))) : (((((/* implicit */_Bool) (unsigned short)33063)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 212993289U)))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 4; i_3 < 21; i_3 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1] [i_1] [13LL] [i_3 - 4]))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)89)), (arr_9 [i_1])))), ((unsigned short)23535))))));
                        arr_16 [i_1] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-97))))), (min((((/* implicit */long long int) (unsigned char)0)), (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_0] [(unsigned short)7] [i_1] [i_0] [i_1] [i_0])), (arr_10 [i_3] [(signed char)20] [i_0] [i_0])))) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 4081974006U))))))))));
                    }
                    for (signed char i_4 = 4; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_12 [i_4 - 1] [i_2] [i_1] [i_1] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_7 [i_1]))))));
                            var_14 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_6 [i_5 - 1] [i_2])))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_18 [i_1]);
                            arr_25 [i_0] [i_1 - 3] [i_1 - 2] [i_2] [i_1] [0U] = ((/* implicit */unsigned short) var_1);
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) var_4)))))));
                            var_16 = ((/* implicit */int) arr_17 [i_4 - 3] [i_4 - 2] [i_4 - 1] [i_1] [i_4 - 4]);
                        }
                        arr_26 [i_0] [i_1] [21LL] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                        var_17 *= ((/* implicit */_Bool) (unsigned short)22339);
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_0] [(unsigned char)20] [i_1] [i_2] [i_7])) << (((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)21847)) : (var_6))) % (((/* implicit */int) var_3)))) - (21830)))));
                        arr_29 [i_1] = ((/* implicit */_Bool) (short)24734);
                        var_19 -= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)72)), (var_8))))))), ((signed char)75)));
                    }
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_7))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) == (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_11)))))), (((((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) var_10)))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) var_2))))))));
}
