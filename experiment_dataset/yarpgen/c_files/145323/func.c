/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145323
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
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] = 5428395918612682812LL;
                                var_19 = ((((/* implicit */_Bool) arr_4 [(short)0] [5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -2271022084262152344LL)) : (arr_4 [i_1] [(_Bool)1]))) >> (((-5821523580183216637LL) + (5821523580183216640LL))))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] [(unsigned short)18] = ((/* implicit */short) ((((/* implicit */long long int) (~(arr_0 [i_0])))) ^ (((((/* implicit */_Bool) (~(-1413884081)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (-128162390222384984LL)))));
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_5] [i_1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])))), ((!((_Bool)1))))))) : (((((/* implicit */_Bool) var_6)) ? (((arr_9 [i_0 + 1] [i_1]) / (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_1] [i_0] [i_1])))))));
                    var_21 = ((/* implicit */_Bool) (~(max((max((((/* implicit */long long int) arr_16 [(unsigned short)15] [i_1] [i_0])), (arr_7 [i_5] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 480431526)) ? (((/* implicit */int) (short)-28830)) : ((-2147483647 - 1)))))))));
                    var_22 = ((/* implicit */unsigned long long int) ((_Bool) max((min((((/* implicit */long long int) 2147483647)), (arr_7 [(_Bool)1] [i_0] [i_5]))), (5821523580183216636LL))));
                }
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_6]);
                            var_24 -= ((/* implicit */short) arr_19 [i_6] [4] [i_0 + 1]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0 + 2] [i_0] [i_1] [i_0])) ? (1413884083) : (((/* implicit */int) (_Bool)0))))) & (arr_19 [i_0 + 1] [i_0 + 3] [i_0 - 1]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-3))))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) arr_8 [i_0] [4ULL] [4ULL] [4ULL] [i_1] [i_1])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) var_13);
    var_27 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_8)))));
}
