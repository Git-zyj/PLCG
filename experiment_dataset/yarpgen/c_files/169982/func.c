/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169982
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
    var_12 -= ((/* implicit */signed char) (~((~(max((15913449572505259254ULL), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)143))))) : (15913449572505259254ULL))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_4 [i_0] [i_1]))));
                    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((arr_6 [i_0 + 1] [i_0]) ? (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])), (arr_4 [i_2] [(signed char)3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)0)))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    arr_10 [i_3] |= ((/* implicit */unsigned char) (~(var_7)));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_3] [(unsigned short)4] [i_5] |= ((/* implicit */int) ((unsigned long long int) arr_8 [i_3 - 2] [i_4 + 1] [i_0 + 1]));
                            arr_19 [i_4] [i_5] = ((/* implicit */_Bool) (-(((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24618))) / (2963670456522585433LL))))));
                            arr_20 [i_0] [i_1] [(unsigned short)12] [(_Bool)1] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_0] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_1] [(short)8] [i_4] [i_4] = (~(3055131077U));
                            var_17 ^= ((/* implicit */signed char) (+(arr_4 [i_0] [i_4 + 1])));
                            arr_25 [i_6] [i_6] [i_4] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */signed char) var_0);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_3 + 1] [i_3 - 2]))) : (arr_15 [i_0] [i_1] [i_0] [i_4] [i_3 - 2] [i_3 - 2]))))));
                            var_19 += ((/* implicit */unsigned short) (~(arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }
                        var_20 ^= ((/* implicit */unsigned char) ((arr_5 [i_0 + 1] [i_0]) % (arr_5 [i_0 + 1] [i_0 + 1])));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_28 [i_0] [(unsigned char)3] [i_0] [i_7] [i_0] [(short)1] = ((/* implicit */short) ((arr_7 [i_7 + 1] [i_0 + 1]) << (((arr_5 [i_3 - 2] [i_7 + 1]) - (10341544349387064188ULL)))));
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (short)-1638))) ? ((+(((/* implicit */int) var_1)))) : (((4194303) * (((/* implicit */int) (_Bool)1))))));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) max((var_4), (var_4)))) >= (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))))));
                    var_23 = ((/* implicit */unsigned long long int) (short)28032);
                    var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min(((unsigned short)52045), (((/* implicit */unsigned short) (signed char)-59)))), (((/* implicit */unsigned short) max((arr_1 [i_0]), (var_2))))))) ? ((+(var_7))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (short)-10947))))), (arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])))))));
                }
            }
        } 
    } 
    var_25 = var_8;
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 24; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_37 [i_11 - 1])) - (((/* implicit */int) arr_37 [i_11 - 1])))))))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((max(((~(arr_35 [i_9]))), (((((/* implicit */int) var_1)) << (((var_7) - (7346878655602584725LL))))))), (((/* implicit */int) arr_40 [i_13 - 2] [i_12 + 1])))))));
                            }
                        } 
                    } 
                    arr_45 [i_9] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_46 [i_9] = ((/* implicit */signed char) min((max((arr_35 [i_9 + 1]), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)13514)))) || ((!(((/* implicit */_Bool) arr_33 [i_9])))))))));
                    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_39 [i_9] [i_9] [i_10] [i_11 + 1])), (2533294501204292362ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_43 [i_9] [i_9] [(_Bool)1] [(short)23])))) : (((((/* implicit */_Bool) (short)12288)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2160)))))))) ? (((/* implicit */unsigned long long int) arr_36 [i_9] [i_10] [i_11 - 2])) : ((+(((((/* implicit */_Bool) var_7)) ? (var_8) : (var_8)))))));
                }
            } 
        } 
    } 
}
