/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159444
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((-967049653), (((/* implicit */int) (unsigned char)230)))))))), ((+(min((((/* implicit */long long int) var_8)), (8601373891237387155LL)))))));
                arr_5 [i_0] [i_1] = (+(((/* implicit */int) max((((/* implicit */signed char) max((var_10), ((_Bool)0)))), ((signed char)6)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_15 |= ((/* implicit */_Bool) var_7);
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_16 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_14)), (var_1)))) ? ((-(((/* implicit */int) (signed char)71)))) : (((/* implicit */int) (signed char)3)))))));
            arr_12 [i_2] = ((((/* implicit */_Bool) 4462072363990888450LL)) ? (max((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)220))))) >= (min((var_2), (((/* implicit */long long int) (short)6991))))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-14)), ((unsigned short)0)))) ? (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)54567)) : (((/* implicit */int) (signed char)-6)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46)))))))) : (((((/* implicit */_Bool) 558551906910208ULL)) ? (((/* implicit */long long int) -627513790)) : (4734142911170509634LL)))));
            arr_13 [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)0) ? (-4462072363990888450LL) : (4503599627370496LL))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
        {
            arr_16 [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (unsigned short)1186)) : (((/* implicit */int) (signed char)31))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (11362693365529521289ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22969)))))) ? (min((((/* implicit */int) (signed char)-94)), (133955584))) : (((((/* implicit */_Bool) (unsigned short)1186)) ? (((/* implicit */int) (unsigned short)11005)) : (2147483647))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned short i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */signed char) min((18446744073709551605ULL), (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 2147483639))))));
                            arr_24 [i_2] [i_2] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) > (((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))), (-1888286503)));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            arr_25 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (signed char)70);
        }
    }
}
