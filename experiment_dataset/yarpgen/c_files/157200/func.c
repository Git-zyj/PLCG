/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157200
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
    var_19 = ((/* implicit */unsigned char) var_12);
    var_20 = ((/* implicit */unsigned char) var_12);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) + (var_13)))) || (((/* implicit */_Bool) (signed char)-2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_11 [6LL] [i_1] [i_1] [i_3] [i_1] [i_4] [i_1 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_1] [i_3 + 1])))) / (((((/* implicit */int) arr_5 [i_1 + 4] [i_1] [i_1] [i_3 - 1])) + (((/* implicit */int) arr_5 [i_1 - 1] [i_2] [i_1] [i_3 + 1]))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_3 [(unsigned short)2])))) ? (((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [4])) % (((/* implicit */int) arr_8 [12ULL] [12ULL])))) : (((/* implicit */int) arr_8 [(unsigned short)2] [(unsigned short)2])))) > (((((((/* implicit */int) arr_0 [i_4])) - (((/* implicit */int) arr_0 [i_1])))) / (((/* implicit */int) (signed char)-2)))))))));
                                arr_12 [i_1] [(signed char)7] [(signed char)7] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_12)) : (arr_3 [i_1])))) || (((/* implicit */_Bool) arr_0 [i_4]))))) : (var_7)));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_3])) && (((/* implicit */_Bool) 18446744073709551608ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)2)))))) : (max((((/* implicit */int) (unsigned short)17123)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned short)48412))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) min((((long long int) var_11)), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_1] [i_1 + 2])))))));
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) % (16223229602066119233ULL)))) ? (((((((/* implicit */_Bool) 4323888925710836724LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) % (arr_4 [i_1]))) - (47927ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) % (((/* implicit */int) (short)6817))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1])))) : (((/* implicit */int) (!(var_5))))))));
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1] [i_0] [i_0] [5ULL] [i_1]);
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned long long int) (-(var_13)));
}
