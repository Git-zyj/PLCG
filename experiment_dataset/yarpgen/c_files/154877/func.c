/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154877
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) (short)-14442))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    arr_10 [i_2] [i_1] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)23091)), (arr_7 [i_0] [i_0] [i_1] [i_1])))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))))), (((((unsigned long long int) var_10)) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 92910992)) - (4552830280615717916LL)))))));
                    var_11 = ((min((9136366646366347288ULL), (min((var_10), (562949953388544ULL))))) * (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1718605408317454323LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25290)))), (arr_2 [i_1] [i_1])))));
                    arr_11 [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned char)94))));
                    arr_12 [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned char)94), (((/* implicit */unsigned char) (_Bool)1))))), (3828474364U)))) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) (_Bool)1))));
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (short)27853)) ? (max((max((((/* implicit */unsigned long long int) 4294967295U)), (8840755559613636189ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1969248012)), (4294967295U)))))) : (((/* implicit */unsigned long long int) 4294967295U)))))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_8 [4U] [i_0] [i_0] [i_3]) ? (562949953388546ULL) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))) & (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */unsigned int) (unsigned short)0)))))))) ? (arr_3 [i_3] [i_3 - 1] [i_3]) : (min((((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_0])) ? (1609834016) : (((/* implicit */int) (short)-22680)))), (((/* implicit */int) ((arr_2 [i_1] [i_0]) > (((/* implicit */int) (unsigned char)207))))))))))));
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65472)) >> (((/* implicit */int) arr_8 [i_0] [(unsigned char)8] [i_1] [i_3]))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)32749)), (1938870364U)))), (arr_4 [i_0] [(_Bool)1] [i_0])))));
                    var_14 = ((/* implicit */unsigned long long int) (short)25977);
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [3ULL]))) : (2531329285U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) var_2))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_5] [i_5] &= ((/* implicit */short) (-(12839394305828385273ULL)));
                        var_16 = arr_17 [i_0] [i_5];
                        var_17 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) 1248130779U)) == ((+(1663202763396886608ULL)))));
                    }
                    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) var_1);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [i_4] [i_4] [i_4 - 2] [i_4 - 1]) ? (((/* implicit */int) var_2)) : (-511976577)))) ? (((((/* implicit */_Bool) (short)-20260)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_0])) ? (511976576) : (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [i_1] [i_6])))))))));
                    }
                }
                var_20 = max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-25978))))), (0ULL))), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_0] [i_1] [i_0])));
            }
        } 
    } 
    var_21 &= ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)58035)), (2773974766U)))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (7172567369115828483LL) : (((/* implicit */long long int) -511976577))))))));
    var_22 -= ((/* implicit */unsigned short) var_7);
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (short)-27))))) ? (((((/* implicit */unsigned long long int) -2096864013147992435LL)) - (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((short) (~(3217834676U))))) : (511976576));
    var_24 = ((((/* implicit */_Bool) max((var_4), (var_1)))) ? (((((/* implicit */_Bool) (+(562949953388546ULL)))) ? (((((/* implicit */_Bool) -511976576)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3)))) : (max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)167)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))));
}
