/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140602
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
    var_16 = ((/* implicit */short) (~(max(((~(var_8))), (((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) var_12))))))));
    var_17 = var_13;
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_4))))) <= (var_6))))));
                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_7)))))) >= (max(((~(((/* implicit */int) var_14)))), (((/* implicit */int) ((2136568383U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_4)))), ((~(((((/* implicit */int) var_15)) << (((var_1) + (3531867668559142353LL))))))))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (var_2)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_16 [i_0] [i_0] [i_1] [(signed char)0] [i_4] [8ULL] [i_6] = ((/* implicit */unsigned short) (-(max((((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_1))), (max((var_6), (((/* implicit */long long int) var_10))))))));
                                var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_11))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)107)), (var_2))))))) ? (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_7)))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_3), (((/* implicit */short) var_9))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) <= (4661387403170952403LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_10)))))))) : ((+(((/* implicit */int) var_9))))));
                            }
                            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((var_13) || (((/* implicit */_Bool) var_3)))) ? (((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
