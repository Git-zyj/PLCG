/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103422
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
    var_18 += ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_13))))) : (((long long int) 1125899906842623ULL))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~((-(((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                arr_7 [15ULL] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((var_15) == ((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_5 [i_2] [i_2] [i_2])))))));
                arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (signed char)106));
                var_20 = ((/* implicit */_Bool) min((min(((unsigned short)64978), (((/* implicit */unsigned short) var_14)))), (((/* implicit */unsigned short) max((min((((/* implicit */short) (signed char)106)), (var_7))), (((/* implicit */short) arr_2 [i_2] [i_0])))))));
                arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) (unsigned short)271))));
            }
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) : (3609123160U)));
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_4]))));
                    arr_14 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((short) var_8))), ((unsigned short)558))))));
                }
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 4278190080U)))))) && (((/* implicit */_Bool) var_11))));
            }
        }
        for (long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) var_10);
            arr_19 [i_0] [i_0] [i_5] &= ((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_5] [i_5 + 2]))) < (((((/* implicit */_Bool) (unsigned short)64978)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5]))) : (3792749273U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-43)) == (((/* implicit */int) (_Bool)1)))))) : (min((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)276))) : (arr_17 [i_5]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_5] [i_5]))))))));
        }
        var_25 ^= ((/* implicit */unsigned int) arr_12 [(unsigned char)12] [i_0] [i_0] [i_0] [i_0]);
    }
    var_26 = ((/* implicit */signed char) var_11);
    var_27 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_13)) ? (var_4) : (4278190080U))), (((/* implicit */unsigned int) max((var_14), (var_9)))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33449)) ? (((/* implicit */int) (unsigned short)36878)) : (((/* implicit */int) (unsigned short)52393)))))));
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_12)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_0))))))))))));
}
