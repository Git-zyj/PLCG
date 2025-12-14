/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116522
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
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 3294138915U))) ? (((/* implicit */int) ((unsigned short) (short)-1108))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6078054023767196201LL)) ? (1667112784) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 0U))))) : (((((/* implicit */_Bool) 2128010130U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)46366))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 4115433471U);
                var_21 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [(_Bool)1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    var_22 += arr_3 [i_2 + 1] [i_1] [i_0];
                    arr_6 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) var_18);
                }
                for (int i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 24; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) (-(6078054023767196205LL))))), (((((/* implicit */_Bool) (signed char)11)) ? (arr_8 [i_4 - 1] [i_3] [i_5 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_24 = var_16;
                                var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */unsigned long long int) 6078054023767196207LL)) : (((((/* implicit */_Bool) arr_11 [i_0 - 1] [8U] [i_3 + 1] [i_3] [i_0] [i_0] [i_0])) ? (arr_3 [i_0 + 1] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (unsigned short)55343);
                }
            }
        } 
    } 
    var_26 *= var_17;
}
