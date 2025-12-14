/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173941
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
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_11)))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45915)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) & (arr_3 [(short)6] [i_0] [(short)6]))))))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned short)19649))))), (((int) arr_0 [(_Bool)1] [(_Bool)1])))), (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_1 - 2])))) : (((((/* implicit */int) (unsigned char)42)) * (((/* implicit */int) (unsigned char)119)))))))))));
                        arr_10 [(_Bool)1] [i_0] [i_2 + 1] [i_3] = ((/* implicit */long long int) var_11);
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */unsigned long long int) 181627953)) : (689448447643565351ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 309606544597917951LL))))))))));
                        var_16 = ((((/* implicit */_Bool) 8967577)) ? (7446530032890876329ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_2] [i_0] = ((/* implicit */signed char) arr_8 [i_4] [i_1 - 2]);
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 3578599257360332519ULL)) ? (((/* implicit */int) (_Bool)1)) : (8967587)));
                        var_18 = ((((/* implicit */_Bool) -8967595)) ? (arr_3 [i_1 + 1] [i_1 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
                        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (((int) arr_13 [0ULL] [16U] [(_Bool)1] [16U])) : (((/* implicit */int) arr_4 [i_1 - 3] [i_2 + 2] [i_5])))))));
                            arr_19 [i_0] [(short)14] [i_2] [i_0] [(_Bool)1] [(_Bool)0] [i_5] |= ((/* implicit */unsigned char) (!(var_0)));
                        }
                        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            arr_24 [i_0] [(unsigned short)6] [i_2 - 2] [i_6] [(unsigned short)6] [i_2 - 2] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [(short)18] [i_0])) ? (14749660202698114127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)118)) || (((/* implicit */_Bool) (short)12288))))) : ((-(((/* implicit */int) (unsigned short)3583))))));
                            arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_18 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1] [i_0]) > (arr_18 [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_0])));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_0] [i_1] [(short)13] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)36754)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned char)132))))));
                        arr_28 [i_0] [i_0] [i_2] [i_7 + 1] = ((/* implicit */int) arr_2 [i_0]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) var_3);
                        var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((-1975743476) & (((/* implicit */int) (unsigned short)28617))))), (var_4)));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 3) 
                        {
                            arr_34 [i_9] [i_8] [i_0] [i_0] [i_1] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 97270760)) ? (((/* implicit */int) (short)9916)) : (495997827)))) & (((unsigned long long int) var_5))));
                            arr_35 [i_0] [i_1 + 1] [14LL] [(signed char)9] [i_1 - 3] = ((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 3] [i_1]);
                            arr_36 [i_0] [(short)12] [i_0] [20] [i_0] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 2] [14ULL])) : (((/* implicit */int) arr_4 [i_1] [i_1 - 3] [i_1 - 3])))), ((~(8967586)))));
                        }
                    }
                    var_25 = ((/* implicit */int) var_3);
                    arr_37 [i_0] [i_0] = ((/* implicit */_Bool) (short)-18454);
                }
            } 
        } 
    } 
    var_26 = var_9;
    var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_0)) : (var_5)));
}
