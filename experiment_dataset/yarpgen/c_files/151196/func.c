/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151196
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
    var_10 = ((/* implicit */unsigned int) var_2);
    var_11 *= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-32759)))) + ((~(((/* implicit */int) var_3))))))) : (var_8)));
                var_13 &= ((/* implicit */_Bool) var_0);
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0] [i_0]))))))));
                var_15 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                arr_5 [i_0] &= ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) (short)(-32767 - 1));
                    var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_6 [i_2]), (arr_6 [i_2])))), (((unsigned long long int) arr_6 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [i_2] [i_4 - 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_3 + 1] [i_6 + 3]), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_6 + 1] [i_2 + 1])) != (((/* implicit */int) arr_9 [i_2] [i_6 + 1] [i_2 - 1])))))) : (var_4)));
                                var_18 = ((/* implicit */_Bool) max(((unsigned char)17), (((/* implicit */unsigned char) (signed char)-123))));
                                var_19 = ((/* implicit */_Bool) min((max((((/* implicit */short) ((_Bool) arr_20 [i_2] [i_3 + 1] [i_4] [17ULL] [i_6 + 3] [i_4] [i_4]))), (var_1))), (((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) && ((!((_Bool)1))))))));
                                arr_22 [i_2] [i_6] [i_6] [i_5] [3LL] [(_Bool)1] [i_2] = ((var_4) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3968))));
                            }
                        } 
                    } 
                    arr_23 [i_2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 + 1])) ? (var_4) : (((/* implicit */long long int) var_0)))));
                    arr_24 [i_4] [i_2] [i_3 + 1] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (max(((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (~(-1278954563))))))));
                }
            } 
        } 
    } 
}
