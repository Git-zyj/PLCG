/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179353
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_3 - 4])) >> (((arr_10 [i_0] [i_1 + 1] [i_0] [i_1] [i_0]) - (9378642736804302481ULL)))))) ? (((/* implicit */unsigned long long int) (~(0U)))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 + 2] [i_1 - 1]))) : (arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1]))))))));
                            arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_2])) < (((/* implicit */int) (unsigned short)38568))))), (var_13)))) ? ((-(1702888890))) : (((/* implicit */int) arr_8 [12ULL] [i_0]))));
                        }
                    } 
                } 
                arr_13 [i_1 + 1] [i_0] = ((((/* implicit */_Bool) min((arr_5 [i_1 - 2] [i_1 + 1]), (arr_5 [i_1 - 2] [i_1 + 1])))) ? (((/* implicit */unsigned int) 1687953095)) : (min((((unsigned int) (unsigned char)56)), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_15 = max((min((((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) var_6))))), (((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (arr_4 [i_4] [i_5]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_7 [i_5 - 2] [i_4 + 1] [i_4 + 1] [i_1 + 1])), (arr_8 [i_1 - 1] [i_5 - 1])))));
                            var_16 = ((/* implicit */_Bool) (signed char)79);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_6])) ? ((-(((/* implicit */int) arr_21 [i_6])))) : (((((/* implicit */_Bool) ((unsigned char) arr_21 [i_6]))) ? (((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_21 [(unsigned char)1])))) : (((/* implicit */int) var_10))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6])) ? (max(((~(((/* implicit */int) arr_22 [i_6] [i_6])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_22 [i_6] [i_6])))))) : (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_1)))))))));
    }
    var_19 = ((/* implicit */long long int) (signed char)127);
}
