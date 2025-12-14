/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165227
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46578))) | (min((((/* implicit */long long int) var_1)), (-5174072320668865449LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_13))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (1125899906842623LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18968))))), (((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_19))))))));
                    var_21 = ((/* implicit */unsigned long long int) var_14);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) || (((/* implicit */_Bool) arr_0 [18U] [i_0 - 1])))))));
                        arr_10 [i_0] [i_1] [i_2] [(unsigned short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((var_9) << (((67108863U) - (67108809U)))))))) ? (min((((67108863U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46578))) : (arr_4 [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)18957), (((/* implicit */unsigned short) (signed char)-115))))))))));
                    }
                }
                var_23 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_4 [i_1 - 1])))), (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_0 + 4] [i_0] [i_1 + 1])) || (((/* implicit */_Bool) (short)(-32767 - 1)))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-72)) < (((/* implicit */int) arr_3 [i_0])))))) <= (((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [(_Bool)1])), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_5 [i_0])))))) : (min((var_16), (var_6)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_4)), (8975067440066297868ULL)))))) && (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))));
    var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6))) < (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))))));
}
