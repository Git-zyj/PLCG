/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169611
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) >= ((-(min((var_9), (((/* implicit */long long int) (signed char)126)))))))))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) -7478642977301916000LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1912992528)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)64))))) ? (((((/* implicit */_Bool) var_7)) ? (6563250866344667266LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (max((((/* implicit */long long int) var_0)), (var_9))))) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_2))))))))))));
    var_13 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */int) (short)0)) & (((/* implicit */int) (signed char)-15)))), (((/* implicit */int) arr_0 [i_0 + 1])))) : (max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_0 [i_0 + 2]))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2]))))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (!(arr_3 [i_1] [i_1])));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_1 + 1] [i_1]))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 2] [i_2] [(_Bool)1] [i_3]))) : (((unsigned long long int) (signed char)126))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_0 [i_5]))));
                            var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3724987920U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21806))) : (arr_8 [i_1] [i_1 - 2])));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */long long int) ((((/* implicit */int) arr_14 [(short)10] [i_2] [i_4] [i_4] [i_4] [i_4])) & (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_6] [i_4] [i_4]))))) < (var_9)))));
                            var_21 = (+(11398235006363074647ULL));
                        }
                        for (unsigned short i_7 = 2; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            arr_22 [i_4] [i_3] [i_1] [11ULL] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
                            arr_23 [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [16]);
                            var_22 = ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_18 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_1 + 1])) : (((/* implicit */int) arr_18 [i_7 - 2] [i_7 - 1] [i_1 - 1] [i_7 + 1] [i_1 - 1])));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (signed char)57))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
                        {
                            arr_26 [i_4] [i_2] [i_2] = ((/* implicit */signed char) arr_17 [i_8] [i_8 - 1] [i_8] [i_4] [i_8 - 1] [i_8]);
                            var_24 |= ((/* implicit */unsigned int) ((arr_2 [i_1 + 2]) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 2]))));
                        }
                    }
                } 
            } 
        } 
        arr_27 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) arr_18 [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) (short)12877))));
        var_25 |= ((/* implicit */short) ((((/* implicit */int) arr_19 [i_1 - 2] [i_1] [i_1] [i_1 - 1])) * (((/* implicit */int) (signed char)87))));
    }
    var_26 += ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (-(10))))));
}
