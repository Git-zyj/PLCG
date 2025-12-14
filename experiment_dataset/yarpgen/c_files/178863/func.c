/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178863
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) -7203221384076971719LL);
                var_15 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) max((arr_2 [(unsigned short)9] [i_1]), (arr_2 [i_0] [i_1])))) > (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 2])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_4 [i_0] [7ULL] [i_2]))));
                            var_16 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))), (((unsigned long long int) ((long long int) 2513979183U)))));
                            arr_11 [i_1] [i_1] [i_2] [(unsigned char)13] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
                                arr_19 [i_0 + 1] [i_1] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1780988112U)) ? (((/* implicit */int) (unsigned short)33880)) : (2147483647)));
                                var_18 -= ((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */unsigned short) (signed char)21))));
                                arr_20 [i_5] [i_5] = ((/* implicit */long long int) ((((arr_13 [i_5 + 2] [i_0 + 1] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 3] [i_1] [i_4] [i_5] [i_6] [i_4] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) == (arr_15 [i_0] [i_5] [11LL] [i_0 - 1]))))) : (min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_5] [(unsigned char)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))), (((/* implicit */unsigned int) arr_8 [(signed char)11] [i_5] [i_5] [i_0]))))));
                                arr_21 [i_5] [i_5] [i_6] = ((/* implicit */int) ((min((arr_3 [i_5 + 1]), (((/* implicit */long long int) arr_9 [i_0] [i_6] [i_5] [i_5 + 1])))) - (-1LL)));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [(unsigned char)11] = ((/* implicit */unsigned int) (unsigned char)0);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (4525723866266495175ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_0)))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5152302042410243690ULL)) ? (2147483647) : (((/* implicit */int) (unsigned short)4391))))) ? (((/* implicit */int) (signed char)-2)) : (((((/* implicit */_Bool) 6520066221421606668ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))))))))));
}
