/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100910
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)51))));
                            var_11 &= ((/* implicit */unsigned char) 4294967270U);
                            var_12 &= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (663856605)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(4294967295U)))))), (var_5)));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) (unsigned short)21393)) ? (0LL) : (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) ((signed char) (unsigned short)21393))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-22788)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_16 [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) arr_12 [i_0] [i_1 + 1] [i_0] [i_5]);
                            arr_17 [i_0] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((min((((/* implicit */int) arr_0 [i_4])), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)28942)))))) != (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-4669)), ((unsigned short)14221)))) >> (((((((/* implicit */_Bool) arr_12 [(short)0] [i_1 - 1] [(unsigned char)10] [i_5])) ? (arr_7 [i_1] [i_1] [i_1] [i_5] [3U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 3] [i_1]))))) - (1580119548U)))))))) : (((/* implicit */unsigned char) ((min((((/* implicit */int) arr_0 [i_4])), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)28942)))))) != (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-4669)), ((unsigned short)14221)))) >> (((((((((/* implicit */_Bool) arr_12 [(short)0] [i_1 - 1] [(unsigned char)10] [i_5])) ? (arr_7 [i_1] [i_1] [i_1] [i_5] [3U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 3] [i_1]))))) - (1580119548U))) - (1615571596U))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 4; i_6 < 10; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (short)-12309)) : (((/* implicit */int) var_1)))) + (((((/* implicit */_Bool) (unsigned char)56)) ? (var_0) : (-1)))));
                            arr_24 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_0] |= ((/* implicit */long long int) arr_14 [(unsigned short)6] [i_1] [(unsigned short)6]);
                            arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((short) var_5)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) var_0)) ? (4227529480994220797ULL) : (((/* implicit */unsigned long long int) var_6)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)39)), (var_7)))))));
    var_16 += ((/* implicit */unsigned int) ((unsigned char) var_1));
}
