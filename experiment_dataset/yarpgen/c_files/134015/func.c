/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134015
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-95)))) * (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((arr_5 [i_1] [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (6643385293263928248LL))), (max((max((var_9), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0]))))))))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_17)), (var_7))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (unsigned char)130))));
                var_22 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_16))))) : (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 21; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? ((~(var_6))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)113))))))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (((((/* implicit */_Bool) arr_11 [i_2 - 1])) ? (4628744772033563595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 1])))))));
                            arr_16 [i_5] [i_4] [i_3] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_6)))))) ? (arr_13 [i_2] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((arr_9 [i_2] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))))))));
                        }
                    } 
                } 
                arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) < (((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) var_8)), (0ULL)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (1418799804U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-6310761327741150023LL)))) ? (((var_5) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))))) : (max((max((-2093150719375090384LL), (-1916703828627959262LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
}
