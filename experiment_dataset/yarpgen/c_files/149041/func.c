/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149041
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
    var_15 = ((/* implicit */short) ((min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) 2905235495U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (signed char)-61)))) == (((/* implicit */int) min(((unsigned char)143), (((/* implicit */unsigned char) var_0)))))))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 8; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_13 [i_3] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_1] [i_1] [i_3 + 1] [i_0]) << (((((((/* implicit */int) arr_7 [i_3])) + (77))) - (15)))))) ? (arr_1 [i_1 - 1]) : ((-(1021102197)))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_1] [i_1] [i_3 + 1] [i_0]) << (((((((((((/* implicit */int) arr_7 [i_3])) + (77))) - (15))) + (26))) - (8)))))) ? (arr_1 [i_1 - 1]) : ((-(1021102197))))));
                            arr_14 [(unsigned short)2] [i_4] [(unsigned short)1] [i_0] [i_4] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_3 - 2]))) * (var_2)));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_3 - 4])) ? (arr_6 [i_0] [i_1 + 1] [i_0] [i_3 - 2]) : (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_4] [i_3] [i_1 + 1] [i_3 + 2])))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_7 [i_0]))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (0LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535)))))));
                        }
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [i_2] [7U] [i_3 + 2] [i_3 + 1])) ? (arr_8 [i_0] [i_1 - 2] [i_2] [2LL] [i_3 + 2] [i_3 - 3]) : (arr_8 [i_1] [i_1 - 2] [4LL] [i_3] [i_3 + 2] [4LL])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (arr_4 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) != (arr_4 [3LL])))) : (((((/* implicit */int) (signed char)66)) / (arr_0 [3ULL]))))) : (((int) (+(((/* implicit */int) arr_5 [i_0] [i_1 - 2]))))));
                        var_21 ^= ((/* implicit */short) var_10);
                        arr_15 [i_3] = ((/* implicit */long long int) ((_Bool) arr_11 [(signed char)7] [i_1] [(signed char)7] [i_1]));
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((_Bool) arr_4 [i_1 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [i_2])) + (var_8)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)124)) >> (((arr_4 [i_1 - 1]) - (12745656874297955640ULL)))))))) : (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))))))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_1 - 2] [i_1 + 1]))) + (min((arr_2 [i_0]), (((/* implicit */long long int) arr_16 [i_0] [i_1 - 1] [i_2] [i_5])))))) ^ (((/* implicit */long long int) ((((((((/* implicit */int) arr_7 [i_0])) + (2147483647))) >> (((arr_17 [i_5] [i_5] [i_2] [i_1 - 2] [i_0] [i_0]) - (6346177968449809465LL))))) << (((((arr_6 [i_1 - 1] [i_1 - 1] [9ULL] [i_1 - 2]) + (6430739354691282006LL))) - (15LL)))))))))));
                        arr_18 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) max((arr_9 [i_2] [i_1 + 1]), (((/* implicit */unsigned int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))) : ((-(arr_6 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) max((arr_11 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 2]), (((/* implicit */unsigned int) var_14)))))));
                        arr_19 [(_Bool)1] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (short)29631))) ? (((/* implicit */int) ((signed char) arr_7 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_5])) || (((/* implicit */_Bool) arr_12 [i_5] [i_2] [i_0] [i_0])))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0])) & (arr_0 [i_5])))), ((+(var_7))))));
                        arr_20 [i_0] [i_1 - 2] [i_2] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_16 [4U] [8LL] [4U] [i_0])) : (arr_1 [i_5])))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_7 [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 8; i_7 += 1) 
                        {
                            {
                                arr_26 [i_6] = ((/* implicit */_Bool) max((((arr_8 [i_1] [i_1 - 2] [i_1] [i_6] [i_7 - 2] [i_7]) << (((arr_8 [i_0] [i_1 - 1] [i_6] [i_6] [i_7 - 2] [i_7 + 1]) - (1287030613))))), (max((arr_8 [i_1] [i_1 - 1] [i_6] [i_6] [i_7 + 1] [i_7]), (((/* implicit */int) (unsigned short)65514))))));
                                var_25 -= ((/* implicit */unsigned long long int) (-(((long long int) (short)-31794))));
                                arr_27 [i_0] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_1 - 2] [i_7 + 2])))), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1 + 1] [i_1 + 1])) == (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 1] [i_2])))))));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_1 - 1]);
                }
            } 
        } 
    } 
}
