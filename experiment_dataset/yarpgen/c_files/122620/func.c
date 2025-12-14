/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122620
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned char) var_4);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (var_5)))) ? (var_5) : (max((((/* implicit */unsigned long long int) var_8)), (var_4))))), (var_4)));
        var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_11)), (var_4))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (var_3))))))) ? ((+((+(var_2))))) : (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_6)), (var_7))))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                {
                    var_17 = max((var_2), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_11), (((/* implicit */signed char) var_8)))))))));
                    var_18 = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) var_12)), (var_4))), ((-(var_0))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (var_6) : (var_6))), (((/* implicit */int) var_1)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))))), (max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_1))))), (min((((/* implicit */unsigned long long int) var_7)), (var_4)))))));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_20 = min((min((var_0), ((-(var_10))))), (((((/* implicit */_Bool) var_6)) ? ((-(var_14))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) var_7)))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(var_4)))))) ? ((~(((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) var_3)))))) : (max((var_14), (var_5)))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_12))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_6)))), (min((var_2), (((/* implicit */unsigned long long int) var_8)))))) : (max((min((((/* implicit */unsigned long long int) var_11)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (var_13))))))));
                    }
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_13))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (var_13)))))) ? (var_10) : (((/* implicit */unsigned long long int) var_3))));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) var_6)) : ((+(var_7)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4))) : (var_0))));
    var_25 = ((/* implicit */long long int) var_6);
}
