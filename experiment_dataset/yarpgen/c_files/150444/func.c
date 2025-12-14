/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150444
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 3] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [(_Bool)1] [i_2] [(signed char)3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(unsigned char)9] [(_Bool)1]))))) : (arr_1 [i_4 - 1])))) * ((((+(arr_9 [i_2]))) / (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_2] [i_3] [i_4 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_4 - 1])) : (4631203758580619570ULL)))) ? ((+(((((/* implicit */_Bool) arr_8 [12] [i_3] [i_2] [i_1] [1ULL])) ? (arr_0 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21359))))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [12ULL] [i_0 + 1] [i_0 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -4306758136715119743LL)) : (var_4))) & (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (var_13)))) && (((/* implicit */_Bool) var_12)))))) : (min((((/* implicit */unsigned long long int) var_7)), (13815540315128932045ULL)))));
}
