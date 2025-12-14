/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143496
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
    var_15 *= ((/* implicit */unsigned short) max(((~(min((var_10), (((/* implicit */int) var_7)))))), ((+((+(var_3)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_13))))) : (max((((/* implicit */long long int) (unsigned short)7337)), (-6349382912986891723LL)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                            arr_14 [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 2; i_4 < 7; i_4 += 2) /* same iter space */
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */short) (+(max((var_9), (((/* implicit */unsigned int) var_13))))));
                                var_16 *= ((/* implicit */unsigned char) var_3);
                                var_17 |= ((/* implicit */long long int) var_10);
                            }
                            for (long long int i_5 = 2; i_5 < 7; i_5 += 2) /* same iter space */
                            {
                                arr_23 [i_2] [i_3] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) var_2))))) + (max((((/* implicit */long long int) var_2)), (var_4))))), (((/* implicit */long long int) var_12))));
                                var_18 -= ((/* implicit */unsigned short) var_2);
                            }
                            var_19 = ((/* implicit */int) (+((+(6349382912986891731LL)))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_13)) > ((+(((/* implicit */int) var_6))))))) << (((max((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) var_2)))) + (7422))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_26 [i_6] [i_1] [i_0] [i_6] = (+(var_0));
                    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_29 [i_0] [i_1] [i_1] [i_7] = (~(var_1));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        var_23 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_5))))), ((+(((/* implicit */int) var_6))))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((-806850031605849254LL) <= (((/* implicit */long long int) (-2147483647 - 1))))))));
                    }
                }
                var_25 += ((/* implicit */short) (-((~(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) var_13)) / (var_0)))))) ? (var_4) : (min((max((var_1), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))))));
}
