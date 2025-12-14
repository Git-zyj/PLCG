/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182256
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
    var_10 ^= var_0;
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */int) var_1)) | ((~((~(var_8))))))))));
    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) var_6));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)21466)) : (((/* implicit */int) (unsigned char)9)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_1))))))) > (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) ((signed char) arr_2 [i_0] [i_1] [i_2]))) : ((-(((/* implicit */int) (unsigned char)247))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]);
                                var_15 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)9));
                                var_16 &= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (15737209045853874438ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) (+(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [19ULL])))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [20LL] |= ((/* implicit */long long int) max((min((arr_2 [i_0] [i_1] [i_2 - 3]), (arr_2 [i_0] [i_1] [i_2]))), (max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) > (-1LL)))), (min((((/* implicit */unsigned short) (unsigned char)9)), ((unsigned short)33838)))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) != (17070539753809522944ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_2]))) > (4244237887U))))) : (min((arr_6 [(signed char)18] [i_0] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */long long int) arr_1 [i_0])))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_0])) ? ((~(var_8))) : (var_7))))));
                    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [(short)12] [i_1] [i_1] [i_1] [i_2] [i_1]))) || (((/* implicit */_Bool) (-(arr_0 [i_0 + 1] [i_1]))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (unsigned char)18))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */unsigned int) (+(var_7)))) : (var_5))))));
}
