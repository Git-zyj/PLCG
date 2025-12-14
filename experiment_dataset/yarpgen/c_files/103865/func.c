/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103865
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
    var_14 = ((/* implicit */unsigned short) max((-3550597504615799073LL), (((/* implicit */long long int) (signed char)38))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (signed char)-51);
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_4 [i_0 - 1]), (((/* implicit */unsigned long long int) -3550597504615799053LL)))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned short) min(((~(((18446744073709551615ULL) >> (((((/* implicit */int) (unsigned short)65535)) - (65520))))))), (((/* implicit */unsigned long long int) max(((unsigned short)40910), ((unsigned short)6144))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (-218894575348661874LL) : (3625929711487760548LL)));
                            var_16 -= ((/* implicit */unsigned int) max((18446744073709551603ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) >= (-7450420638376460650LL))))));
                        }
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_21 [i_2] [i_1] [i_1] [i_1] [i_1 + 1] = ((signed char) min((((/* implicit */long long int) (signed char)103)), (-3625929711487760547LL)));
                            var_17 += ((/* implicit */_Bool) min(((~((-(((/* implicit */int) (unsigned short)5)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (arr_6 [i_2 + 1]))))));
                        }
                        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(12758190380642619012ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))))) ? (((max((((/* implicit */unsigned long long int) (unsigned short)27332)), (var_11))) >> (((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) (signed char)127)))) - (7160235442760110560ULL))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_11))))));
                        arr_22 [i_2] [i_2] [0ULL] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned short)24635)), (12729495386183952988ULL))))), (min((((/* implicit */unsigned long long int) ((-3625929711487760539LL) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (max((var_11), (arr_4 [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+(var_12)));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_2 - 1] [i_2 - 1] [4ULL] [i_7])) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) arr_1 [i_7]))))) ? (((/* implicit */unsigned long long int) 3083711988743781220LL)) : (((((/* implicit */_Bool) arr_10 [7U] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_7]))))))));
                    }
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -1267937932)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40923))))) : (min((((((/* implicit */_Bool) (unsigned short)40910)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_2 - 1]))) : (5688553693066932628ULL))), (((/* implicit */unsigned long long int) (unsigned short)65529)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_6), ((!(((/* implicit */_Bool) var_4))))));
    var_23 ^= ((/* implicit */unsigned short) var_11);
}
