/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155971
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
    var_14 = ((/* implicit */signed char) (~(15255896837481840604ULL)));
    var_15 = ((/* implicit */long long int) var_1);
    var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3190847236227711012ULL)) ? (max((var_0), (783395660U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)43), (((/* implicit */unsigned char) (_Bool)0))))))))) ? (((var_9) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (var_13)))))) : (((/* implicit */unsigned long long int) min((((-3185825252751874777LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))))), (max((((/* implicit */long long int) (unsigned char)43)), (9223372036854775807LL))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_0 - 1])), (var_1)))) ? (((/* implicit */int) min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))) : (((/* implicit */int) arr_1 [i_0 + 2]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), ((-2147483647 - 1))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (14006822200371839028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                            var_19 = ((/* implicit */int) max((min((arr_2 [i_3 - 2] [i_0 + 1] [i_0 + 3]), (arr_2 [i_3 + 1] [i_0 + 3] [i_0 + 2]))), (((/* implicit */unsigned long long int) ((max((1155230950U), (((/* implicit */unsigned int) (-2147483647 - 1))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            var_20 = ((/* implicit */signed char) var_10);
                            var_21 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_0 [i_3])))));
                        }
                    } 
                } 
                arr_10 [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) (unsigned short)55045);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3190847236227711012ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */int) (signed char)64))))) : (min((((/* implicit */unsigned long long int) var_13)), (var_9))))) : (((/* implicit */unsigned long long int) min((var_13), (var_11))))));
}
