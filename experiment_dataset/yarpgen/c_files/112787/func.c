/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112787
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24068)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [2ULL]))));
            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)24068)))))));
            var_12 = ((/* implicit */short) var_4);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)32))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) (unsigned short)8191)))));
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
            {
                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)48))));
                var_16 = ((/* implicit */signed char) ((short) arr_7 [i_1] [i_1]));
                arr_13 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_3);
            }
        }
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(signed char)7] [0U])) - (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
        var_18 |= ((/* implicit */short) ((1721557810) + (((/* implicit */int) (short)-24068))));
        arr_14 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) (unsigned short)15831)))));
        var_19 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)15828)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) : (607524916U))));
    }
    var_20 = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((unsigned short) var_9))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24068)))))));
    var_21 = min((-966146839), (((/* implicit */int) (unsigned short)49704)));
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_15 [12]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            var_23 = ((/* implicit */int) ((unsigned short) 607524916U));
            arr_19 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3968934728U)))) : (((unsigned int) arr_17 [i_4]))));
        }
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            var_24 &= ((((/* implicit */_Bool) (unsigned short)15831)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_20 [i_4]), (((/* implicit */unsigned short) (short)24066))))))))));
            var_25 = ((/* implicit */long long int) ((0ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)75))))) ? (((/* implicit */int) (unsigned char)7)) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)15817)) : (((/* implicit */int) (short)32407)))))))));
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
        {
            arr_25 [i_4] [i_4] = min((((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) var_4)), (var_2))))), (max((max((((/* implicit */unsigned long long int) arr_17 [i_4])), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (arr_17 [i_4])))))));
            var_26 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)49704)), ((~(((/* implicit */int) (unsigned char)236))))));
        }
        var_27 -= max((((((/* implicit */_Bool) min((3687442392U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) : (18258471485699727458ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)49718), (((/* implicit */unsigned short) (signed char)-1))))) ? (max((arr_22 [i_4]), (((/* implicit */long long int) arr_15 [2ULL])))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))));
    }
}
