/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131059
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
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (-9104599101869339882LL)))) ? (4095ULL) : (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) * (var_7)))) : (max((max((var_17), (((/* implicit */unsigned long long int) var_19)))), (var_15)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                var_22 = ((/* implicit */short) (_Bool)1);
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + ((~(((/* implicit */int) arr_7 [i_1] [i_1]))))));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)7), (((/* implicit */unsigned short) (signed char)63))))) ? (arr_11 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (-114284437)))), (arr_9 [i_1] [i_4]))) : (((((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (arr_9 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))))) << (((arr_9 [i_1] [i_2]) - (10763886033016054751ULL)))))))));
                                var_25 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 5U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (8591447811181159197LL))), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) (unsigned char)152)) : (min((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20825)))), ((-(((/* implicit */int) (_Bool)1)))))));
                                var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) - (((/* implicit */int) (_Bool)1))));
                            }
                            var_27 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)63488))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [(_Bool)1] [i_0] [(_Bool)1] [11ULL]);
            }
        } 
    } 
}
