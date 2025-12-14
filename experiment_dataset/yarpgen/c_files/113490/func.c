/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113490
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
    var_10 = ((((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */long long int) var_3)) : ((+((-9223372036854775807LL - 1LL)))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) (unsigned short)53940)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))));
    var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
                {
                    var_12 &= ((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_1 - 1] [(_Bool)1])))) < (((((_Bool) (unsigned short)53940)) ? (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)53940)))) : (min((var_9), (((/* implicit */int) arr_0 [i_2]))))))));
                    var_13 = ((/* implicit */long long int) max((((arr_4 [i_2 + 1] [i_1 - 1]) == (((((/* implicit */int) arr_8 [i_0] [i_2] [i_2 + 1])) ^ (var_9))))), (((((arr_3 [(_Bool)1]) / (((/* implicit */int) var_2)))) != (2147483647)))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((var_9), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (-268435456))))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [15LL])))))) ? (((arr_4 [18] [18]) - (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) (short)18530)) : (2147483647)))))));
                }
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned short)57981)) : (((/* implicit */int) (short)-28031))));
                    arr_13 [i_0] [i_3] [i_3 + 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-18531)) >= (((/* implicit */int) (short)-18518)))) || (((/* implicit */_Bool) max((((((/* implicit */int) var_8)) | ((-2147483647 - 1)))), (((/* implicit */int) ((unsigned short) (unsigned short)24651))))))));
                }
                var_15 *= min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)18533))))))), (min((min((((/* implicit */int) arr_11 [i_0] [i_1] [i_1 - 2])), (arr_4 [i_0] [i_1 + 1]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [16])))))));
                var_16 = var_7;
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)186)) ? ((+(-2049593612250923352LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_18 = ((/* implicit */long long int) min(((((_Bool)1) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)102)))) : ((+(1025794283))))), (((((/* implicit */_Bool) ((int) var_8))) ? (var_3) : (((/* implicit */int) var_7))))));
}
