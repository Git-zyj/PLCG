/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180894
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) + (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2 - 1])) ^ (((/* implicit */int) var_5))))), (((((arr_5 [i_0] [(signed char)10] [(unsigned short)5]) % (arr_3 [i_0] [i_0]))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))));
                    arr_8 [i_0] |= ((/* implicit */short) max((((arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 2]) | (((/* implicit */unsigned long long int) 3422823936294559054LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2])) || (((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2] [i_2 - 2])))))));
                    arr_9 [(unsigned short)0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) min((3422823936294559054LL), (-3422823936294559075LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24576))) : (arr_1 [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)51403)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)24552))))) : ((+(var_9)))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)17))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_0 [i_0])));
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (3422823936294559054LL) : (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [5])) ? (((/* implicit */long long int) 3709502936U)) : (arr_6 [i_2 - 1] [i_2] [i_2 - 2])))));
                }
                for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) arr_11 [i_0]))))) ? (max((((/* implicit */long long int) ((var_6) < (((/* implicit */int) arr_11 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_1 [i_3]))))) : (((/* implicit */long long int) (((-(((/* implicit */int) arr_11 [i_0])))) & (((/* implicit */int) var_8))))))))));
                    var_14 = ((/* implicit */unsigned short) 3726844456417233213ULL);
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_1] &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0])) % (((/* implicit */int) arr_14 [i_0]))))), (arr_6 [i_0] [i_1] [(signed char)9])));
                    arr_19 [i_4] [i_0] [i_0] = ((/* implicit */_Bool) min((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)24568))))), (((/* implicit */unsigned long long int) var_0))));
                    arr_20 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_0] [i_0] [i_4]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((arr_16 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) ((short) var_6)))));
                            var_16 = ((/* implicit */unsigned long long int) (+(((long long int) arr_23 [i_0] [i_1] [i_6]))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) (+(13986915881027834927ULL)))))));
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)40937))))), (arr_0 [i_0])))) ? (arr_4 [i_1] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)24590)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) 3726844456417233217ULL);
}
