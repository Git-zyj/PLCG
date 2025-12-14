/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158003
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 10827586358940822088ULL)) || (((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) (unsigned short)17167))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */signed char) max((18446744073709551615ULL), (0ULL)));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)33063))))), (((long long int) 10827586358940822083ULL))));
                            var_15 = ((/* implicit */unsigned char) (+((~(10827586358940822088ULL)))));
                            arr_10 [i_0] [i_1] [i_2] [5U] |= ((/* implicit */long long int) max((min((min((((/* implicit */unsigned long long int) (signed char)-78)), (7619157714768729527ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)87)), (8476993602337918470LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36301)) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (short)-5042)) : (((/* implicit */int) (signed char)-38)))) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-27)))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_3] [5LL] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)21)) <= (((/* implicit */int) (_Bool)1))));
                                arr_14 [i_4] = ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) : (6204640486198755344ULL)));
                            }
                            for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_1] [i_3] |= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)90))))), ((+(3805897847224183494ULL))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((4845712964713680140ULL) & (((/* implicit */unsigned long long int) -2061576397)))), (((/* implicit */unsigned long long int) ((signed char) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (~(6768425526520120086LL)))) : (min((((/* implicit */unsigned long long int) (unsigned char)145)), (9910754350954542960ULL)))));
                            }
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) max((5998203486532994632LL), (((/* implicit */long long int) (signed char)94)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-109)))))));
            }
        } 
    } 
}
