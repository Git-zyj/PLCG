/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123890
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
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (9068410869158679936LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65)))))) ? (((/* implicit */int) ((signed char) 9068410869158679936LL))) : (((/* implicit */int) ((var_11) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)95))))))))) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) : (-3174172285720302210LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 9223372036854775807LL))))));
                                var_21 = ((/* implicit */long long int) (short)18090);
                                arr_11 [i_0] [12LL] [i_0] = ((/* implicit */_Bool) (signed char)1);
                                arr_12 [i_1] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */long long int) (signed char)1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) 
    {
        for (short i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((signed char) -9068410869158679930LL));
                    var_23 -= ((/* implicit */unsigned short) 2997722029657069319ULL);
                    arr_21 [(unsigned short)6] &= ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
}
