/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124763
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) 4093392945306813475ULL);
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (unsigned short)14752)) : (((int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)14748))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10622)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned short)59968))))) ? (((int) 10096090894841113665ULL)) : ((~(((/* implicit */int) (unsigned short)50790))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        for (short i_6 = 4; i_6 < 8; i_6 += 1) 
        {
            {
                arr_19 [i_5] [i_6] |= ((/* implicit */unsigned char) (unsigned short)15);
                arr_20 [i_5] [i_6 - 4] [1ULL] = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) max(((unsigned short)50783), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))));
            }
        } 
    } 
}
