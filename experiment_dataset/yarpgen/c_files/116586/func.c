/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116586
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
    var_10 &= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) var_7)))), (var_4)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */_Bool) (unsigned short)7809);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) 16232351562229292268ULL);
                                var_12 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 2214392511480259345ULL))))) >> (((((/* implicit */int) max((arr_11 [i_0]), ((short)-32753)))) + (10891))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_20 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [(unsigned short)2] [i_2] [(unsigned short)2]))))))) ^ (((/* implicit */int) arr_16 [i_6] [i_5] [i_2] [i_2] [i_0] [i_0]))));
                                var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((3479056559U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_16 [11U] [i_1 - 1] [i_2] [i_2] [i_5] [i_6])) : (((/* implicit */int) arr_1 [i_5] [i_0])))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_2 - 1] [10U] [i_2] [i_2 - 1] [i_2])), (arr_10 [i_2] [i_5] [i_2] [i_2])))), (((arr_0 [i_2 + 1] [i_2 + 1]) + (((/* implicit */unsigned long long int) arr_15 [i_1] [i_2] [i_5]))))))));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)32753))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_6])))) : ((+(((/* implicit */int) arr_2 [(short)4] [i_1]))))))), (arr_18 [i_0] [i_0])))));
                                var_15 = ((/* implicit */unsigned short) (-(((unsigned int) (!(((/* implicit */_Bool) 16777215U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) (~(((/* implicit */int) max(((short)32753), ((short)-32764))))));
}
