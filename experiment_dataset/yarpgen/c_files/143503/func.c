/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143503
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_0 - 4]))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) == (((/* implicit */int) (unsigned short)65535))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) (unsigned short)3);
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (arr_13 [i_0 - 3] [i_3 + 1])));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) -10))));
                    }
                    for (short i_4 = 2; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_8))));
                        var_16 -= ((/* implicit */unsigned short) (!(((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)0)) > (-57627580)))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_18 = (signed char)(-127 - 1);
                            var_19 = ((/* implicit */_Bool) (~(8191LL)));
                            var_20 -= ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) arr_17 [i_2] [i_1] [i_0]))) + (2147483647))) << (((((/* implicit */int) var_9)) - (189)))));
                        }
                        var_21 = ((/* implicit */unsigned char) arr_9 [i_0] [i_5]);
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */long long int) arr_4 [i_0] [i_0 - 4])) <= (var_0))))));
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        arr_26 [i_7] = ((/* implicit */int) max(((~((+(3274389705092038519LL))))), (((/* implicit */long long int) (signed char)-107))));
        arr_27 [i_7] = ((/* implicit */int) 9223372036854775807LL);
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 7; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) 9223372036854775806LL);
        var_24 = ((/* implicit */int) var_4);
    }
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (signed char)85)))) : ((+(((/* implicit */int) var_2))))))))))));
    var_26 = ((/* implicit */unsigned int) min(((-(min((((/* implicit */long long int) (unsigned short)65533)), (var_0))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
}
