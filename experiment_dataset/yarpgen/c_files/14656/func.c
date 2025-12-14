/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14656
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
    var_10 &= ((/* implicit */signed char) ((short) (unsigned char)64));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)30414)))) ? (var_2) : (((/* implicit */int) ((signed char) min((var_6), (((/* implicit */unsigned long long int) var_0)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned short) var_1);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_9))) : (arr_4 [i_3 + 3] [i_3 + 3] [i_1 - 1]))))));
                                var_14 = ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) < ((-(((/* implicit */int) (short)30414))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_2 [i_1] [(signed char)9] [2U])) % (var_2)))))));
                            }
                            var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (arr_4 [i_0] [(short)11] [i_0]) : (arr_4 [i_3 + 2] [i_2] [i_1 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30409))))) ? (max((((/* implicit */int) (short)-30415)), (-1818866979))) : (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (short)30415);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30414))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 3] [i_6])) : (((/* implicit */int) (short)30428))))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */int) arr_17 [i_5])))) : (((/* implicit */int) max(((short)30433), (((/* implicit */short) arr_11 [(_Bool)1] [i_5] [i_5] [i_5] [i_5] [i_5]))))))))));
                        }
                    } 
                } 
                var_19 &= ((/* implicit */short) arr_9 [i_0]);
                var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2])))) ? ((-(var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 3] [i_1 + 2])) : (var_2))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-30429))))))) ? (max((((/* implicit */int) var_4)), (min((((/* implicit */int) var_7)), (var_2))))) : (((/* implicit */int) var_4))));
}
