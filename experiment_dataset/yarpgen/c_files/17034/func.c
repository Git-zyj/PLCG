/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17034
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    var_12 = ((/* implicit */unsigned short) 3737233670U);
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((arr_1 [i_0 - 1] [i_0]) ? (((min((((/* implicit */int) arr_2 [i_0 - 2])), (var_6))) / (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0 + 3] [i_0])))))) : (((/* implicit */int) (unsigned short)18366)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_0 + 1])) < (((((/* implicit */int) (unsigned short)3072)) >> (((var_7) - (1211708654U))))))) ? ((+((~(var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))))))));
            /* LoopSeq 3 */
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((arr_6 [i_2] [i_2 - 1] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))))) << (((((((/* implicit */_Bool) (unsigned char)23)) ? (arr_6 [i_1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))))) + (2711589171449633232LL)))));
                arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) (unsigned short)255));
            }
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2] [i_3]))))) == (((((/* implicit */_Bool) arr_5 [0LL])) ? (((/* implicit */int) arr_3 [i_0 + 4])) : (((/* implicit */int) (signed char)-1))))));
                arr_13 [i_0] [i_3] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_12 [i_1] [i_1] [0ULL] [i_1]))))));
                arr_14 [i_0 - 1] [i_1] [i_3] [i_3] |= ((/* implicit */short) -430185373);
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18366))) : (arr_16 [i_0] [i_1] [i_3] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) (short)-17)))))))))));
                }
                for (int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    var_19 -= ((/* implicit */short) ((int) (unsigned short)15710));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)18366)) ? (arr_6 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (((/* implicit */long long int) arr_5 [i_0]))))) ? (max((((/* implicit */long long int) var_0)), (-9194346746534184591LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_22 [i_5] [i_1] [(unsigned short)0] [i_5] = ((/* implicit */signed char) -9194346746534184591LL);
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [7U] [i_3] [i_1] [i_0])) << (((((arr_6 [i_0] [i_1] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (2711589171449633140LL)))))) ? (-3230969241670069277LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (short)-9001)) : (arr_20 [i_0] [i_1] [i_5] [i_0] [i_1] [i_0]))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(-3230969241670069277LL)))) ? (((((/* implicit */long long int) 994393742)) ^ (9194346746534184591LL))) : (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) var_3)) : (arr_6 [i_5] [i_1] [i_0]))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)110)) ? (arr_8 [i_0 - 1] [i_1] [i_3]) : (((/* implicit */int) arr_1 [i_1] [i_0]))))))))));
                }
                for (int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    var_23 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_3])))) > (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)1)))) && (((/* implicit */_Bool) (signed char)-5)))))));
                    var_24 = ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) (unsigned short)8190)))), (((/* implicit */int) (unsigned char)52))))));
                }
            }
            for (unsigned short i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((((/* implicit */int) arr_2 [3ULL])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_7 - 2]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */int) (unsigned char)73)))))))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((unsigned int) min(((unsigned short)35627), (((/* implicit */unsigned short) (_Bool)1)))));
                            var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 9223372036854775793LL)) ? (9194346746534184590LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7 + 1] [i_0 + 4]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_7 - 2] [i_7 - 1])))))));
                            arr_34 [i_0] [i_1] [i_1] [i_7] [i_7] [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((14601686957435027303ULL), (((/* implicit */unsigned long long int) (unsigned short)40362))))))) ? (((/* implicit */int) (_Bool)0)) : (arr_32 [i_8])));
                            var_28 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_8 [i_0 - 1] [i_0 - 1] [i_7 + 1])) / (-9194346746534184591LL))) << (((var_7) - (1211708617U)))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0 - 1] [i_10])) ? (arr_30 [i_0] [i_0] [i_0 - 2] [i_0]) : (arr_30 [i_0 + 3] [i_0] [i_0 - 2] [i_0])));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~((-(((/* implicit */int) arr_19 [i_0] [i_0 + 2] [i_0] [i_10])))))))));
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
        {
            arr_41 [i_11] = ((_Bool) min((((((/* implicit */_Bool) (short)18411)) ? (var_3) : (((/* implicit */int) (unsigned short)11)))), (((/* implicit */int) (unsigned short)53921))));
            var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_11] [3ULL])) || (((/* implicit */_Bool) arr_29 [i_0] [i_11] [i_0] [i_11] [i_0 + 3]))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                for (unsigned int i_13 = 1; i_13 < 11; i_13 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!((_Bool)0)))), ((((-(-9223372036854775794LL))) ^ (-5271549371225472559LL)))));
                        arr_46 [i_0 - 1] [i_11] [i_12] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11] [i_11]))) & (arr_11 [(signed char)12] [i_12] [(signed char)12])))))) >= (288230375614840832LL)));
                    }
                } 
            } 
        }
        arr_47 [i_0] = ((/* implicit */unsigned char) min((min((((((/* implicit */int) arr_36 [i_0] [i_0 + 4])) & (((/* implicit */int) (unsigned short)65506)))), (((/* implicit */int) ((unsigned char) (short)24251))))), (var_5)));
    }
}
