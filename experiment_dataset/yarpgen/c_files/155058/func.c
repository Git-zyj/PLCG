/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155058
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */signed char) (short)-1);
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (signed char)-42);
                        arr_14 [i_0] [i_1] [i_2] [i_3 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)523)) || (((/* implicit */_Bool) 1388269757222226022LL))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_1 [i_4 - 3]))));
                        arr_18 [i_0] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((short) arr_15 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_4 + 1] [i_4]));
                    }
                    var_17 = ((/* implicit */long long int) max((var_17), (((long long int) (-(((/* implicit */int) (unsigned short)523)))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */long long int) ((956993652) - (((/* implicit */int) (signed char)-38))))), (min((1388269757222226022LL), (((/* implicit */long long int) arr_6 [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 1] = ((/* implicit */signed char) min((min((((/* implicit */short) arr_21 [i_5 + 1])), (var_5))), (((/* implicit */short) (signed char)41))));
                            var_19 += (-(max((((/* implicit */int) (signed char)-34)), ((-(((/* implicit */int) (signed char)-42)))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_9 [i_5 + 2] [i_5 - 1]))));
                        }
                    } 
                } 
                arr_32 [12ULL] [i_6] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) min(((unsigned short)65016), (((/* implicit */unsigned short) (_Bool)1))))), ((-(((/* implicit */int) (short)-15))))));
            }
        } 
    } 
}
