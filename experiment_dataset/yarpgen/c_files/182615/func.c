/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182615
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
    var_10 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((int) (+(var_1))))), (min((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_1 [i_0]))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (-936044520527613307LL) : (((/* implicit */long long int) 1381582844U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_2 [i_0] [i_1]) : ((-(arr_2 [(_Bool)1] [(unsigned short)7])))))) : (((((/* implicit */_Bool) max(((unsigned short)30983), (((/* implicit */unsigned short) var_3))))) ? (max((((/* implicit */unsigned int) var_7)), (arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [4] [4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)34248)))))))));
                arr_6 [4U] [i_1] &= max((var_7), (((((/* implicit */_Bool) (unsigned short)34249)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned char)132)))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) min((arr_4 [(signed char)14]), (((/* implicit */unsigned short) var_5))))) ? (min((3160350361877257132ULL), (((/* implicit */unsigned long long int) (signed char)5)))) : (((((/* implicit */_Bool) var_9)) ? (5931582654888335126ULL) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) -1495363502))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_12 &= ((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_2 - 2])) << (((var_6) - (1642859377))))), ((~(((/* implicit */int) (signed char)5))))));
                                var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_1] [i_2] [(signed char)6])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (short)31701)))) : ((+(((/* implicit */int) arr_9 [i_1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
