/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112453
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (arr_2 [i_0] [i_1 + 3]))))));
                                arr_14 [i_0] [i_1] [i_4] [i_1] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)1024))));
                                var_13 = ((/* implicit */signed char) ((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2] [i_1 + 1] [i_2 + 3] [i_2 + 1] [i_2 + 3]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1003))))))));
                                var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */int) max(((unsigned short)65518), ((unsigned short)65518)))) % (((/* implicit */int) min((arr_13 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2 - 1]), (var_7))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (arr_3 [i_0] [i_1] [i_0]))) < (min((5199867481160475629ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0]))))))) % (max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_7))))));
                    var_16 -= ((/* implicit */int) ((long long int) max((((/* implicit */short) (_Bool)1)), ((short)-32482))));
                }
                /* LoopSeq 3 */
                for (short i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    arr_17 [i_5] = ((/* implicit */unsigned int) var_2);
                    var_17 = (((~(((((/* implicit */unsigned long long int) 541623692)) ^ (7558710163743566834ULL))))) | (((/* implicit */unsigned long long int) var_5)));
                    arr_18 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))));
                }
                for (short i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) var_5);
                    arr_21 [i_0] [i_0] [i_6] &= ((/* implicit */short) (unsigned short)28672);
                    var_19 = ((/* implicit */_Bool) max((((var_5) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6 + 2] [i_0] [8LL] [8LL] [i_0] [i_0]))))), (((long long int) arr_13 [i_6 + 2] [i_0] [(unsigned char)18] [(unsigned char)18] [i_0] [i_0]))));
                    arr_22 [i_0] [i_1] [i_0] [i_6] = min(((+(var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36858)))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) (((~(((arr_25 [i_1] [i_1]) & (arr_25 [i_1] [i_0]))))) + (((/* implicit */int) (unsigned char)6))));
                    var_21 = var_9;
                }
                var_22 -= ((/* implicit */unsigned short) max((var_6), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)242)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_2) : (11041493253858660518ULL))) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)32489)), (var_3)))))))));
    var_24 = ((/* implicit */int) var_10);
}
