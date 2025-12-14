/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113707
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (unsigned char)247);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
                        var_14 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)56)) ? (((/* implicit */int) (unsigned short)52573)) : (((/* implicit */int) (_Bool)0))))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_15 -= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)1))));
        arr_11 [i_4] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4217133026245833098LL)))))));
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 16; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11260)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (34292629504ULL))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) (signed char)111);
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) 3913111950U)) : (((((/* implicit */_Bool) (short)26781)) ? (3274996541349909528LL) : ((-9223372036854775807LL - 1LL))))))))))));
        }
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (short)-27936)) : (((/* implicit */int) (signed char)73)))))))));
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~((((_Bool)1) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) -2)) ? (-1203933428) : (1856588473))))))))));
    var_21 = ((/* implicit */short) var_5);
}
