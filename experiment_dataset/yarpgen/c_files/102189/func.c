/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102189
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_6);
        var_10 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */long long int) 1659462966U)), (-2873752067163699623LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? ((+(((/* implicit */int) (signed char)-96)))) : (((/* implicit */int) var_9))));
                        arr_14 [i_0] [(unsigned short)2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (var_3)))));
                        arr_15 [i_0] [(unsigned short)17] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) var_0)))) : ((+(var_6)))));
                        var_11 = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) max(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((+(var_8))) : (var_8))))))));
    }
    for (short i_4 = 1; i_4 < 15; i_4 += 3) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned int) var_8)), (var_3))))))));
        arr_18 [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (min((var_2), (((/* implicit */unsigned long long int) (~(var_6))))))));
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251)))))));
        var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) (~(var_3)))) : (min((var_2), (((/* implicit */unsigned long long int) var_7))))));
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_8)))) : (var_3))))));
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (max((var_3), (((/* implicit */unsigned int) var_9))))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
        var_19 += ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            for (unsigned char i_8 = 3; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_33 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (min((((/* implicit */long long int) var_7)), (var_5))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(2051488362)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))))))));
                    arr_34 [i_7] [14ULL] [i_6] [i_7] = ((/* implicit */int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_6)) : (var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (var_6)))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
}
