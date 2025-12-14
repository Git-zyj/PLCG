/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178038
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */signed char) ((_Bool) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) (short)511)))) >= ((-(((/* implicit */int) (short)-511)))))));
                var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 9576018083784861315ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0] [9U]))))))))));
                arr_5 [i_1] [i_1] [0ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_1 [i_0 - 1] [i_0 - 1])))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 8870725989924690301ULL))) ? ((+(arr_4 [i_0 - 1] [i_0 - 1]))) : (max((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 - 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                            {
                                arr_18 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_17 [i_2] [i_2] [i_4] [i_5] [i_6] [22U] [(short)7]);
                                arr_19 [i_2] [(signed char)7] [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) var_4);
                            }
                            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3] [(signed char)13]))) % (arr_12 [i_5] [i_5] [i_5])))))))));
                                var_20 = (short)26891;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                            {
                                arr_26 [i_2] [4LL] [i_5] [4LL] [i_8] [4LL] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)17033)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17435))) : (var_5)))));
                                arr_27 [15] = ((/* implicit */short) arr_22 [i_2] [i_3] [i_3] [i_2] [i_8]);
                            }
                            arr_28 [i_5] [i_4] [17U] [i_2] [i_2] [i_2] = (-((-(((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2])))));
                            var_21 -= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_20 [i_2] [12ULL] [22U])), ((+(((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) ((var_9) == (((/* implicit */long long int) (~(3740487457U)))))))));
                        }
                    } 
                } 
                arr_29 [i_2] [i_2] [i_2] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (13556157163858786407ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) (_Bool)0))));
                arr_30 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_6 [i_2 - 1])))) == (((unsigned long long int) (-(((/* implicit */int) arr_9 [i_3] [14] [i_2 - 1])))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) * (((long long int) (-(((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
}
