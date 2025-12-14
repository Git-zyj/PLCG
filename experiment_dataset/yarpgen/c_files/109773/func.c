/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109773
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (signed char)98;
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (_Bool)1);
    var_21 = ((/* implicit */short) min((min((((/* implicit */long long int) (unsigned char)0)), (-9223372036854775791LL))), (((/* implicit */long long int) min(((unsigned char)132), (min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))))));
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)101)), ((unsigned short)49833)));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-1)), (0)));
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) 4194303U)), (9223372036854775791LL))), (((/* implicit */long long int) 4290772972U))))), (min((((/* implicit */unsigned long long int) max(((signed char)-45), (((/* implicit */signed char) (_Bool)1))))), (min((16727602551286909432ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */signed char) min((max((min((((/* implicit */unsigned long long int) (unsigned short)49824)), (281474909601792ULL))), (max((((/* implicit */unsigned long long int) -1105998809430173801LL)), (18446462598799949815ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned char)255)), (4290772993U))), (((/* implicit */unsigned int) (unsigned short)61677)))))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)160)), (9223372036854775794LL)));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */signed char) 1685906813742571735LL);
                    var_24 *= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                }
            } 
        } 
        arr_23 [(_Bool)1] &= ((/* implicit */signed char) (unsigned char)19);
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((min(((unsigned short)15711), (((/* implicit */unsigned short) (unsigned char)9)))), (((/* implicit */unsigned short) (unsigned char)21))));
        var_26 = ((/* implicit */long long int) max((var_26), (max((max((min((-9223372036854775791LL), (((/* implicit */long long int) (unsigned short)45935)))), (((/* implicit */long long int) (unsigned char)114)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((unsigned char)237), (((/* implicit */unsigned char) (signed char)126))))), (4194303U))))))));
    }
}
