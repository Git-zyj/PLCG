/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175724
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
    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(((long long int) arr_0 [i_2])))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) -1828349822)) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_9 [0U] [i_1] [i_1] [i_1 + 2])))) : ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10464)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [(_Bool)1])))) ? (((/* implicit */int) ((((/* implicit */int) (short)14265)) == (((/* implicit */int) (short)-10491))))) : (min((((/* implicit */int) var_3)), (940696352)))))));
                            var_16 = ((/* implicit */long long int) ((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10485))) != (16642401544181454414ULL)))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)5] [i_1] [i_2] [i_3]))) : (arr_1 [i_1]))) == (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((long long int) ((arr_1 [i_0 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 2] [i_1] [i_1 + 2] [i_1 + 1]))))));
                var_18 = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)203)) / (-872657793)))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (var_5)))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_11)) : (3883861887662169636ULL)))))));
}
