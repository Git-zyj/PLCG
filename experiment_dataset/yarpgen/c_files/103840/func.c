/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103840
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 + 1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (+(1798353075))));
                var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-32748))))))) : (min((max((((/* implicit */unsigned long long int) -3306609745421619397LL)), (arr_3 [i_0] [i_1 + 2] [i_0]))), (((/* implicit */unsigned long long int) var_4))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 2] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_2 + 2] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) 3306609745421619381LL)))))));
                            arr_13 [i_1 + 1] [i_0] = ((/* implicit */short) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) -3306609745421619408LL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_0) : (max((arr_6 [i_4] [i_5] [i_4]), ((-(((/* implicit */int) var_1))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 6; i_8 += 3) 
                        {
                            {
                                var_23 = (-(((((/* implicit */_Bool) arr_27 [8] [i_4] [i_8 + 4] [(short)3] [i_8 - 1] [(short)3])) ? (arr_24 [i_7] [i_7] [i_8 + 1] [i_6] [i_8 + 3] [i_8]) : (((/* implicit */unsigned long long int) -1)))));
                                var_24 = ((int) ((16) * (0)));
                                arr_30 [i_4] [i_4] [i_5] [0] [i_6] [i_8 + 4] [i_8] = ((/* implicit */short) var_7);
                                arr_31 [i_4] [4] [(short)8] [i_6] [i_8] = min((((/* implicit */int) ((((/* implicit */_Bool) 324570397)) && (((/* implicit */_Bool) 9))))), ((~((~(((/* implicit */int) arr_19 [i_5])))))));
                            }
                        } 
                    } 
                    arr_32 [i_6] [i_6] [i_6] = ((/* implicit */long long int) 15576295242283267796ULL);
                    var_25 ^= ((/* implicit */unsigned char) arr_23 [8] [i_5] [i_5] [i_5]);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((((int) min((((/* implicit */int) var_4)), (523776)))) ^ (((/* implicit */int) ((15576295242283267775ULL) < (((/* implicit */unsigned long long int) 1319803393)))))));
    var_27 = ((/* implicit */unsigned char) -1);
}
