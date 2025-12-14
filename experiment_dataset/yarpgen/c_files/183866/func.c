/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183866
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)191)) : (var_7)))) ? ((((((_Bool)1) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)191)))) - (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */int) min(((unsigned char)67), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) var_2)) ? (arr_1 [(unsigned short)2]) : (((/* implicit */int) (unsigned char)0))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (((((+(-1097198149422158855LL))) ^ (min((var_5), (((/* implicit */long long int) (signed char)-81)))))) << (((((/* implicit */int) ((unsigned char) var_2))) - (122)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(var_7)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [(unsigned short)12] [(unsigned short)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) != (arr_0 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_6))))))));
        arr_5 [i_0 + 1] [i_0 + 1] &= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((~(arr_1 [i_0]))) : (var_7))));
    }
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)16)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 2]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_15 [i_1] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (max((((/* implicit */long long int) arr_8 [i_1 - 2])), (arr_13 [i_1]))))) * (min((((/* implicit */long long int) (unsigned char)126)), (((((/* implicit */_Bool) arr_11 [(signed char)8] [(signed char)8])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_16 [i_1] [i_2] [(_Bool)1] [(signed char)10] = ((/* implicit */signed char) (((~((+(((/* implicit */int) (_Bool)1)))))) < ((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        arr_17 [i_1 + 1] = (~((+(arr_10 [i_1] [i_1 - 1] [i_1]))));
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2106197131))))), (((((/* implicit */_Bool) 5435245380293552771LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (3773822943U)))))) ? (((((/* implicit */_Bool) (~(arr_14 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6176466794067086580LL))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 1809115311)) ? (1174526140) : (((/* implicit */int) (unsigned char)83)))))))));
        arr_19 [i_1 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((var_8) ? (7U) : (arr_7 [12LL])))) ? (((/* implicit */long long int) (~(var_1)))) : ((+(var_2))))), (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_7 [5ULL])))), (((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */long long int) var_7)) : (var_2)))))));
    }
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned char)87)))))) > ((~(min((var_5), (((/* implicit */long long int) (signed char)42))))))));
    var_11 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -536936114))))))));
}
