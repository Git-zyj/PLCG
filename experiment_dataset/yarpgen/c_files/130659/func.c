/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130659
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
    var_12 = ((/* implicit */int) ((((max((((/* implicit */unsigned int) var_9)), (2693074890U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) 18446744073709551605ULL)))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((signed char) 18446744073709551615ULL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned short) -1148401608);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)1))));
                                arr_15 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [i_0] [i_0 - 2] [i_0] [i_0 - 2])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_5])))) : (((/* implicit */int) arr_16 [i_0] [i_2] [i_2]))));
                                var_16 = ((/* implicit */_Bool) var_9);
                                var_17 = ((/* implicit */signed char) ((short) (+(arr_17 [i_0]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) (-(arr_13 [i_7] [i_7])));
                    arr_23 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_0] [i_0])) <= (((/* implicit */int) (unsigned short)64323)))) ? (arr_9 [i_7] [i_1]) : (((arr_13 [i_0] [i_7]) - (((/* implicit */int) arr_11 [i_0] [i_0]))))));
                }
                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_8);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        {
                            arr_32 [i_0] [i_1] [i_8] [i_9] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_9]);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-117)) ? (-2147483637) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_3))))) > (((((/* implicit */long long int) ((/* implicit */int) var_2))) % (9223372036854775807LL))))))));
                            arr_33 [i_1] [i_0] [i_8] [i_9] [i_0] [i_8] = ((max((arr_19 [i_0 + 1] [i_1] [i_8] [i_9] [i_9] [i_9] [i_1]), (((/* implicit */unsigned long long int) min(((signed char)-121), (arr_11 [i_0] [i_9])))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_8] [i_9]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-((+((~(((/* implicit */int) (_Bool)1))))))));
}
