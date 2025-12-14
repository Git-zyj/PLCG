/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126786
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)28)) + (((/* implicit */int) (short)-23)))), (((/* implicit */int) max((var_6), ((short)22553))))))) + ((+(((((/* implicit */_Bool) (short)15610)) ? (arr_4 [4U] [(short)4] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (arr_1 [i_2])));
                        arr_8 [i_0] [i_1] [(_Bool)0] [i_3] [10] [12ULL] &= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_2 [i_0]))) & (((/* implicit */int) var_13))));
                        var_17 += ((/* implicit */short) (((~(arr_7 [i_0] [i_1] [(signed char)11]))) + (((/* implicit */int) var_10))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */long long int) (short)-32747)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -8256184697087406690LL)), (0ULL)))) ? ((-(1067440274))) : (((((/* implicit */int) var_8)) + (((/* implicit */int) (short)-23)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                        {
                            var_19 = max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)32747)) % (((/* implicit */int) (short)22553))))))), ((~((+(var_5))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_5 [i_5 + 1] [i_4 - 1] [i_2 + 3] [i_0]) == (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (var_3)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 2] [i_4] [4U])))))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10695272509223927638ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_6])) : (((((/* implicit */_Bool) -1403582306)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)32747))))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_14 [i_6] [i_2] [9LL] [i_2 - 2] [i_6 + 1]))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_2 - 2] [i_0])) ? (arr_16 [i_0] [i_2 - 2] [i_0]) : (((/* implicit */unsigned int) arr_7 [i_4 - 1] [i_2 - 1] [i_2 + 2]))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_11)) + (((/* implicit */int) var_6))))))) : (min((arr_17 [1] [1] [i_2 - 3] [i_4 - 1] [(_Bool)1] [i_6 - 1]), (((/* implicit */unsigned long long int) (unsigned char)57))))));
                        }
                        arr_19 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (min((((unsigned int) var_9)), (((/* implicit */unsigned int) var_6))))));
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
                        arr_25 [i_0] [(short)11] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (short)-32747)), (arr_1 [i_7]))), (((/* implicit */unsigned long long int) (~(-74219438457719473LL))))));
                    }
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32747))))), ((-(((/* implicit */int) var_2))))))) ? (((((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ^ (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))));
}
