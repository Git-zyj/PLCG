/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150694
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
    var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (unsigned char)0)), (4188930484U)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0]))));
                var_22 |= ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)68))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)2897)))) : (((/* implicit */int) (signed char)-62))));
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) - (((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) min(((signed char)68), ((signed char)-64))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_23 = (+(-7486700898650578887LL));
                                arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (signed char)-69);
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_3 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) arr_0 [i_3 + 1])))) : (((((/* implicit */int) arr_0 [i_3 + 1])) << (((-8784966151061358569LL) + (8784966151061358583LL)))))));
                                var_25 -= var_8;
                            }
                            var_26 = ((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_3 - 1] [i_2]) == (arr_10 [i_0] [i_3 + 1] [22LL]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [9U] [i_1] [9U]))))) : (max((((/* implicit */long long int) max((((/* implicit */signed char) var_8)), (arr_4 [(_Bool)1] [i_1] [(_Bool)1])))), (-7693826358749158210LL)))));
                            var_27 &= ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-37)))), (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))))) : ((~(((var_8) ? ((-9223372036854775807LL - 1LL)) : (-1LL)))))));
}
