/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175809
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -115661744912882766LL)) ? ((((((_Bool)0) ? (1033066144U) : (4294967281U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (max((min((1033066141U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-79)))))))));
    var_15 = (((_Bool)0) ? (((unsigned int) 3640309553U)) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) | (((/* implicit */int) var_11))))));
    var_16 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((-5398972280042570611LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_0 - 1] [i_2] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_13)) ? (3261901168U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((1033066141U) >> (((((/* implicit */int) max(((short)2048), (var_1)))) - (6279)))))));
                        arr_15 [i_2] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3157540900U))))), ((((!(((/* implicit */_Bool) -7622869510490394490LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0 - 1])))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) ((short) (short)2048))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])))))));
                        arr_19 [i_0] [i_0] [13LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_10 [i_0])))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_3)))));
                        var_19 += ((/* implicit */unsigned int) 15357242532056687520ULL);
                        arr_20 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4 + 4] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_27 [i_0] [(short)19] [i_2] [i_1] [i_0] = ((1033066144U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))));
                                var_21 *= ((/* implicit */unsigned char) (!(((arr_24 [i_6 + 1] [i_1 - 1] [i_0 - 1]) < (arr_24 [i_6 - 1] [i_1 - 4] [i_0 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
