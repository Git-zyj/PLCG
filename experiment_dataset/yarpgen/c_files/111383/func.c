/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111383
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((var_13), (((/* implicit */short) var_3)))))))), (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_2))))), (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 *= ((((/* implicit */_Bool) min((arr_1 [i_1]), (max((((/* implicit */unsigned long long int) var_12)), (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1]))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0])))))) : (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (_Bool)0)), (2147483642)))))));
                var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_10), (var_10))))))), (min((((arr_3 [i_0]) << (((arr_1 [i_0]) - (6899811747986270281ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))))) : (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_10), (var_10))))))), (min((((arr_3 [i_0]) << (((((arr_1 [i_0]) - (6899811747986270281ULL))) - (14677203665978879878ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_7 [i_0] = ((/* implicit */int) ((min((max((16567618331682751699ULL), (4277287918890443766ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) == (max((((arr_1 [i_0]) % (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_1 [i_0]))))))));
                    arr_8 [i_0] [i_0] [6U] = ((/* implicit */int) arr_5 [(signed char)1] [i_1] [i_0]);
                    var_18 = ((/* implicit */signed char) ((unsigned long long int) min((((var_5) ? (((/* implicit */unsigned long long int) var_11)) : (arr_3 [i_2]))), (((/* implicit */unsigned long long int) var_13)))));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [i_0] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-1)), (5918637634897295181LL)));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)1))));
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))), (((((((/* implicit */int) arr_15 [i_0] [i_1] [6LL] [i_0] [i_6 - 1])) == (((/* implicit */int) arr_9 [i_0] [i_0])))) ? (min((((/* implicit */long long int) arr_6 [i_4] [i_4] [i_4] [i_5])), (var_2))) : (((/* implicit */long long int) max((var_9), (((/* implicit */int) var_6)))))))));
                                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_0] [i_6 + 2] [i_0] [i_6 + 1] [i_6] [i_1] [i_1]))) ? (((/* implicit */int) arr_17 [i_1] [i_6 + 2] [i_6] [i_6 + 1] [i_6] [i_1] [i_1])) : (((/* implicit */int) max((arr_17 [i_1] [i_6 - 1] [i_1] [i_6 + 1] [i_6 - 1] [i_1] [i_6]), (arr_17 [i_5] [i_6 + 1] [i_6] [i_6 + 2] [i_6 + 1] [i_1] [i_6 + 2]))))));
                                var_23 = ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (int i_8 = 3; i_8 < 15; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_7])), (var_4)))) == (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_18 [i_8]))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (711776195047727883ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))));
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                arr_32 [i_8] [i_8] [i_11] [i_10] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_24 [i_10] [(unsigned char)13] [(unsigned char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_22 [i_10] [i_9] [i_11]))), (((/* implicit */unsigned long long int) min((arr_25 [i_7]), (((/* implicit */int) var_0)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_29 [i_11] [i_11])))))))) : (((/* implicit */int) min((arr_24 [i_8 - 1] [i_8 + 1] [i_8 + 3]), (((/* implicit */signed char) arr_29 [i_7] [i_7])))))));
                                arr_33 [i_8] [(unsigned char)6] [i_9] [i_10] [i_9] = ((/* implicit */short) ((unsigned char) arr_31 [i_7] [i_7] [i_8 - 3]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) || (var_12))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) + (var_11));
}
