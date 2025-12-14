/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125645
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
    var_13 = ((/* implicit */unsigned char) (+(((unsigned long long int) ((((/* implicit */unsigned long long int) 864398908U)) - (var_12))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((-935489026868018049LL) != (((/* implicit */long long int) 864398908U))))), (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */long long int) 4078008046U)) : (-6950286902905854456LL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_15 = arr_6 [i_0] [(signed char)12] [i_0];
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [9U])) ? (max(((+(((/* implicit */int) (_Bool)1)))), (var_9))) : (((/* implicit */int) ((unsigned char) 2726190151U)))));
                                arr_13 [i_2] [i_4] [(unsigned short)4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-91))));
                                arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) -935489026868018049LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned long long int) ((int) (unsigned char)133));
                        var_18 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-28270)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (short)-3224)))) + (((((/* implicit */int) var_11)) | (arr_15 [i_6])))));
                        var_19 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (signed char)-55))))) : (((long long int) var_4)))), (((long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
                    }
                } 
            } 
        } 
    }
}
