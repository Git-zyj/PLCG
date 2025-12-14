/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188034
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
    var_18 = (~(((((/* implicit */_Bool) -7230585243789812608LL)) ? (5818092342501247311ULL) : (7044201567145787311ULL))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = (~((~(7044201567145787311ULL))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) (~((~(max((var_11), (arr_6 [i_0])))))));
                                arr_17 [0ULL] [18U] [0ULL] [i_2] [18U] [12ULL] &= ((((/* implicit */_Bool) arr_10 [12ULL] [i_1] [i_1] [i_1] [i_1 - 3] [i_1 + 2])) ? ((~(arr_10 [12ULL] [i_1 + 2] [12ULL] [(unsigned char)12] [i_1 + 3] [i_1 + 3]))) : ((~(2545610415U))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8516115480814744940LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_8 [(unsigned char)3] [i_0] [i_0])))) != ((-(arr_14 [i_1 - 1] [i_2]))))) ? (((((/* implicit */_Bool) 11402542506563764292ULL)) ? (2305280059260272640ULL) : (((/* implicit */unsigned long long int) 8516115480814744938LL)))) : (((((/* implicit */_Bool) 1784814331U)) ? (8817553868085535104ULL) : (((/* implicit */unsigned long long int) 2043366252U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_25 [i_1 - 3] [i_5] &= arr_19 [i_0] [i_0] [i_5] [i_6];
                                arr_26 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 2251601044U)) < (((11402542506563764310ULL) ^ (((/* implicit */unsigned long long int) 2043366252U)))))))));
                                arr_27 [i_0] [i_0] [1LL] [2U] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 3] [i_2] [i_6])), (((unsigned long long int) ((var_7) ? (((/* implicit */long long int) var_10)) : (8008297337983358019LL))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) min((min(((~(var_5))), (((/* implicit */unsigned long long int) (-(8008297337983358015LL)))))), (arr_2 [5ULL])));
                }
            } 
        } 
    } 
}
