/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153915
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
    var_14 = ((/* implicit */long long int) var_3);
    var_15 |= var_4;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) (-((~(((/* implicit */int) var_9))))));
        var_17 = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_10))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_3 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 - 3] [i_1])) ? (var_6) : (var_6)))));
                    var_21 |= ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) var_7)));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) (unsigned short)37318))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))));
                    var_23 = ((/* implicit */signed char) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) > (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)127)))))))) ? ((-(((/* implicit */int) var_13)))) : (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 3; i_6 < 10; i_6 += 4) 
            {
                {
                    var_25 &= ((signed char) arr_11 [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) arr_2 [i_4] [i_4]);
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) ((unsigned int) var_13))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) min((((/* implicit */int) var_11)), ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_10)) - (21))))), (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_10])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))) ? (min((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) arr_16 [i_10] [i_9 - 1] [i_4])), (var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) min((var_3), (((/* implicit */short) arr_9 [i_4] [0] [i_4] [i_10]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)240))))));
                                var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((unsigned short) arr_29 [i_4] [8U] [i_10] [i_12]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((signed char) (signed char)(-127 - 1)))) ? (((((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10] [i_9 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_10]))) : (arr_26 [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_24 [i_4] [i_4])) : (((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) var_3);
    }
}
