/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139765
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) 406383474867213710LL))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_8))) : (((/* implicit */unsigned long long int) ((406383474867213727LL) >> (((/* implicit */int) (signed char)32))))))) ^ (((/* implicit */unsigned long long int) max((406383474867213710LL), (((/* implicit */long long int) var_2)))))));
    var_16 = ((/* implicit */signed char) (+(min((((((/* implicit */long long int) 2097152U)) / (-4142329134723613577LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (15728640) : (((/* implicit */int) (_Bool)1)))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39570)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned short) var_4))) : (((((/* implicit */int) (signed char)56)) << (((var_3) + (2371755830955625401LL))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_13)) : (16))), (((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_19 = (-(var_6));
                        var_20 -= ((/* implicit */signed char) arr_1 [(short)17] [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) var_6);
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_3] [i_1]))))), (((unsigned int) (short)-15801))))) ? (((/* implicit */long long int) ((arr_1 [i_4] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [10U]))) : (((var_2) | (arr_4 [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)60)))) & (((((/* implicit */_Bool) (unsigned short)39570)) ? (-24LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)69)))))))));
                            var_23 = ((int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_1])) <= (((/* implicit */int) arr_9 [i_1]))))), (((unsigned short) var_8))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_15 [i_1] [i_1 - 2] [(unsigned short)3] [i_1 - 2] [13ULL] [(unsigned short)3] [i_5] = ((/* implicit */unsigned char) (+((~(8188U)))));
                            arr_16 [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)21)));
                        }
                    }
                }
            } 
        } 
    } 
}
