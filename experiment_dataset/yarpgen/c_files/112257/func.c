/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112257
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
    var_10 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31))) : (-8200857496094404104LL))), (((/* implicit */long long int) max((var_4), (min((((/* implicit */unsigned short) (unsigned char)220)), (var_4))))))));
    var_11 = ((/* implicit */int) var_8);
    var_12 = ((/* implicit */unsigned char) max((((unsigned int) max((((/* implicit */unsigned short) (short)256)), ((unsigned short)15360)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)31)) : (((int) 4294967272U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) -405619631547940090LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_2] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) ((unsigned int) min((var_3), (((/* implicit */unsigned long long int) arr_6 [i_2] [2LL] [2LL] [i_0] [(unsigned char)12] [10])))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)55)), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-100)) & (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [11LL] [i_1] [i_4] [i_1]))) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((901287613U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_1 - 1] [i_2]) ^ (((/* implicit */unsigned long long int) arr_7 [i_0] [(signed char)2] [i_0] [i_1 - 1] [i_2] [i_2])))))))) & (((/* implicit */int) max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]), (((/* implicit */short) ((_Bool) (_Bool)0))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        arr_16 [12LL] [12LL] |= ((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((20ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18721))))))) : (min((var_0), (((/* implicit */unsigned long long int) var_5)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])) < (var_0))))));
                        arr_17 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_0] [i_2] [i_0] [i_1 - 1] [i_5 - 2] [i_5 - 2])), (arr_9 [i_2] [i_2] [i_1] [i_1 - 1] [i_5 - 2])))) <= (((((/* implicit */_Bool) -1)) ? (var_9) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_0] [i_1] [i_1 - 1] [i_5 - 2]))))));
                        arr_18 [i_0] [i_0] [i_0] [i_2] = max((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (short)-3598)) || (((/* implicit */_Bool) var_3))))))), (min((((((/* implicit */_Bool) var_0)) ? (12349250348544644421ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -431939291891238201LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-36))))))));
                    }
                    arr_19 [i_2] = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
}
