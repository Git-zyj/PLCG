/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16580
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-5749))))) ? (((unsigned int) (unsigned short)65535)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)3571)))))))) ? ((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8787423053170306935ULL) : (524360506746584867ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13526400961381538064ULL)) ? (min((((/* implicit */unsigned int) (signed char)-94)), (var_5))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)(-32767 - 1)))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)13805)) ? (((((/* implicit */_Bool) var_3)) ? (1642750986U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32740))))) : (((/* implicit */unsigned int) (+(503796960)))))), (((/* implicit */unsigned int) var_8))));
                        var_17 = ((/* implicit */unsigned int) (~(9223372036854775807LL)));
                        var_18 = ((signed char) ((((/* implicit */_Bool) var_8)) ? (4080540525U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)2537)))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((int) 3400870566U))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_4])) : (524360506746584867ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */unsigned long long int) (+(arr_13 [i_0] [i_0] [i_1] [i_0] [i_0]))))))));
                            var_20 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)0));
                        }
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned long long int) (short)-29090);
    }
    /* LoopNest 3 */
    for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        for (signed char i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) arr_17 [i_5] [i_6 - 1]);
                    var_22 &= ((/* implicit */int) ((min((((/* implicit */long long int) min(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1))))), (max((5561011045856902089LL), (((/* implicit */long long int) (signed char)109)))))) != (((((/* implicit */_Bool) 1073741823U)) ? (((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5 - 1] [i_7])) ? (var_3) : (9223372036854775806LL))) : (((long long int) (-2147483647 - 1)))))));
                }
            } 
        } 
    } 
}
