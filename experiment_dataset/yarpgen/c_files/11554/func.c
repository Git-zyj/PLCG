/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11554
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (329467288) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)17818)) : (((/* implicit */int) arr_8 [(unsigned char)5] [(unsigned char)5])))))) / (((/* implicit */int) (unsigned char)246))));
                    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 - 1])))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1] [i_2 - 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 2])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_4 [i_1] [i_1] [i_2])))) ? (3044899833581438220ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15401844240128113396ULL)) ? (var_1) : (((/* implicit */unsigned int) arr_2 [i_2])))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((15401844240128113418ULL) <= (3044899833581438225ULL))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_19 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)115);
                            var_15 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_18 [i_2] [i_2 - 1] [i_2] [i_2] [6ULL] [6ULL])) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [i_2 + 1] [i_2 - 1] [i_3] [i_1])) <= (((/* implicit */int) (signed char)59))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8)))))) * ((+(18446744073709551615ULL))))))));
                            var_17 -= ((/* implicit */signed char) ((unsigned long long int) (((!(((/* implicit */_Bool) (signed char)119)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -536870912)) : (4882367364406716209ULL))))));
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) > (((/* implicit */int) max((((unsigned short) arr_22 [i_2])), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_19 = arr_11 [i_3] [i_1] [i_3] [i_3] [i_3];
                            var_20 -= (((~(15401844240128113395ULL))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? (422480455813442312LL) : (((/* implicit */long long int) 2125756461U))))) ? (arr_6 [i_2 + 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_3]))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) -6940689815608487700LL))));
                            var_23 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-1904646253077754165LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8244793824330314633LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_6] [i_6]))))) ? (-5366671633776938469LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_6])) : (var_1))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_24 -= ((/* implicit */unsigned char) max(((short)504), (((/* implicit */short) (unsigned char)136))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_7]))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) / (((/* implicit */int) (unsigned short)65519))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (max((-3978106834615525342LL), (((/* implicit */long long int) (unsigned char)192)))))))))));
                            var_26 = -3978106834615525361LL;
                            var_27 = ((/* implicit */unsigned short) (-2147483647 - 1));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_2 + 1] [i_2])))))));
                            var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [2ULL] [i_8 - 1]))));
                            arr_33 [6] [6] [i_1] [6] [i_8 - 1] [i_8 - 1] = ((/* implicit */int) ((737653749) == (arr_16 [i_0] [i_2 - 2] [i_0] [i_8 + 1])));
                        }
                    }
                    for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        var_30 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)103))))));
                        var_31 = ((/* implicit */int) 11692911502348006232ULL);
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 3; i_11 < 12; i_11 += 3) 
                        {
                            var_32 = ((/* implicit */int) 2147483647LL);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7050075343261717839ULL)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) (short)6813)))))));
                    }
                }
            } 
        } 
    } 
    var_35 -= var_7;
    var_36 = ((/* implicit */_Bool) (-(max((var_0), (((/* implicit */unsigned int) (unsigned short)22974))))));
    var_37 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) var_2)), (var_0)))))));
}
